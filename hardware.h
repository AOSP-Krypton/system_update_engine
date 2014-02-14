// Copyright (c) 2013 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROMEOS_PLATFORM_UPDATE_ENGINE_HARDWARE_H__
#define CHROMEOS_PLATFORM_UPDATE_ENGINE_HARDWARE_H__

#include "update_engine/hardware_interface.h"

#include "base/basictypes.h"

namespace chromeos_update_engine {

// Implements the real interface with the hardware.
class Hardware : public HardwareInterface {
 public:
  Hardware();
  virtual ~Hardware();

  // HardwareInterface methods.
  virtual const std::string BootKernelDevice();
  virtual const std::string BootDevice();
  virtual bool IsKernelBootable(const std::string& kernel_device,
                                bool* bootable);
  virtual bool MarkKernelUnbootable(const std::string& kernel_device);
  virtual bool IsOfficialBuild();
  virtual bool IsNormalBootMode();
  virtual std::string GetHardwareClass();
  virtual std::string GetFirmwareVersion();
  virtual std::string GetECVersion();

 private:
  DISALLOW_COPY_AND_ASSIGN(Hardware);
};

}  // namespace chromeos_update_engine

#endif  // CHROMEOS_PLATFORM_UPDATE_ENGINE_HARDWARE_H__
