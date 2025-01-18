#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float total_marks;
};

int main() {
    struct Student student1, student2; 
    
    printf("Enter details for Student 1:\n");
    printf("Enter name: ");
    fgets(student1.name, sizeof(student1.name), stdin);  
    printf("Enter age: ");
    scanf("%d", &student1.age);  
    printf("Enter total marks: ");
    scanf("%f", &student1.total_marks); 

   
    getchar(); 

  
    printf("\nEnter details for Student 2:\n");
    printf("Enter name: ");
    fgets(student2.name, sizeof(student2.name), stdin);  
    printf("Enter age: ");
    scanf("%d", &student2.age);  
    printf("Enter total marks: ");
    scanf("%f", &student2.total_marks); 

   
    printf("\nDetails of Student 1:\n");
    printf("Name: %s", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Total Marks: %.2f\n", student1.total_marks);

    printf("\nDetails of Student 2:\n");
    printf("Name: %s", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Total Marks: %.2f\n", student2.total_marks);

   
    float average_marks = (student1.total_marks + student2.total_marks) / 2.0;
    printf("\nAverage of Total Marks: %.2f\n", average_marks);

    return 0;
}

