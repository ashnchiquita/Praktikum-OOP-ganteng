/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Responsi 2 - Negative Expression
*/

#include "NegativeExpression.hpp"

NegativeExpression::NegativeExpression(Expression* e) : UnaryExpression(e) {}

int NegativeExpression::solve() {
    return (-1) * this->x->solve();
}