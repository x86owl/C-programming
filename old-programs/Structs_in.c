#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    char name[30];
    int age;
    float gpa;
    bool isFulltime;

}Students;
void printstudent(Students student);


int main(){

    //struct Students student1 = {"manikandan", 22, 4.7, false};
    Students student1 = {"manikandan", 22, 4.7, false};
    Students student2 = {"renjith", 24,3.7, true};
    Students student3 = {0};

    strcpy(student3.name, "Arjun");
    student3.age = 26;
    student3.gpa = 3.4;
    student3.isFulltime = true;

    
/*
    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", (student1.isFulltime) ? "Yes": "No");

    printf("\n");

    printf("%s\n", student2.name);
    printf("%d\n", student2.age);
    printf("%.2f\n", student2.gpa);
    printf("%s\n", (student2.isFulltime) ? "YES": "NO");*/

    printstudent(student1);
    printstudent(student2);
    printstudent(student3);




    return 0;
}


void printstudent(Students student){

    printf("NAME: %s\n", student.name);
    printf("AGE: %d\n", student.age);
    printf("GPA: %.2f\n", student.gpa);
    printf("FULL TIME: %s\n", (student.isFulltime) ? "YES": "NO");

    printf("\n");

};