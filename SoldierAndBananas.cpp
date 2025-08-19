#include <iostream>
using namespace std;
int main() {
    long long cost=0, currency=0, targetBananas=0;
    long long price=0;
    scanf("%lld %lld %lld",&cost,&currency,&targetBananas);
    for (int i=1;i<=targetBananas;i++) {
        price += cost*i;
    }
    if (price>currency) {
        printf("%lld",price-currency);
    }
    else {
        printf("0");
    }
}