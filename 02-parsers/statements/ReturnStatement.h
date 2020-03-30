#pragma once
#include "Statement.h"
#include <expressions/Expression.h>

class ReturnStatement: public Statement {
public:
  ReturnStatement(Expression* return_expr);
  void Accept(Visitor* visitor);
  Expression* return_expr_;
};

