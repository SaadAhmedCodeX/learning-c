 #include <stdio.h>
 
 typedef struct employee{
    int salary;
    float score;
}Emp;

 int main(){
    Emp e1;
    Emp* ptr = &e1;
    // (*ptr).salary = 56:
    // (*ptr).score = 41.6:
    ptr->salary = 56;
    ptr->score = 41.6;

    printf("The value of salary is %d and the value of score is %.2f\n",
     ptr ->salary, ptr->score);
    return 0;
 }