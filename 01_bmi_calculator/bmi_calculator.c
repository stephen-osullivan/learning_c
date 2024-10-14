#include <stdio.h>
#include <string.h>

int main(void) {
    char name[50], bmi_cat[20];
    float height, weight, bmi;

    // get user input
    printf("Enter your name: ");
    scanf("%49s", name);
    
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    
    // calc BMI
    bmi = weight/(height*height);
    if (bmi <18.5) {
	strcpy(bmi_cat, "Underweight");
    } else if (bmi < 25) {
	strcpy(bmi_cat, "Normal Weight");
    } else if (bmi < 30) {
	strcpy(bmi_cat, "Overweight");
    } else {
	strcpy(bmi_cat, "Obsese");
    }
    // output results
    printf("Hello, %s. Your BMI is %.1f\n", name, bmi);
    printf("Your BMI category is %s\n", bmi_cat);    
}
