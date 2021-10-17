#include<stdio.h>
struct student{
    char name[20];
    int age;
};
struct student getInformation();
int main(){
    struct student s;
    s = getInformation();
    printf("\ndisplaying Information\n");
    printf("Name : %s :",s.name);
    printf("\nAge : %d :\n",s.age);
    return 0;
}
struct student getInformation(){
    struct student s1;
    printf("Enter Name :");
    scanf("%[^\n]%*c",s1.name);
    printf("Enter Age :");
    scanf("%d",&s1.age);

    return s1;
}