# $NetBSD: Makefile,v 1.73 2018/12/09 18:52:02 adam Exp $
#

DISTNAME=	libgweather-2.30.3
PKGREVISION=	47
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GNOME:=sources/libgweather/2.30/}
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://www.gnome.org/
COMMENT=	Weather information access library
LICENSE=	gnu-gpl-v2

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config intltool gmake msgfmt

GCONF_SCHEMAS+=	gweather.schemas
PKGCONFIG_OVERRIDE+=	libgweather/gweather.pc.in

CONFLICTS+=	gnome-applets<2.22.0

.include "../../devel/GConf/schemas.mk"
.include "../../graphics/gnome-icon-theme/buildlink3.mk"
.include "../../x11/gtk2/buildlink3.mk"
.include "../../net/libsoup/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
