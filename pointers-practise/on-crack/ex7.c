// callbacks - function pointers are commonly used for callbacks

void process_array(int *array, int size, int (*processor)(int)) {
        for(int i=0;i<size;i++) {
            array[i] = processor(array[i]);
        }
}


int double_value(int x) {
    return x*2;
}

int main() {
    int numbers[5]={1,2,3,4,5};
    //pass double_value as a callback function
    process_array(numbers, 5, double_value);

    return 0;
}
