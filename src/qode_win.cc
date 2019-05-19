// Copyright 2017 Cheng Zhao. All rights reserved.
// Use of this source code is governed by the MIT license.

#include "src/qode.h"

#include "node/src/env-inl.h"

namespace qode {

void Init(node::Environment* env) {
#if _DEBUG
  // Show system dialog on crash.
  ::SetErrorMode(::GetErrorMode() & ~SEM_NOGPFAULTERRORBOX);
#endif
}

void RunLoop(node::Environment* env) {
  MSG msg;
  while (::GetMessage(&msg, NULL, 0, 0)) {
    ::TranslateMessage(&msg);
    ::DispatchMessage(&msg);
  }
}

}  // namespace qode
