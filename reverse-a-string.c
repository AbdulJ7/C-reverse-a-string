#include <stdio.h>
#include <string.h>

//reverseString Function
void reverseString(char *str1) {
        int i,len,temp; //var
        len = strlen(str1); //to get length of string
        for(i =0; i < len/2; i++) {
                temp = str1[i];
                str1[i] = str1[len - i -1];
                str1[len - i - 1] = temp;
        }
}

//main Function
int main() {
    char str[100]; //size of char in single array
    printf("Enter a String:\n");
    scanf("%s",&str); //to take user input

    printf("Before reversing a string: %s\n",str);

    //call reverseString Function
    reverseString(str);
    printf("After Reversing a string: %s\n",str);
}

