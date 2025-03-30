// void pointers - can point to data of any type but must be cast before dereferencing

int main() {
    void *generic_ptr;
    int x=10;
    generic_ptr = &x; // store address of int

    // must cast before dereferencing
    int y=*((int*)generic_ptr);

    double d = 3.14;
    generic_ptr = &d;
    double e = *((double*)generic_ptr);

    return 0;
}

