# $NetBSD: Makefile,v 1.3 2019/01/24 18:17:40 nia Exp $

DISTNAME=	papirus-icon-theme-20190106
CATEGORIES=	graphics
MASTER_SITES=	${MASTER_SITE_GITHUB:=PapirusDevelopmentTeam/}
GITHUB_PROJECT=	papirus-icon-theme
GITHUB_TAG=	${PKGVERSION_NOREV}

MAINTAINER=	nia@NetBSD.org
HOMEPAGE=	https://github.com/PapirusDevelopmentTeam/papirus-icon-theme
COMMENT=	SVG icon theme based on the Paper Icon Set
LICENSE=	gnu-gpl-v3

EXTRACT_USING=	bsdtar
USE_TOOLS+=	gmake
ICON_THEMES=	yes

.include "../../graphics/gnome-icon-theme/buildlink3.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
