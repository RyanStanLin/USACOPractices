#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    freopen("paint.in","r",stdin);
    freopen("paint.out","w",stdout);

    short a=0,b=0;
    short c=0,d=0;
    vector<bool> fence(101,false);
    short count=0;

    scanf("%hd %hd",&a,&b);
    scanf("%hd %hd",&c,&d);
    for (short i=a+1;i<=b;i++) {
        fence.at(i) = true;
    }
    for (short j=c+1;j<=d;j++) {
        fence.at(j) = true;
    }
    for (bool fenceState : fence) {
        if (fenceState) {
            count++;
        }
    }
    printf("%hd",count);
    return 0;
}
