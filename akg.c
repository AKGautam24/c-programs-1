#include<stdio.h>
#include<conio.h>
int main() {
    int  rollno , physics, chemistry, computer, Tmarks, percentage ;
    char cg[20];
    printf("student name:\n");
    //character = getchar();
    scanf("%s", &cg);

   printf("enter rollno:\n");
    scanf("%d",&rollno);
   

    printf( "marks of the subject\n: physics , chemistry, computer\n");
    scanf("%d%d%d" ,&physics, &chemistry, &computer);
   
    
  
    Tmarks = physics+chemistry+computer;
    printf(" Totalmarks %d \n",Tmarks);

    // scanf("%f=%d+%d+%d" , &percentage);
    percentage = (physics+chemistry+computer) /3 ;
    printf(" Percentage : %d \n",percentage);


    if (percentage >= 60) {
        printf("first division.\n"); 
    } else {
        printf("second  division.\n");
    }


}