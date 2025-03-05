int main() {
    int i = 5;
    int e; // result of the expression
    e=i++; // postfix increment: i has the value 6; e has the value 5
    e=i--;  // postfix increment: i has the value 5; e has the value 6
    e=++i;  // prefix increment: i has the value 6; e has the value 6
    e=--i;  // prefix increment: i has the value 5; e has the value 5
}

