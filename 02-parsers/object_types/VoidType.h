#pragma once

#include "BasicType.h"
class VoidType: public BasicType {
  void Print(std::ofstream& ofstream, int num_tabs) override;
  std::string GetType() override;
};