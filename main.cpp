#include <iostream>
using namespace std;

bool isEvenNumber(long long number) {
    if (number % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

void dealWith(long long number) {
    printf("%lld",number);
    while (number != 1) {
        printf(" ");
        if (isEvenNumber(number)) {
            number = number / 2;
            printf("%lld",number);
        }
        else {
            number = (number * 3) + 1;
            printf("%lld",number);
        }
    }
}

int main() {
    long long targetNumber=0;
    scanf("%lld",&targetNumber);
    dealWith(targetNumber);
    return 0;
}
