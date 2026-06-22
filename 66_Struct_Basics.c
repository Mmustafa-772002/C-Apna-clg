#include <stdio.h>
#include<string.h>
#include <stdbool.h>
struct student
{
    char name[50];
    int Age;
    float gpa;
    bool isFullTime;
};

int main()
{
    // struct : a custom container that holds mutiple pieces of realted information
    //  similar to oops
    struct student student1 = {"John", 30, 2.5, true};
    struct student student2 = {"patrica", 30, 3, true};
    struct student student3 = {"peter", 32, 6, true};
    struct student student4 = {"steve", 30, 8, true};
    struct student student = {0};
    // Correct syntax: strncpy(destination, source, max_bytes_to_copy);
strncpy(student4.name, "sandy", sizeof(student4.name) - 1);

// CRITICAL: strncpy doesn't guarantee a null-terminator if the string is too long, 
// so manually force the last character to be '\0' for safety.
student4.name[sizeof(student4.name) - 1] = '\0';
    student4.Age = 27;
    student4.gpa = 8;
    student4.isFullTime = false;
    
    printf("%s\n", student1.name); // here . is used to access the variable in strcut
    printf("%d\n", student1.Age);
    printf("%.2f\n", student1.gpa);
    printf("%s\n", (student1.isFullTime) ? "yes" : "No");
    printf("%s\n", student2.name);
    printf("%d\n", student2.Age);
    printf("%.2f\n", student2.gpa);
    printf("%s\n", (student2.isFullTime) ? "yes" : "No");
    printf("%s\n", student3.name);
    printf("%d\n", student3.Age);
    printf("%.2f\n", student3.gpa);
    printf("%s\n", (student3.isFullTime) ? "yes" : "No");
    printf("%s\n", student4.name);
    printf("%d\n", student4.Age);
    printf("%.2f\n", student4.gpa);
    printf("%s\n", (student4.isFullTime) ? "yes" : "No");
   
    
    return 0;
}