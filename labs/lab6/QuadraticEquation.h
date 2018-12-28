#pragma once

#include<iostream>
#include<vector>
#include<cmath>
#include <cstdlib>

using namespace std;

class QuadraticEquation {
    int a;
    int b;
    int c;
    double D;
    vector<int> results;
    void calculateD();
public:
    void findSolution();
    void print();

    QuadraticEquation(int a, int b,int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    };
};

class Error {
    public:
    virtual void print_err();
};

class NotQuadratic : public Error {
    public:
    virtual void print_err();
};

class HaveNotSolution : public Error {
    public:
    virtual void print_err();
};
