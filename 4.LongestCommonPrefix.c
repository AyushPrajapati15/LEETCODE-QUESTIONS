#include<stdio.h>
int main(){

char * longestCommonPrefix(char ** strs, int strsSize){
    if(strsSize==0){
        return "";
    }
    static char result[1000];
    int index=0;
    int minlen=strlen(strs[0]);
    for (int i=0;i<strsSize;i++){
        int len=strlen(strs[i]);
        if (len<minlen){
            minlen=len;
        }
    }

    for(int i=0;i<minlen;i++){
        char currentarr=strs[0][i];

        for(int j=0;j<strsSize;j++){
            if(strs[j][i]!=currentarr){
                result[index]='\0';
                return result;
            }
        }
        result[index++]=currentarr;

    }
    result[index]='\0';
    return result;
}
}