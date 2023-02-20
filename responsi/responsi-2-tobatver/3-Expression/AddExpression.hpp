/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Responsi 2 - Add Expression
*/

#include "Expression.hpp"

class AddExpression : public BinaryExpression {
    public:
        AddExpression(Expression * e1, Expression * e2);
        int solve();
};