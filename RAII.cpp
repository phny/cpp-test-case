/*************************************************************************
	> File Name: RAII.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月08日 星期三 14时55分59秒
 ************************************************************************/

#include<iostream>
#include<cstdio>

using namespace std;

class Obj {
public:
    Obj() {
        puts("Obj()");
    }
    ~Obj() {
        puts("~Obj()");
    }
};

void foo(int n) {
    Obj obj;
    if (n == 42) {
        throw "life, the universe and enverything";
    }
}

int main() {
    try {
        foo(41);
        foo(42);
    } catch (const char *s) {
        puts(s);
    }
    return 0;
}