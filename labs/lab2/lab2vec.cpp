#include"Vector.h"

Vector::Vector(Vector const &obj) : nums(obj.nums){
    for (int i = 0;i<nums.size();i++) {
        nums[i] = obj.nums[i];
    }
 };

void Vector::operator *=(const Vector &other){
    for (int i = 0;i<nums.size();i++) {
        nums[i] *= other.nums[i];
    }

};


Vector Vector::operator *(const Vector &other){
    Vector temp(nums.size());
    for (int i = 0;i<nums.size();i++) {
        temp.nums[i] = nums[i] * other.nums[i];
    }
    return temp;

};

void Vector::operator /=(const double n) {
    for (int i = 0;i<nums.size();i++) {
        nums[i] /= n;
    }
};

Vector Vector::operator /(const double n) {
    Vector temp(nums.size());
    for (int i = 0;i<nums.size();i++) {
        temp.nums[i] = nums[i]  / n;
    }
    return temp;
};


void Vector::operator = (const Vector &other) {
    for (int i = 0;i<nums.size();i++) {
        nums[i] = other.nums[i];
    }
};

void Vector::random() {
    int x;
    for (int  i = 0;i<nums.size();i++){
         x = rand() % 20 - 5;
        nums[i]= x;
    }
}


 void Vector::print() {
     for (int i = 0;i<nums.size();i++) {
        cout<< nums[i]<< " ";
     }
     cout<<endl;
};