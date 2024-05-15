#include <iostream>
using namespace std;
#include "mylib.h"
int main(){
    char a[10][10];
    int N;
    cout<<"Nhap kich thuoc ban co: ";
    cin>>N;
    KhoiTaoBanCo(a, N);
    XepHau(a, N, 1);
    cout<<"Hello\n";
    return 0;
}
