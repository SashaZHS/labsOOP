#include"QuadraticEquation.h"

int main() {
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC,"C");
    int a,b,c;
    cout<<" вадратное уравнение имеет вид"<<endl;
    cout<< "ax^2 + bx + c"<<endl;
    cout<<"¬ведите целочисленное a"<<endl;
    cin>>a;
    cout<<"¬ведите целочисленное b"<<endl;
    cin>>b;
    cout<<"¬ведите целочисленное c"<<endl;
    cin>>c;
    try {
    QuadraticEquation eq(a,b,c);
    eq.findSolution();
    eq.print();
    } catch (Error &e) {
        e.print_err();
    }
    system("pause");
}
