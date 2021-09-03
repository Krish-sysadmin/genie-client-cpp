// -*- mode: cpp; indent-tabs-mode: nil; c-basic-offset: 2 -*-
//
// This file is part of Genie
//
// Copyright 2021 The Board of Trustees of the Leland Stanford Junior University
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef _CONFIG_H
#define _CONFIG_H

#include <glib.h>

namespace genie {

class Config {
public:
  static const gint VAD_MIN_MS = 100;
  static const gint VAD_MAX_MS = 5000;
  static const gint DEFAULT_VAD_START_SPEAKING_MS = 2000;
  static const gint DEFAULT_VAD_DONE_SPEAKING_MS = 500;
  static const gint DEFAULT_MIN_WOKE_MS = 1000;

  Config();
  ~Config();
  void load();

  gchar *genieURL;
  gchar *genieAccessToken;
  gchar *conversationId;
  gchar *nlURL;
  gchar *audioInputDevice;
  gchar *audioSink;
  gchar *audioOutputDeviceMusic;
  gchar *audioOutputDeviceVoice;
  gchar *audioOutputDeviceAlerts;
  gchar *audioVoice;
  gint vad_start_speaking_ms;
  gint vad_done_speaking_ms;
  gint vad_min_woke_ms;

protected:
private:
};

} // namespace genie

#endif
