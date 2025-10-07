#include <stdio.h>

struct Student {
    char name[30];
    int age;
    float grade;    
};

void findMax(struct Student s[]){
    float max;
    int order;
    for (int i = 0; i < 5; i++) {
       if(i == 0){
           max = s[i].grade;
       }
       else{
           if(max < s[i].grade){
               max = s[i].grade;
               order = i;
           }
           else{
               continue;
           }
       }
    }
    printf("\nthe highest grade is %s",s[order].name);
    printf(" age : %d",s[order].age);
    printf(" grade : %.2f",s[order].grade);
}

int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        scanf("%s",students[i].name);
        scanf("%d",&students[i].age);
        scanf("%f",&students[i].grade);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("name : %s\nage : %d\ngrade : %.2f\n\n", students[i].name,students[i].age,students[i].grade);
    }
    
    float total=0;

     for (int i = 0; i < 5; i++) {
        total += students[i].grade;
    }
    printf("total grade = %.2f",total/5);
    
    findMax(students);
    

    return 0;
}