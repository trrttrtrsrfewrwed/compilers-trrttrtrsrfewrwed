#include "DefinitionStatement.h"

DefinitionStatement::DefinitionStatement(Lvalue *lvalue, Expression *expr)
    : lvalue_(lvalue), expr_(expr) {}

void DefinitionStatement::Accept(Visitor *visitor) {
  visitor->Visit(this);
}