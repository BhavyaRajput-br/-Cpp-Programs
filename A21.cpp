#include<iostream>
using namespace std;
int main()
{
    int age;
    printf("enter the age ");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("person is eligible for vote");
    }
    else
    {
        printf("person is not eligible for vote");
    }
}