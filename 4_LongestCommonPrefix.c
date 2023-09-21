#include<stdio.h>
#include<string.h>
char * longestCommonPrefix(char * strs[], int strsSize,char *result){
    if(strsSize==0){
        return "";
    }
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
int main(){
    char *stringArray[] = {"flower", "flow", "flight"};
    int arraySize = sizeof(stringArray) / sizeof(stringArray[0]);
    char result[1000];

    char *prefix = longestCommonPrefix(stringArray, arraySize, result);

    if (strlen(prefix) > 0) {
        printf("Longest common prefix: %s\n", prefix);
    } else {
        printf("No common prefix found.\n");
    }
    return 0;
}
