#pragma once

#include "modules/sensors/proto/laser_scan.pb.h"
# TODO 
#include "modules/sensors/wr_ls/WrLsConfig.h"

namespace apollo {
namespace sensors {
namespace wr_ls {
using using apollo::sensors::LaserScan;
enum ExitCode { ExitSuccess = 0, ExitError = 1, ExitFatal = 2 };

class CParserBase {
 public:
  CParserBase();
  virtual ~CParserBase();

  virtual int Parse(char *data, size_t data_length, WrLsConfig &config,
                    LaserScan &msg) = 0;
};
}  // namespace wr_ls
}  // namespace sensors
}  // namespace apollo

