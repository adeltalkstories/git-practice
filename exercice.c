#include <stdio.h>
int main() {
    int nofgrades=0 ;
    do{
         printf("how many grades are there?\n");
        scanf("%d", &nofgrades);
    }while(nofgrades<=0||nofgrades>10);
   float grades[10];
    int n=1;
int i=0;
while(i<nofgrades){
    printf("enter the grade of subject %d : \n", i+1);
    scanf("%f", &grades[i]);
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

return 0;
} 