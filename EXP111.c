#include<stdio.h>
struct student 
{
    char name[20];
    int Roll_no;
    float marks;
};
int main()
{
    struct student s1 ,s2 ;  

    printf("Enter Information for Student 1 :\n");
    printf("Enter Your Name :");
    scanf("%s",&s1.name);
    printf("Enter Your Roll No :");
    scanf("%d",&s1.Roll_no);
    printf("Enter Your Marks:");
    scanf("%f",&s1.marks); 

printf("\n");

    printf("Enter Information for Student 2 :\n");
    printf("Enter Your NAme :");
    scanf("%s",&s2.name);
    printf("Enter Your Roll No :");
    scanf("%d",&s2.Roll_no);
    printf("Enter Your Marks:");
    scanf("%f",&s2.marks);

printf("The Information of 1st Student is:");
    printf("The Name of Stdent 1 is: %s\n",s1.name);
    printf("The Roll No of student 1 is:%d\n",s1.Roll_no);
    printf("The Marks of student 1 is:%d\n",s1.marks);
printf("\n");
printf("The Information of 2nd Student is:");
    printf("The Name of Stdent 2 is: %s\n",s2.name);
    printf("The Roll No of student 2 is:%d\n",s2.Roll_no);
    printf("The Marks of student 2 is:%d\n",s2.marks);


}
