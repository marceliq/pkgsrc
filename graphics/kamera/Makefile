# $NetBSD: Makefile,v 1.39 2018/12/13 19:52:00 adam Exp $

DISTNAME=	kamera-${_KDE_VERSION}
PKGREVISION=	13
CATEGORIES=	graphics
COMMENT=	KDE digital camera manager

.include "../../meta-pkgs/kde4/Makefile.kde4"

.include "../../meta-pkgs/kde4/kde4.mk"

.include "../../devel/libgphoto2/buildlink3.mk"
.include "../../x11/kdelibs4/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
