# $NetBSD: Makefile,v 1.11 2018/09/23 21:09:32 wiz Exp $

DISTNAME=	rtmpdump-2.4-git-fa8646daeb19dfd12c181f7d19de708d623704c0
PKGNAME=	${DISTNAME:S/-git-/.0.0./}
CATEGORIES=	net multimedia
#MASTER_SITES=

MAINTAINER=	ryoon@NetBSD.org
HOMEPAGE=	http://rtmpdump.mplayerhq.hu/
COMMENT=	Tools for handling RTMP stream
LICENSE=	gnu-gpl-v2 AND gnu-lgpl-v2.1

USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config
BUILD_DIRS=	. librtmp
MAKE_ENV+=	XCFLAGS=${CFLAGS:Q}
MAKE_ENV+=	XLDFLAGS=${LDFLAGS:Q}

WRKSRC=		${WRKDIR}/rtmpdump
PKGCONFIG_OVERRIDE+=	librtmp/librtmp.pc.in

LDFLAGS.SunOS+=	-lnsl -lsocket

.include "../../security/libgcrypt/buildlink3.mk"
.include "../../security/gnutls/buildlink3.mk"
.include "../../devel/zlib/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
