$NetBSD: patch-src_components_cpu_CPUDyntransComponent.cc,v 1.2 2019/01/04 13:35:16 ryoon Exp $

Don't define functions returning functions.

--- src/components/cpu/CPUDyntransComponent.cc.orig	2012-11-19 20:12:27.000000000 +0000
+++ src/components/cpu/CPUDyntransComponent.cc
@@ -194,7 +194,7 @@ void CPUDyntransComponent::DyntransClear
 	// Fill the page with "to be translated" entries, which when executed
 	// will read the instruction from memory, attempt to translate it, and
 	// then execute it.
-	void (*f)(CPUDyntransComponent*, DyntransIC*) = GetDyntransToBeTranslated();
+	DyntransIC_t f = GetDyntransToBeTranslated();
 
 	for (int i=0; i<m_dyntransICentriesPerPage; ++i)
 		icpage[i].f = f;
