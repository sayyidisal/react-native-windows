// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include <string>

namespace facebook { namespace react {

struct Url
{
  std::string scheme;
  std::string host;
  std::string port;
  std::string path;
  std::string queryString;

  Url(const std::string& urlString);

  std::string Target();
};

}} // namespace facebook::react
