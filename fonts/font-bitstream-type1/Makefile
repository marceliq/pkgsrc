# $NetBSD: Makefile,v 1.7 2012/10/03 18:28:20 asau Exp $
#

DISTNAME=		font-bitstream-type1-1.0.3
CATEGORIES=		fonts
MASTER_SITES=		${MASTER_SITE_XORG:=font/}
EXTRACT_SUFX=		.tar.bz2

MAINTAINER=		joerg@NetBSD.org
HOMEPAGE=		http://xorg.freedesktop.org/
COMMENT=		Bitstream Charter and Courier Type 1 outline fonts

GNU_CONFIGURE=		yes
CONFIGURE_ENV+=		FCCACHE=${TOOLS_CMD.true:Q}

FONTS_DIRS.type1+=	share/fonts/X11/Type1
FONTS_DIRS.x11+=	share/fonts/X11/Type1

INSTALLATION_DIRS=	share/doc/font-bitstream-type1

post-install:
	${INSTALL_DATA} ${WRKSRC}/COPYING ${DESTDIR}${PREFIX}/share/doc/font-bitstream-type1

.include "../../mk/bsd.pkg.mk"
