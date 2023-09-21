
#include <stdio.h>

int romanToInt(char *s, int *result) {
    int total = 0;
    int previous_value = 0;

    while (*s) {
        int current_value;
        switch (*s) {
            case 'I':
                current_value = 1;
                break;
            case 'V':
                current_value = 5;
                break;
            case 'X':
                current_value = 10;
                break;
            case 'L':
                current_value = 50;
                break;
            case 'C':
                current_value = 100;
                break;
            case 'D':
                current_value = 500;
                break;
            case 'M':
                current_value = 1000;
                break;
            default:
                return 0;
        }

        if (current_value > previous_value) {
            total += current_value - 2 * previous_value;
        } else {
            total += current_value;
        }
        previous_value = current_value;

        s++;
    }

    *result = total;
    return 1;  // Indicate success
}

int main() {
    char num[] = "CMVIX";
    int result;  // Variable to hold the result
    int success = romanToInt(num, &result);

    if (success) {
        printf("Roman numeral %s is equal to %d\n", num, result);
    } else {
        printf("Invalid Roman numeral: %s\n", num);
    }

    return 0;
}
