//yuuuhooo
//Baekjoon #2525: 오븐 시계

#include <iostream>
using namespace std;

int main(){
    int H, M, plus;
    cin >> H >> M;
    cin >> plus;

    int min;

    min = H*60 + M + plus;
    cout << (min/60)%24 << ' ' << min%60 ;
    
    return 0;

}
