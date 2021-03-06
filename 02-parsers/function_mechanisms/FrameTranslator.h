//
// Created by akhtyamovpavel on 4/14/20.
//


#pragma once

#include <function_mechanisms/address/Address.h>
#include <object_types/BasicType.h>
#include <object_types/ClassType.h>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
namespace IRT {
class FrameTranslator {
public:
  FrameTranslator(const std::string& function_name, ClassType* class_type);
  void SetupScope();
  void TearDownScope();

  // Если value не nullptr, там лежит указатель на значение,
  // который нужно положить в созданную переменную
  void AddVariable(const std::string& name);
  void AddLocalVariable(const std::string& name);
  void AddReturnAddress();

  void AddArgumentAddress(const std::string& name);

  Address* FramePointer();
  IRT::Expression* GetAddress(const std::string& name);
  IRT::Expression* GetReturnValueAddress();

  void AddLocalArray(std::string& name);

private:
  ClassType* class_type_;
  std::string return_address_ = "::return";
  std::string frame_pointer_address_ = "::fp";
  std::string return_value_address_ = "::return_value";

  std::unordered_map<std::string, std::stack<Address*> > addresses_;

  std::stack<std::string> symbols_;
  int word_size_ = 4;
  std::string function_name_;

  int GetOffset();
  int max_offset_ = 0;
  Expression *GetField(const std::string &name);
};

}

