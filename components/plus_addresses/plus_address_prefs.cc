// Copyright 2023 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/plus_addresses/plus_address_prefs.h"

#include "base/time/time.h"
#include "components/prefs/pref_registry_simple.h"

namespace plus_addresses {

void RegisterProfilePrefs(PrefRegistrySimple* registry) {
  // TODO(b/328747582): Implement pref for disabling the entire service.
}

}  // namespace plus_addresses
