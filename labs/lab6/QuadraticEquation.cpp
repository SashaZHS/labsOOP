#include"QuadraticEquation.h"

void QuadraticEquation::calculateD() {
    if (a == 0) {
        throw NotQuadratic();
    }
    D = (b*b) - (4*a*c);
}
void QuadraticEquation::findSolution() {
    calculateD();
    if (D < 0) {
        throw HaveNotSolution();
    } else if (D == 0) {
        results.push_back(((-b)/(2*a)));
    } else {
        int x1,x2;
        x1 = ((-b) + sqrt(D))/(2*a);
        x2 = ((-b) - sqrt(D))/(2*a);
        results.push_back(x1);
        results.push_back(x2);
    }
}

void QuadraticEquation::print() {
    cout<<"Данное уравнение имеет корни : "<<endl;
    for (int x : results) {
        cout<<x<<endl;
    }
}

void Error::print_err() {
cout<<"Ошибка!"<<endl;
};

void NotQuadratic::print_err() {
    cout<<"Данное уравнение не является квадратным!"<<endl;
};

void HaveNotSolution::print_err() {
    cout<<"Дискриминант меньше нуля!"<<endl;
};
