# $NetBSD: Makefile,v 1.4 2019/01/27 00:41:13 markd Exp $

DISTNAME=	fonts-tlwg
PKGNAME=	tex-${DISTNAME}-0.7.1
TEXLIVE_REV=	49085

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://ctan.org/pkg/fonts-tlwg
COMMENT=	Thai fonts for LaTeX from TLWG
LICENSE=	gnu-gpl-v2 AND lppl-1.3c

TEX_MAP_FILES+=	nectec.map
TEX_MAP_FILES+=	nf.map
TEX_MAP_FILES+=	sipa.map
TEX_MAP_FILES+=	tlwg.map

.include "../../print/texlive/package.mk"
.include "../../mk/bsd.pkg.mk"
