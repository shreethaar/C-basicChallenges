// array of function pointers - to implement function tables

int main() {
    int (*operations[4])(int,int) = {add,subtract,multiply,divide};

    // call the third function (multiply)
    result=operations[2](5,3);      // 15
    return 0;
}
