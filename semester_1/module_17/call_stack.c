#include <stdio.h>

void func3(){
    printf("Start func3\n");
    printf("End func3\n");
}

void func2(){
    printf("Start func2\n");
    func3();
    printf("End func2\n");
}

void func1(){
    printf("Start func1\n");
    func2();
    printf("End func1\n");
}

int main(){
    printf("Start main\n");
    func1();
    printf("End main\n");
}