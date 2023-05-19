#include <stdio.h>

int main(){
    char str1[100];
    char str2[100];

    gets(str1);
    gets(str2);

    int freq1[26]={0};
    int freq2[26]={0};
    int c=0;
    while(str1[c]!='\0'){
        freq1[str1[c]-'a']+=1;
        c++;
    }
    c=0;
    while(str2[c]!='\0'){
        freq2[str2[c]-'a']+=1;
        c++;
    }
    for(int i=0;i<26;i++){
        if(freq1[1]!=freq2[2]){
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}