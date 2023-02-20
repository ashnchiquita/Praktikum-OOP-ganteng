/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Responsi 2 - Subtract Expression
*/

#include "Expression.hpp"

class SubstractExpression : public BinaryExpression {
    public:
        SubstractExpression(Expression* e1, Expression* e2);
        int solve();
};