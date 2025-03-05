#include <stdio.h>
#include <limits.h>

int main() {
    unsigned int ui = UINT_MAX;
    ui++;
    printf("ui=%u\n",ui);
    ui--;
    printf("ui=%u\n",ui);

    return 0;
}

// Because of wraparound, an unsigned integer expression can never evaluate to less than 0. 
//
//
// [!] Knowing when to using wrap around
//
// for (unsigned int i=n;i>=0;--i); --> for (int i=n;i>=0;--i);
//
//
// extern unsigned int ui, sum;
// if(sum+ui>UNIT_MAX) {
//     too_big();
//  else
//     sum=sum+ui;
//
//  |
//  |
//  V
//
//  extern unsigned int ui, sum;
//  if(ui>UINT_MAX-sum)
//     too_big();
//  else 
//      sum=sum+ui
//
//
//  [+] Keep in mind that the width used when wrapping depeds on the implementation,
//  which means you can obtain different results on different platforms. 
//  Unless you take this into account, your code wont be portable
//
