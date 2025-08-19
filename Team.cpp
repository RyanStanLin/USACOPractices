#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;
int main() {
    short numberOfProblems=0;
    short numberOfProblemsSolvable=0;
    scanf("%hd",&numberOfProblems);
    for (int i=1;i<=numberOfProblems;i++) {
        short sureCount = 0;
        for (int j=1;j<=3;j++) {
            short _isSure = 0;
            scanf("%hd",&_isSure);
            if (_isSure==1) {
                sureCount++;
            }
        }
        if (sureCount>=2) {
            numberOfProblemsSolvable++;
        }
    }
    printf("%hd",numberOfProblemsSolvable);
    return 0;
}