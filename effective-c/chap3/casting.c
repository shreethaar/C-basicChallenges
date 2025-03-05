// to perform a cast, place a type name in parentheses just before the expression. The cast converts the expression to the unqualified version of the type name in parentheses.

int main() {
    int si=5;
    short ss=8;
    long sl=(long)si;
    unsigned short us=(unsigned short)(ss+sl);

}
