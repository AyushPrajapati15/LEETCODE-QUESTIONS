#include<stdio.h>
int main(){

int romanToInt(char * s){
    int result=0,previous_value=0;
    while(*s){
            int current_value;
        switch(*s){
            case 'I':
                current_value=1;
                break;
            case 'V':
                current_value=5;
                break;
            case 'X':
                current_value=10;
                break;
            case 'L':
                current_value=50;
                break;
            case 'C':
                current_value=100;
                break;
            case 'D':
                current_value=500;
                break;
            case 'M':
                current_value=1000;
                break;
            default:
                return 0;
        }
        if (current_value>previous_value)
        {
                result += current_value - 2 * previous_value;
        }
        else{
                result += current_value;
        }
        previous_value = current_value;

        s++;
    }
    return result;
}
}