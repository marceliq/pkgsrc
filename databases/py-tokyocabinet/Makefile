# $NetBSD: Makefile,v 1.13 2018/07/03 05:03:07 adam Exp $

VERSION=	0.5
DISTNAME=	tokyocabinet-${VERSION}
PKGNAME=	${PYPKGPREFIX}-tokyocabinet-${VERSION}
CATEGORIES=	databases
MASTER_SITES=	http://python-tokyocabinet.googlecode.com/files/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://pypi.python.org/pypi/tokyocabinet/
COMMENT=	Python wrapper to tokyocabinet database
LICENSE=	mit

PYTHON_VERSIONS_INCOMPATIBLE=	34 35 36 37 # not yet ported as of 0.5

.include "../../databases/tokyocabinet/buildlink3.mk"
.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
