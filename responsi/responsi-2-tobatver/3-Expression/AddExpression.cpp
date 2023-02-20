/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Responsi 2 - Add Expression
*/

#include "AddExpression.hpp"

AddExpression::AddExpression(Expression* e1, Expression* e2) : BinaryExpression(e1, e2) {}
int AddExpression::solve() {
    return this->x->solve() + this->y->solve();
}