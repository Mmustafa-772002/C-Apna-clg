#include<stdio.h>
int main()
{
    int marks ;
    printf("Enter your marks :");
    scanf("%d",&marks);
    (marks <= 0 || marks > 100) ? printf("invalid marks") :
    // condition ? expression_if_true : expression_if_false;
    (marks < 35) ?  printf("failed"):
    (marks <= 55) ? printf("passed with c grade") : 
    (marks <= 75) ? printf("passed with b grade") : 
    (marks <= 95) ? printf("passed with a grade") : 
    printf("Passed with A+ grade");
    return 0 ;
}

// 1. The last ternary operator is incomplete

// You wrote:

// (marks <= 96) ? printf("passed with a+ grade"):

// Every ternary operator must have both parts:

// condition ? true_expression : false_expression;

// You're missing the expression after the final :.

// 2. Your grade ranges leave out 97–100

// With:

// (marks <= 95) ? printf("passed with a grade") : 
// (marks <= 96) ? printf("passed with a+ grade"):
// 96 → A+
// 97, 98, 99, 100 → not handled