#include <stdio.h>
 
int main(){
    /* Variable declation */
    int firstNumber, secondNumber;
    int sum, difference, product, modulo;
    float quotient;
     
    printf("Enter First Number: ");
    scanf("%d", &amp;firstNumber);
    printf("Enter Second Number: ");
    scanf("%d", &amp;secondNumber);
     
    /* Adding two numbers */
    sum = firstNumber + secondNumber;
    /* Subtracting two numbers */
    difference = firstNumber - secondNumber;
    /* Multiplying two numbers*/
    product = firstNumber * secondNumber;
    /* Dividing two numbers */
    quotient = (float)firstNumber / secondNumber;
    /* returns remainder of after an integer division */
    modulo = firstNumber % secondNumber;
     
    printf("\nSum = %d", sum);
    printf("\nDifference  = %d", difference);
    printf("\nMultiplication = %d", product);
    printf("\nDivision = %.3f", quotient);
    printf("\nRemainder = %d", modulo);
     
    return 0;
}