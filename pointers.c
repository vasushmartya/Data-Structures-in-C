#include <stdio.h>

int main(){
    int n = 10; //variable assignement
    int* pN = &n; //pointer declaration
    printf("%d\n", n); //call by value
    printf("%p\n", pN); //pointer
    printf("%d", *pN); //call by reference
    return 0;
}