#pragma once
#include "Expression.h"
#include "method_invokation/MethodInvokation.h"

class MethodInvokationExpression: public Expression {
public:
  MethodInvokationExpression(MethodInvokation* method_invokation);
  ExprInfo eval() const override;

private:
  MethodInvokation* method_invokation_;
};
