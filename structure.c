#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Company
{
  char name[100];
  char domain[100];
  int noOfEmployees;
  float averageSalary;
};
  int main()
{
  int r,c,i,j;
  printf("Enter the number of companies");
  scanf("%d",&r);
  struct Company *s,x;
  s=(struct Company*)malloc(r* sizeof(struct Company));
  for(i=0;i<r;i++)
  {
    printf("\nEnter the details of company %d\n",i+1);
    printf("\nEnter name\n");
    scanf("%s",(s+i)->name);
    printf("\nEnter domain\n");
    scanf("%s",(s+i)->domain);
    printf("\nEnter number of employees\n");
    scanf("%d",&(s+i)->noOfEmployees);
    printf("\nEnter average salary\n");
    scanf("%f",&(s+i)->averageSalary);
  }
  for(i=0;i<r;i++)
  {
      for(j=0;j<r-i-1;j++)
      {
          if(strcmp((s+j)->name,(s+j+1)->name)>0)
          {
              x=*(s+j);
              *(s+j)=*((s+j)+1);
              *((s+j)+1)=x;
          }
      }
  }
  printf("Salary details of companies\n");
  for(c=0;c<r;c++)
  {
    
    printf("Name:%s\n",(s+c)->name);
    
    printf("Average Salary:%.2f",(s+c)->averageSalary);
  }

  return 0;
}
