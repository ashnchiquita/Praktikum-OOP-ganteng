/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Responsi 2 - Negative Expression
*/

#include "Expression.hpp"

class NegativeExpression : public UnaryExpression {
    public:
        NegativeExpression(Expression* e);
        int solve();
};