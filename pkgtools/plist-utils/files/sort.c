/* $NetBSD: sort.c,v 1.2 2018/02/23 06:31:34 adam Exp $ */

/*-
 * Copyright (c) 2016 The NetBSD Foundation, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

#include <sys/cdefs.h>
__RCSID("$NetBSD: sort.c,v 1.2 2018/02/23 06:31:34 adam Exp $");

#include <err.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


#include "plist_getline.h"
#include "plist_tree.h"

int
main(int argc, char **argv)
{
	int ch;
	int iflag = 0;
	char *buffer;
	FILE *stream;

	setprogname(argv[0]);

	while((ch = getopt(argc, argv, "i")) != -1) {
		switch (ch) {
		case 'i':
			iflag = 1;
			break;
		default:
			errx(EXIT_FAILURE, "Invalid parameter specified");
			/* NOTREACHED */
		}
	}

	argc -= optind;
	argv += optind;

	if (iflag > 0 && argc < 0)
		errx(EXIT_FAILURE, "Missing file-name for the in-place option");

	plist_tree_init();

	/* No files specified - read from stdin */
	if (argc == 0)
		stream = stdin;
	else { /* Alternatively read from the given file */
		stream = fopen(argv[0], "r");
		if (!stream) {
			err(EXIT_FAILURE, "fopen");
		}
	}

	/* Read entries and put into tree */

	while ((buffer = plist_getline(stream)) != NULL) {
		plist_tree_insert(buffer);
		free(buffer);
	}

	/* Prepare for write */

	if (iflag > 0) { /* If there is in-place mode, reopen the file */
		/* Truncate file to 0 */
		stream = freopen(argv[0], "w", stream);
		if (!stream)
			err(EXIT_FAILURE, "open");
		/* Is this needed? */
		rewind(stream);
	} else { /* Set stream to stdout */
		stream = stdout;
	}

	plist_tree_dump(stream);

	return EXIT_SUCCESS;
}
