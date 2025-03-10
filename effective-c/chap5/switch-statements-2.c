#include <stdio.h>

enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};
enum Day today = WEDNESDAY;

int main() {
    switch (today) {
            case MONDAY:
            printf("It's Monday.\n");
            break;
        case TUESDAY:
            printf("It's Tuesday.\n");
            break;
        case WEDNESDAY:
            printf("It's Wednesday.\n");
            break;
        case THURSDAY:
            printf("It's Thursday.\n");
            break;
        case FRIDAY:
            printf("It's Friday.\n");
            break;
        case SATURDAY:
            printf("It's Saturday.\n");
            break;
        case SUNDAY:
            printf("It's Sunday.\n");
            break;
        default:
            printf("Invalid day.\n");
            break;

    
    }

}
