#include "Expression.hpp"
#include "AddExpression.hpp"
#include "NegativeExpression.hpp"
#include "SubstractExpression.hpp"

#include <iostream>
using namespace std;

int main() {
    AddExpression* a = new AddExpression(new TerminalExpression(4), new TerminalExpression(6));
    SubstractExpression* b = new SubstractExpression(new TerminalExpression(4), new TerminalExpression(6));
    NegativeExpression* c = new NegativeExpression(new TerminalExpression(1));
    cout << a->solve() << endl;
    cout << b->solve() << endl;
    cout << c->solve() << endl;
    
    return 0;
}