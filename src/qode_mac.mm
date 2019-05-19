// Copyright 2017 Cheng Zhao. All rights reserved.
// Use of this source code is governed by the MIT license.

#include "src/qode.h"

#import <Cocoa/Cocoa.h>

#include "node/src/env-inl.h"

namespace qode {

void Init(node::Environment* env) {
  [NSApplication sharedApplication];
  [NSApp setActivationPolicy:NSApplicationActivationPolicyRegular];
}

void RunLoop(node::Environment* env) {
  [NSApp run];  // block until quit
}

}  // namespace qode
