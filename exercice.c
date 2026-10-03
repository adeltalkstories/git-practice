#include <stdio.h>
int main() {
    int nofgrades=0 ;
    do{
         printf("how many grades are there?\n");
        scanf("%d", &nofgrades);
    }while(nofgrades<=0||nofgrades>10);
     float grades[10];
int i=0;
while(i<nofgrades){
    printf("enter the grade of subject %d :(0-20) \n", i+1);
    do{
        scanf("%f", &grades[i]);
        printf("your grade should be between 0-20\n");
    }while(grades[i]<0||grades[i]>20);
    i++;
}
// average calculation : 
float average ;
float sumofgrades=0;
for(int i=0;i<nofgrades;i++){
        sumofgrades=sumofgrades+grades[i];
}
    average=sumofgrades/nofgrades;

    printf("your average is : %.2f\n", average );
//finding the highest grade 
float highestgrade=0;

for(int i=0;i<nofgrades;i++){
    if(highestgrade<=grades[i]){
        highestgrade=grades[i];
    }
}
        printf("the highest grade you scored was : %.2f\n", highestgrade);
    //findinf the lowest grade
    float lowestgrade=20;
    for(int i=0;i<nofgrades;i++){
        if(lowestgrade>grades[i]){
            lowestgrade=grades[i];
        }
    }
    printf("the lowest grade you scored was %.2f\n", lowestgrade);
    //number of subjects above and below 10
    int gradesabove=0;
    int gradesbelow=0;
    for(int i=0;i<nofgrades;i++){
        if(grades[i]>=10){
            gradesabove++;
        }
        else{
            gradesbelow++;
        }
    }
    printf("You have %d subject above average \n And %d subject below it  \n", gradesabove, gradesbelow);
return 0;
} 