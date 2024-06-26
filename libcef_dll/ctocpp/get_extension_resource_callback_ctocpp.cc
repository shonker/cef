// Copyright (c) 2024 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=a2e2a6947189c20bb2ffb52a8b38c19126065b9c$
//

#include "libcef_dll/ctocpp/get_extension_resource_callback_ctocpp.h"

#include "libcef_dll/ctocpp/stream_reader_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefGetExtensionResourceCallbackCToCpp::Continue(
    CefRefPtr<CefStreamReader> stream) {
  shutdown_checker::AssertNotShutdown();

  cef_get_extension_resource_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cont)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: stream

  // Execute
  _struct->cont(_struct, CefStreamReaderCToCpp::Unwrap(stream));
}

NO_SANITIZE("cfi-icall") void CefGetExtensionResourceCallbackCToCpp::Cancel() {
  shutdown_checker::AssertNotShutdown();

  cef_get_extension_resource_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cancel)) {
    return;
  }

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->cancel(_struct);
}

// CONSTRUCTOR - Do not edit by hand.

CefGetExtensionResourceCallbackCToCpp::CefGetExtensionResourceCallbackCToCpp() {
}

// DESTRUCTOR - Do not edit by hand.

CefGetExtensionResourceCallbackCToCpp::
    ~CefGetExtensionResourceCallbackCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_get_extension_resource_callback_t*
CefCToCppRefCounted<CefGetExtensionResourceCallbackCToCpp,
                    CefGetExtensionResourceCallback,
                    cef_get_extension_resource_callback_t>::
    UnwrapDerived(CefWrapperType type, CefGetExtensionResourceCallback* c) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType
    CefCToCppRefCounted<CefGetExtensionResourceCallbackCToCpp,
                        CefGetExtensionResourceCallback,
                        cef_get_extension_resource_callback_t>::kWrapperType =
        WT_GET_EXTENSION_RESOURCE_CALLBACK;
