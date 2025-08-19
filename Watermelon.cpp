#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
    //freopen("teleport.in","r",stdin);
    //freopen("teleport.out","w",stdout);
    short weight;
    scanf("%hd",&weight);
    if (weight % 2 == 0) {
        if (weight/2 ==1 ) {
            printf("NO");
            return 0;
        }
        printf("YES");
    }
    else {
        printf("NO");
    }
    return 0;
}
