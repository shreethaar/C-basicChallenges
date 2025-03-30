// navigating structure arrays

// traverse array of structures with pointers 

for(Employee *p=staff;p<staff+10;p++) {
    printf("ID: %d, Name: %s\n",p->id,p->name);
}

