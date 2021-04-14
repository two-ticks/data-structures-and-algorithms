//struct -> if access specifier is not declared explicitly, then by default access specifier will be public	
//class -> if access specifier is not declared explicitly, then by default access specifier will be private

#include<stdio.h>

struct Driver 
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;
};

int main()
{
    struct Driver d1,d2,d3;
    printf("enter the detail ");
    scanf("%s",&d1.name);
    scanf("%s",&d1.dlNo);
    scanf("%s",&d1.route);
    scanf("%s",&d1.kms);
}
