# $NetBSD: buildlink3.mk,v 1.6 2018/07/19 15:15:24 jaapb Exp $

BUILDLINK_TREE+=	ocaml-ppx_deriving

.if !defined(OCAML_PPX_DERIVING_BUILDLINK3_MK)
OCAML_PPX_DERIVING_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.ocaml-ppx_deriving+=	ocaml-ppx_deriving>=4.0
BUILDLINK_ABI_DEPENDS.ocaml-ppx_deriving+=	ocaml-ppx_deriving>=4.2.1nb2
BUILDLINK_PKGSRCDIR.ocaml-ppx_deriving?=	../../devel/ocaml-ppx_deriving
.endif	# OCAML_PPX_DERIVING_BUILDLINK3_MK

BUILDLINK_TREE+=	-ocaml-ppx_deriving
