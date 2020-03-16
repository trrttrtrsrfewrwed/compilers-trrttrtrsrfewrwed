#pragma once

#include "expressions/Expression.h"
#include "binary_operator/BinaryOperator.h"
#include "expressions/BinaryExpression.h"
#include "expressions/ArrayExpression.h"
#include "expressions/expr_info/ExprInfo.h"
#include "expressions/ArrayElementExpression.h"
#include "expressions/ArrayLengthExpression.h"
#include "expressions/ObjectExpression.h"
#include "expressions/NotExpression.h"
#include "expressions/ParenthesesExpression.h"
#include "expressions/IdentExpression.h"
#include "expressions/NumberExpression.h"
#include "expressions/ThisExpression.h"
#include "expressions/BoolExpression.h"
#include "expressions/MethodInvokationExpression.h"
#include "lvalues/Lvalue.h"
#include "lvalues/SimpleLvalue.h"
#include "lvalues/ArrayLvalue.h"
#include "expressions/ExpressionList.h"
#include "method_invokation/MethodInvokation.h"
#include "statements/AssertStatement.h"
#include "statements/LocalVariableDeclarationStatement.h"
#include "statements/ScopeStatement.h"
#include "statements/IfStatement.h"
#include "statements/IfElseStatement.h"
#include "statements/WhileStatement.h"
#include "statements/SoutStatement.h"
#include "statements/DefinitionStatement.h"
#include "statements/ReturnStatement.h"
#include "statements/MethodInvokationStatement.h"
#include "main_structures/Program.h"
#include "main_structures/MainClass.h"
#include "declarations/ClassDeclarationList.h"
#include "declarations/DeclarationList.h"
#include "declarations/MethodDeclaration.h"
#include "declarations/VariableDeclaration.h"
#include "declarations/LocalVariableDeclaration.h"
#include "declarations/ClassDeclaration.h"
#include "declarations/Declaration.h"
#include "formals/FormalList.h"
#include "types/Type.h"
#include "types/SimpleType.h"
#include "types/ArrayType.h"
#include "types/TypeIdentifier.h"
#include "statements/Statement.h"
#include "statements/StatementList.h"
#include "declarations/CommonDeclaration.h"
#include "forward_decl.h"
#include "elements.h"