#include<stdio.h>
void main()
{
int userid=5371;
int userpwd=9647;
int id;
int pwd;
printf("enter the user id \n");
scanf("%d",& id);
printf("enter the pwd \n");
scanf("%d",&pwd);
if(userid==id)
{
if(userpwd==pwd)
{
printf("log in succesful \n");
}
else
{
printf("incorrect pwd \n");
}
}
else
{
printf("incorrect use id \n");
}
}
