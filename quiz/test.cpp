#include<iostream>

using namespace std;

struct test{

    int a;
    float b;

};


int main(){

    test test1;
    test1.a = 100;
    test1.b = 1213.0f;

    cout<<"test1 a: "<< test1.a << " b: "<<test1.b<<endl;
    
    test *test2;
    test2 = &test1;
    
    cout<<"test2 a: "<< (*test2).a << " b: "<<(*test2).b<<endl;

    cout<<"test2 a: "<< test2->a << " b: "<<test2->b<<endl;
    return 0;
}