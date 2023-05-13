#include<stdio.h>
struct student
{
	char name[50];
	int roll,n;
	float marks;
	char grade;
};
int main()
{
	int n;
	int i;
	printf("Enter the number of students: \n");
	scanf("%d",&n);
	struct student s[n];
	
	//reading students data 
	for (i=0;i<n;i++)
	{
		printf("enter the details of the student :\n",i+1);
		printf("Name :");
		scanf("%s",s[i].name);
		printf("Roll Number :");
		scanf("%d",&s[i].roll);
		printf("Marks :");
		scanf("%f",&s[i].marks);
		//calculate grade based on marks
		if (s[i].marks>=80)
		{
			s[i].grade='A';
		}
		else if (s[i].marks>=60)
		{
			s[i].grade='B';
		}
		else if(s[i].marks>=50)
		{
			s[i].grade='C';
		}
		else
		{
			s[i].grade='D';
		}
		
	}
	//display students data
	printf("\n student details :\n");
	for (i=0;i<n;i++)
	{
		printf("Name : %s\n",s[i].name);
		printf("Roll number : %d\n",s[i].roll);
		printf("Marks : %.2f\n",s[i].marks);
		printf("Grade : %c\n",s[i].grade);
		printf("\n");
		
	}
	return 0;
}
