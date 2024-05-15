#include <iostream>
using namespace std;

void KhoiTaoBanCo(char a[][10], int N){
    for(int i = 0; i<N; i++)
        for(int j = 0; j<N; j++)
            a[i][j] = '-';
}

void InBanCo(char a[][10], int N){
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

bool XepDuoc(char a[][10], int N, int d, int c){
    for(int y = 1; y < c; y++){
        if (a[d-1][y-1] == 'H')
            return false;
    }
    for(int x = d-1, y=c-1; x>=1 && y>= 1; x--, y--){
        if (a[x-1][y-1] == 'H')
            return false;
    }
    for(int x = d+1, y = c-1; x<=N && y>= 1; x++, y--){
        if (a[x-1][y-1] == 'H')
            return false;
    }
    return true;
}

void XepHau(char a[][10], int N, int c){
    if (c > N){
        InBanCo(a, N);
        cout<<"**************************\n";
    }else{
        for(int d = 1; d<= N; d++){
            if (XepDuoc(a, N, d, c)){
                a[d-1][c-1] = 'H';
                XepHau(a, N, c+1);
                a[d-1][c-1] = '-';
            }
        }
    }
}