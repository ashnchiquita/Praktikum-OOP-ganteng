/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Responsi 2 - Substract Expression
*/

#include "SubstractExpression.hpp"

SubstractExpression::SubstractExpression(Expression* e1, Expression* e2) : BinaryExpression(e1, e2) {}

int SubstractExpression::solve() {
    return this->x->solve() - this->y->solve();
}