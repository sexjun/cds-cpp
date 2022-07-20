//
// Created by 陈东升 on 2022/7/20.
//
#include "head.h"
bool cmp_f(const persion& a,const persion& b)  {
    return  a.age > b.age;
}

struct cmp{
    bool operator()(persion *a, persion *b) const{
        return a->age > b-> age;
    }
};

void lamada_() {
    auto lam = [](persion a, persion b){
        return a.age > b.age;
    };
    cout << "lamda表达式：" << endl;
    priority_queue<persion ,vector<persion>, decltype(lam)> lam_contaner(lam);
    lam_contaner.emplace(persion(1));
    lam_contaner.emplace(persion(4));
    lam_contaner.emplace(persion(3));
    lam_contaner.emplace(persion(2));
    while (!lam_contaner.empty()){
        cout << lam_contaner.top().age << " ";
        lam_contaner.pop();
    }
    cout << endl;
}

void funcaton_pointer() {
    cout << "函数指针:" << endl;
    priority_queue<persion ,vector<persion>, decltype(cmp_f)*> dd(cmp_f);
    dd.emplace(persion(4));
    dd.emplace(persion(2));
    dd.emplace(persion(3));
    dd.emplace(persion(1));
    while (!dd.empty()){
        cout << dd.top().age << " ";
        dd.pop();
    }
    cout << endl;
}

void opreator_less() {
    cout << "重载<运算符:" << endl;
    priority_queue<persion> p;
    p.emplace(persion(4));
    p.emplace(persion(1));
    p.emplace(persion(3));
    p.emplace(persion(2));
    while (!p.empty()) {
        cout << p.top().age << " ";
        p.pop();
    }
    cout << endl;
}

void funcation_obj() {
    cout << "使用函数对象:" << endl;
    priority_queue<persion* ,vector<persion*>, cmp> container;
    persion* a = new persion(3);
    container.emplace(a);
    container.emplace(new persion(5));
    container.emplace(new persion(1));
    container.emplace(new persion(4));
    container.emplace(new persion(2));

    while (!container.empty()) {
        cout << container.top()->age << " ";
        container.pop();
    }
    cout << endl;
}