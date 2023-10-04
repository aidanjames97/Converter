#include <stdio.h>

//      -- defining constants for calculation --
#define freezingPoint 32.0f
#define scaleFactor (5.0f / 9.0f)

//      -- defining functions --
// calculates celcius to fahrenheit or vice verse
float celsiusFahrenheit(void) {
    // complete boolean variable
    _Bool complete = 0;

    // variable to hold return value and user input
    float out;
    float in;

    // user input character
    char usr;

    // loop for user input
    while (complete == 0) {
        printf("Entre C for celsius to fahrenheit\n");
        printf("Entre F for fahrenheit to celsius\n");
        scanf(" %c", &usr);

        // user requested c to f
        if(usr == 'C') {
            complete = 1;
            printf("Entre celsius temperature:\n");
            scanf("%f", &in);

            // calculating and printing
            out = (in * 9.0 / 5.0) + 32.0;
            printf("%.2f celsius = %.2f fahrenheit\n", in, out);

            // user requested f to c
        } else if (usr == 'F') {
            complete = 1;
            printf("Entre fahrenheit temperature:\n");
            scanf("%f", &in);

            // calculating and printing
            out = (in - freezingPoint) * scaleFactor;
            printf("%.2f fahrenheit = %.2f celsius\n", in, out);

        }
    }
    return 0.0;
}

// calculates centimeters to inches or vice versa
float centimeterInch(void) {
// complete boolean variable
    _Bool complete = 0;

    // variable to hold return value and user input
    float out;
    float in;

    // user input character
    char usr;

    // loop for user input
    while (complete == 0) {
        printf("Entre C for centimeter to inches\n");
        printf("Entre I for inches to centimeter\n");
        scanf(" %c", &usr);

        // user requested c to f
        if(usr == 'C') {
            complete = 1;
            printf("Entre centimeter value:\n");
            scanf("%f", &in);

            // calculating and printing
            out = in / 2.54;
            printf("%.2f centimeters = %.2f inches\n", in, out);

            // user requested f to c
        } else if (usr == 'I') {
            complete = 1;
            printf("Entre inch value:\n");
            scanf("%f", &in);

            // calculating and printing
            out = in * 2.54;
            printf("%.2f inches = %.2f centimeters\n", in, out);
        }
    }

    // delete
    return 0.0;
}

// calculates kilogram to pound or visa versa
float kilogramPound(void) {
// complete boolean variable
    _Bool complete = 0;

    // variable to hold return value and user input
    float out;
    float in;

    // user input character
    char usr;

    // loop for user input
    while (complete == 0) {
        printf("Entre K for kilos to pounds\n");
        printf("Entre P for pounds to kilos\n");
        scanf(" %c", &usr);

        // user requested c to f
        if(usr == 'K') {
            complete = 1;
            printf("Entre kilogram value:\n");
            scanf("%f", &in);

            // calculating and printing
            out = in * 2.2;
            printf("%.2f kilos = %.2f pounds\n", in, out);

            // user requested f to c
        } else if (usr == 'P') {
            complete = 1;
            printf("Entre pound value:\n");
            scanf("%f", &in);

            // calculating and printing
            out = in / 2.2;
            printf("%.2f pounds = %.2f kilos\n", in, out);

        }
    }

    // delete
    return 0.0;
}

// calculates meters to feet or visa versa
float meterFeet(void) {
// complete boolean variable
    _Bool complete = 0;

    // variable to hold return value and user input
    float out;
    float in;

    // user input character
    char usr;

    // loop for user input
    while (complete == 0) {
        printf("Entre M for meter to feet\n");
        printf("Entre F for feet to meter\n");
        scanf(" %c", &usr);

        // user requested c to f
        if(usr == 'M') {
            complete = 1;
            printf("Entre meter value:\n");
            scanf("%f", &in);

            // calculating and printing
            out = in * 3.28084;
            printf("%.2f meters = %.2f feet\n", in, out);

            // user requested f to c
        } else if (usr == 'F') {
            complete = 1;
            printf("Entre feet value:\n");
            scanf("%f", &in);

            // calculating and printing
            out = in / 3.28084;
            printf("%.2f feet = %.2f meters\n", in, out);

        }
    }

    // delete
    return 0.0;
}

// main function (everything going here to start)
int main(void) {
    // requesting user for their input type
    char input;

    // comptleted boolean variable
    _Bool complete = 0;

    while (complete == 0) {
        // requesting user
        printf("Entre 1 for conversion between Celcius and Fahrenheit\n");
        printf("Entre 2 for conversion between Centimeter and Inches\n");
        printf("Entre 3 conversion between Kilograms and Pounds\n");
        printf("Entre 4 for conversion between Meters and Feet\n");
        printf("Entre q or Q to quit program\n");
        scanf(" %c", &input);

        //      -- changing based on user desired input type --
        // quit
        if((input == 'q') || (input == 'Q')) {
            complete = 1;
            break;
            // call function celsius fahrenheit
        } else if (input == '1') {
            celsiusFahrenheit();
            // call function centimeter inch
        } else if (input == '2') {
            centimeterInch();
            // call function kilogram pound
        } else if (input == '3') {
            kilogramPound();
            // call function meter feet
        } else if (input == '4') {
            meterFeet();
        } else {
            // input received but no a correct one
            printf("Invald input\n");
        }
    }
    // return value 
    return 0;
}