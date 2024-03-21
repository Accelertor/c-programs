#include<stdio.h>
#include<string.h>

struct Emp
{
    /* data */
    char name[100];
    char date[100];
    uint salary;
};

void inp(struct Emp* i,int ii){
    char d[100]; uint o=0;
    printf("Data of Employee %d\n",ii);
    printf("Enter Name\n");
    fgets(d,100,stdin);
    strcpSy(i->name,d);
    printf("Enter Date \n");
    fgets(d,100,stdin);
    strcpy(i->date,d);
    printf("Enter Salary\n");
    scanf("%d",&o);
    i->salary=o;
}
void out(struct Emp* i){
    char d[100]; int o=0;
    printf("\n");
    printf("\n");
    printf("Name=%s\n",i->name);
    printf("Date=%s\n",i->date);
    printf("Salary=%d\n",i->salary);
}
int main(){
    struct Emp e[3];
    for (int i = 0; i < 3; i++)
    {
        inp(&e[i],i);
        getchar();
    }
    for (int i = 0; i < 3; i++)
    {
        out(&e[i]);
    }
    
    
}
