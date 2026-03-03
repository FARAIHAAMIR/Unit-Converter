#include <stdio.h>
#include <math.h>

/* Function Declarations */
void displayMenu();
void lengthConversion();
void temperatureConversion();
void timeConversion();
void weightConversion();
void speedConversion();
void areaConversion();
void angleConversion();
void numberSystemConversion();

/* MAIN FUNCTION */
int main()
{
    int choice;
    char continue_program;

    do
    {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: lengthConversion(); break;
            case 2: temperatureConversion(); break;
            case 3: timeConversion(); break;
            case 4: weightConversion(); break;
            case 5: speedConversion(); break;
            case 6: areaConversion(); break;
            case 7: angleConversion(); break;
            case 8: numberSystemConversion(); break;
            default: printf("Invalid choice!\n");
        }

        printf("\nDo you want to perform another conversion? (y/n): ");
        scanf(" %c", &continue_program);

    } while(continue_program == 'y' || continue_program == 'Y');

    printf("\nProgram Ended Successfully.\n");
    return 0;
}

/* MENU FUNCTION */
void displayMenu()
{
    printf("\n===== UNIT CONVERTER =====\n");
    printf("1. Length Conversion\n");
    printf("2. Temperature Conversion\n");
    printf("3. Time Conversion\n");
    printf("4. Weight Conversion\n");
    printf("5. Speed Conversion\n");
    printf("6. Area Conversion\n");
    printf("7. Angle Conversion\n");
    printf("8. Number System Conversion\n");
}

/* LENGTH */
void lengthConversion()
{
    float value;
    int choice;

    printf("\n1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("3. Feet to Inches\n");
    printf("4. Inches to Feet\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch(choice)
    {
        case 1: printf("Result: %.2f km\n", value / 1000); break;
        case 2: printf("Result: %.2f m\n", value * 1000); break;
        case 3: printf("Result: %.2f inches\n", value * 12); break;
        case 4: printf("Result: %.2f feet\n", value / 12); break;
        default: printf("Invalid choice!\n");
    }
}

/* TEMPERATURE */
void temperatureConversion()
{
    float value;
    int choice;

    printf("\n1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch(choice)
    {
        case 1: printf("Result: %.2f F\n", (value * 9/5) + 32); break;
        case 2: printf("Result: %.2f C\n", (value - 32) * 5/9); break;
        case 3: printf("Result: %.2f K\n", value + 273.15); break;
        default: printf("Invalid choice!\n");
    }
}

/* TIME */
void timeConversion()
{
    float value;
    int choice;

    printf("\n1. Seconds to Minutes\n");
    printf("2. Minutes to Hours\n");
    printf("3. Hours to Seconds\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch(choice)
    {
        case 1: printf("Result: %.2f minutes\n", value / 60); break;
        case 2: printf("Result: %.2f hours\n", value / 60); break;
        case 3: printf("Result: %.2f seconds\n", value * 3600); break;
        default: printf("Invalid choice!\n");
    }
}

/* WEIGHT */
void weightConversion()
{
    float value;
    int choice;

    printf("\n1. Kilograms to Grams\n");
    printf("2. Grams to Kilograms\n");
    printf("3. Kilograms to Pounds\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch(choice)
    {
        case 1: printf("Result: %.2f grams\n", value * 1000); break;
        case 2: printf("Result: %.2f kg\n", value / 1000); break;
        case 3: printf("Result: %.2f pounds\n", value * 2.20462); break;
        default: printf("Invalid choice!\n");
    }
}

/* SPEED */
void speedConversion()
{
    float value;
    int choice;

    printf("\n1. Km/h to m/s\n");
    printf("2. m/s to Km/h\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch(choice)
    {
        case 1: printf("Result: %.2f m/s\n", value / 3.6); break;
        case 2: printf("Result: %.2f km/h\n", value * 3.6); break;
        default: printf("Invalid choice!\n");
    }
}

/* AREA */
void areaConversion()
{
    float value;
    int choice;

    printf("\n1. Square meters to Square kilometers\n");
    printf("2. Acres to Square meters\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch(choice)
    {
        case 1: printf("Result: %.6f sq km\n", value / 1000000); break;
        case 2: printf("Result: %.2f sq meters\n", value * 4046.86); break;
        default: printf("Invalid choice!\n");
    }
}

/* ANGLE */
void angleConversion()
{
    float value;
    int choice;

    printf("\n1. Degrees to Radians\n");
    printf("2. Radians to Degrees\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch(choice)
    {
        case 1: printf("Result: %.4f radians\n", value * 3.14159 / 180); break;
        case 2: printf("Result: %.4f degrees\n", value * 180 / 3.14159); break;
        default: printf("Invalid choice!\n");
    }
}

/* NUMBER SYSTEM */
void numberSystemConversion()
{
    int decimal, remainder, binary = 0, place = 1;

    printf("\nEnter a decimal number: ");
    scanf("%d", &decimal);

    while(decimal > 0)
    {
        remainder = decimal % 2;
        binary += remainder * place;
        decimal /= 2;
        place *= 10;
    }

    printf("Binary Equivalent: %d\n", binary);
}
