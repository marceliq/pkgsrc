# $NetBSD: Makefile,v 1.12 2019/01/16 17:58:20 youri Exp $

.include "../../meta-pkgs/mate/Makefile.common"

VERSION=	1.20.1
DISTNAME=	mate-indicator-applet-${VERSION}
CATEGORIES=	x11

COMMENT=	MATE indicator applet

.include "../../x11/mate-panel/buildlink3.mk"
.include "../../devel/libindicator3/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
