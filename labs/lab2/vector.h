#pragma once

#include<iostream>
#include<string>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <vector>

using namespace std;

class Vector {
    private:
    vector<double>nums;

    public:
    void random();
    Vector (Vector const &k);
    Vector (Vector && obj);
    Vector operator *(const Vector &other);
    Vector operator /(const double n);
    void operator /=(const double n);
    void operator *=(const Vector &other);


    void operator = (const Vector &other);
    void print();
    Vector(int n) {
        nums.resize(n);
    }

};