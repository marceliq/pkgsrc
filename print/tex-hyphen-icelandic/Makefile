# $NetBSD: Makefile,v 1.8 2019/01/26 22:08:54 markd Exp $

DISTNAME=	hyphen-icelandic
PKGNAME=	tex-${DISTNAME}-2018
TEXLIVE_REV=	49078

MAINTAINER=	minskim@NetBSD.org
COMMENT=	Icelandic hyphenation patterns
LICENSE=	lppl-1.3c

DEPENDS+=	tex-hyphen-base-[0-9]*:../../print/tex-hyphen-base
DEPENDS+=	tex-hyph-utf8-[0-9]*:../../print/tex-hyph-utf8

TEX_HYPHEN_DAT+=	icelandic loadhyph-is.tex
TEX_HYPHEN_DEF+=	\\addlanguage{icelandic}{loadhyph-is.tex}{}{2}{2}
TEX_HYPHEN_LUA+=	['icelandic']={ \
			  loader='loadhyph-is.tex', \
			  lefthyphenmin=2, \
			  righthyphenmin=2, \
			  synonyms={}, \
			  patterns='hyph-is.pat.txt', \
			  hyphenation='', \
			},

.include "../../print/texlive/package.mk"
.include "../../mk/bsd.pkg.mk"
