# $NetBSD: Makefile,v 1.23 2017/06/08 04:31:34 adam Exp $

DISTNAME=	libepoxy-1.4.3
CATEGORIES=	graphics
MASTER_SITES=	${MASTER_SITE_GITHUB:=anholt/}
GITHUB_TAG=	${PKGVERSION_NOREV}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/anholt/libepoxy/
COMMENT=	Library for OpenGL function pointer management
LICENSE=	mit

BUILD_DEPENDS+=	${PYPKGPREFIX}-expat>=0:../../textproc/py-expat

USE_LIBTOOL=		yes
USE_TOOLS+=		pkg-config autoconf autoreconf automake
GNU_CONFIGURE=		yes
PKGCONFIG_OVERRIDE+=	epoxy.pc.in
PYTHON_FOR_BUILD_ONLY=	yes

.include "options.mk"

pre-configure:
	cd ${WRKSRC} && autoreconf -vif

.include "../../devel/xorg-util-macros/buildlink3.mk"
.include "../../lang/python/tool.mk"
.include "../../mk/bsd.pkg.mk"
