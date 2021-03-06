# $NetBSD: Makefile,v 1.31 2018/08/22 09:46:31 wiz Exp $

DISTNAME=	bup-0.28.1
PKGREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_GITHUB:=bup/}
# bup has two problems that make packaging difficult.  One is that
# building man pages requires non-portable tools (pandoc).  The other
# is that it is hosted on github, which makes hosting tarballs
# difficult.  The combination of this leads to having a branch "man"
# in bup's git which has autogenerated man pages.  For now, we created
# a bup-man tarball that contains the built man pages in a bup-man
# directory, and host it at MASTER_SITES_LOCAL.
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} ${DISTNAME:S/bup/bup-man/}${EXTRACT_SUFX}

MAINTAINER=	gdt@NetBSD.org
HOMEPAGE=	https://github.com/bup/bup
COMMENT=	Highly efficient file backup system based on the git packfile format
LICENSE=	gnu-gpl-v2

DEPENDS+=	par2-[0-9]*:../../archivers/par2
DEPENDS+=	${PYPKGPREFIX}-readline-[0-9]*:../../devel/py-readline
DEPENDS+=	${PYPKGPREFIX}-tornado-[0-9]*:../../www/py-tornado
DEPENDS+=	git-base-[0-9]*:../../devel/git-base

# TEST_DEPENDS
BUILD_DEPENDS+=	rsync-[0-9]*:../../net/rsync

PYTHON_VERSIONS_INCOMPATIBLE=	34 35 36 37 # py-fuse-bindings

DOCDIR=		${WRKDIR}/bup-man

TEST_TARGET=	test

MAKE_FLAGS+=	PREFIX=${PREFIX}
MAKE_FLAGS+=	PYTHON=${PYTHONBIN}
MAKE_FLAGS+=	MANDIR=${DESTDIR}${PREFIX}/${PKGMANDIR}

USE_TOOLS+=		bash gmake perl:run
REPLACE_PERL+=		wvtest

REPLACE_BASH+=		cmd/import-rdiff-backup-cmd.sh
REPLACE_BASH+=		t/compare-trees
REPLACE_BASH+=		t/configure-sampledata
REPLACE_BASH+=		t/force-delete
REPLACE_BASH+=		t/subtree-hash
REPLACE_BASH+=		t/test-cat-file.sh
REPLACE_BASH+=		t/test-command-without-init-fails.sh
REPLACE_BASH+=		t/test-index-check-device.sh
REPLACE_BASH+=		t/test-meta.sh
REPLACE_BASH+=		t/test-redundant-saves.sh
REPLACE_BASH+=		t/test-restore-single-file.sh
REPLACE_BASH+=		t/test-rm-between-index-and-save.sh
REPLACE_BASH+=		t/test-save-creates-no-unrefs.sh
REPLACE_BASH+=		t/test.sh
REPLACE_BASH+=		wvtest-bup.sh

INSTALLATION_DIRS+=	${PKGMANDIR}/man1 share/doc/${PKGBASE}

post-install:
	${INSTALL_DATA} ${DOCDIR}/*.1 ${DESTDIR}${PREFIX}/${PKGMANDIR}/man1
	${INSTALL_DATA} ${WRKSRC}/DESIGN ${DESTDIR}${PREFIX}/share/doc/bup
	${INSTALL_DATA} ${WRKSRC}/README ${DESTDIR}${PREFIX}/share/doc/bup

.include "options.mk"

.include "../../lang/python/application.mk"
.include "../../mk/bsd.pkg.mk"
