#include <stdio.h>

int max(int x, int y) {
    if (x>y) {
        return x;
    }
    else {
        return y;
    }
}


int main() {
    int x=11;
    int y=21;
    int max_of_x_and_y = max(x,y);
    printf("%d\n",max_of_x_and_y);
    return 0;
}

