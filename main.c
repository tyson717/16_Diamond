#include <stdio.h>
void printLine(unsigned i,unsigned h){
unsigned stars = (2u * i) -1u;
unsigned space = (h-stars) /2u;
    for (;space>0;space--) {
        printf(" ");
    }
    for (;stars>0;stars--) {
        printf("*");
    }
    printf("\n");
}
int main() {
    unsigned height;

    scanf("%u", &height);

    unsigned mid = (height + 1u) / 2u;
    for (int i = 1; i <= mid; ++i) {
        printLine(i,height);
    }

    for (int i = mid - 1; i >= 1; --i) {
        printLine(i,height);
    }

    return 0;
}
