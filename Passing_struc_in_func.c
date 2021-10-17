#include<stdio.h>



struct student{
    char name[10];
    int age;

};

void display(struct student s);

int main(){
     struct student s1;
    
    printf(" enter you Name ");
    scanf("%[^\n]%*c",s1.name);
    printf("Enter age");
    scanf("%d",&s1.age);
    display(s1);

    return 0;
}

void display(struct student s){
    printf("\ndisplaying Information\n");
    printf("Name : %s",s.name);
    printf("\nAge :%d :", s.age);

    
} 