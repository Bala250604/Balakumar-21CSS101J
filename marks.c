#include <stdio.h>
int main() {
    int marks, distinction_marks = 75;
    printf("Enter marks : ");
    scanf("%d",&marks);
    if (marks>distinction_marks){
        printf("User secured distinction\n");
    }else {
        printf("User did not secure distinction\n");
    }
    //RA2211042010053
    return 0;
}
