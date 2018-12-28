#include"Vector.h"

int main () {
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    setlocale(LC_NUMERIC,"C");
    int n = 3; //vector size
    double con = 8; //constant for /
    Vector first(n);
    first.random(); //set data
    cout<<"First vector"<<endl;
    first.print();

    Vector second(n);
    second.random();
    cout<<"Second vector"<<endl;
    second.print();

    Vector third(n);

    cout<<"Fist / constant"<<endl;
    third = first/con;
    //third = first * second;
    first *= second;
    //first /= con;
    third.print();
    cout<< "First * second"<<endl;
    first.print();


    return 0;
}