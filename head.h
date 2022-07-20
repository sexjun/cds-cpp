//
// Created by 陈东升 on 2022/7/20.
//
#include <iostream>
#include <iostream>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

#ifndef CDS_CPP_HEAD_H
#define CDS_CPP_HEAD_H
struct persion{
    int age;
    persion(int a){age = a;}

    bool operator<(const persion& a) const {
        return this->age > a.age;
    }
};
void funcation_obj();

void opreator_less();

void funcaton_pointer();

void lamada_();


#endif //CDS_CPP_HEAD_H
