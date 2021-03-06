#pragma once
#include "Statement.h"
#include <grammar/expressions/Expression.h>

class IfElseStatement: public Statement {
public:
  IfElseStatement(Expression* query, Statement* if_statement, Statement* else_statement);
  void Accept(Visitor* visitor);
  Expression* query_;
  Statement* if_statement_;
  Statement* else_statement_;
};
