#include<stdio.h>
int main()
{
 strut student
 {
  char USN[10];
  char stu name[10];
  int sem;
  float m1,m2,m3,m4,m5,avg;
 }
 struct student S[10];
 int i,n;
 printf("Enter no. of student records");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("Student USN");
  scanf("%s",S[i]USN);
  printf("Student name");
  scanf("%s",S[i]stu name);
  printf("Enter semester");
  scanf("%d",S[i]sem);
  printf("Enter 5 subject marks");
  scanf("%f%f%f%f%f",&S[i].m1,&S[i].m2,&S[i].m3,&S[i].m4,&S[i].m5);
 }
 for(i=0;i<n;i++)
 {
  S[i].avg=(S[i].m1+S[i].m2+S[i].m3+S[i].m4+S[i].m5)/5.0;
 }
 printf("Students scored above avg");
 printf("\n USN\tStudent name\tAverage");
 for(i=0;i<n;i++)
 {
  if(s[i]avg>50.0)
  {
   printf("\n%s\t%s\t%f",USN,Student name,avg);
  }
 }
 printf("Students scored below avg");
 printf("\nUSN\tStudent name\tAverage");
 for(i=0;i<n;i++)(
 {
  if(S[i].avg<50.0)
  {
   printf("\n%s\t%s\t%f",USN,Student name,avg);
  }
 }
 return 0;
}
  
