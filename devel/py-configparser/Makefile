# $NetBSD: Makefile,v 1.5 2019/01/25 12:26:20 adam Exp $

DISTNAME=	configparser-3.5.2
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	devel python
MASTER_SITES=	${MASTER_SITE_PYPI:=c/configparser/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/jaraco/configparser
COMMENT=	Updated configparser from Python 3.5
LICENSE=	mit

DEPENDS+=	${PYPKGPREFIX}-backports-[0-9]*:../../devel/py-backports

USE_LANGUAGES=	# none

PYTHON_VERSIONS_ACCEPTED=	27

post-install:
	${RM} ${DESTDIR}${PREFIX}/${PYSITELIB}/backports/__init__.py*

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
