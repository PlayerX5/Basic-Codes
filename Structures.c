#include<stdio.h>
int main()
{
  struct student
  {
    char name[20];
    int rollno;
    int sem;
    float m1,m2,m3,m4,m5;
    float avg;
  };
  struct student s[10];
  int i,n;
  printf("Enter number of students:\n");
  scanf("%d",&n);
  printf("Enter %d student's details:\n",n);
  for(i=0;i<n;i++)
  { 
    printf("Enter student name\n");
    scanf("%s",s[i].name);
    printf("Enter student rollno\n");
    scanf("%d",&s[i].rollno);
    printf("Enter sem\n");
    scanf("%d",&s[i].sem);
    printf("Enter students marks\n");
scanf("%f%f%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3,&s[i].m4,&s[i].m5);
    s[i].avg=
      (s[i].m1+s[i].m2+s[i].m3+s[i].m4+s[i].m5)/5.0;
  }
  printf("Students who scored above average\n");
  {
    if(s[i].avg>35.0)
    {
printf("%s\t%d\t%d\t%f\t",s[i].name,s[i].rollno,s[i].sem,s[i].avg); 
    }
    printf("Students who scored below average\n");
    if(s[i].avg<=35.0)
    {
printf("%s\t%d\t%d\t%f\t",s[i].name,s[i].rollno,s[i].sem,s[i].avg);         
    }
  }
  return 0;
}
