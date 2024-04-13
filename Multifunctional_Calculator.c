#include <stdio.h>
#include <conio.h>
#include <math.h>

#define pi M_PI
double use;

int calculator(void);
int triangle(void);
int square(void);
int circle(void);
int temperature_convert(void);
int fibonacci_series(void);
int factorial_number(void);

int main() {
    int decision;

    printf("1. Use Calculator. \n2. Math of Triangle. \n3. Math of Square. \n4. Math of Circle. \n");
    printf("5. Temperature Converter. \n6. Fibonacci Series. \n7. Factorial Number. \n");

    printf("\nWhat are You want to do: ");
    scanf("%d", &decision);

    clrscr();
    switch(decision) {
    case 1:
        calculator();
        break;

    case 2:
        triangle();
        break;

    case 3:
        square();
        break;

    case 4:
        circle();
        break;

    case 5:
        temperature_convert();
        break;

    case 6:
        fibonacci_series();
        break;

    case 7:
        factorial_number();
        break;

    default:
        printf("\tPlease Choose Option 1~7. \n\n");
        main();
    }
}



int calculator() {
    double num1, num2, ans;
    char operator;

    printf("\n\n\tStart Calculator:: \n");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch(operator) {
    //Code for Plus
    case '+':
        ans = num1 + num2;
        printf("\nYour Answer: %.2lf\n\n", ans);
        break;

    //Code for Minus
    case '-':
        ans = num1 - num2;
        printf("\nYour Answer: %.2lf\n\n", ans);
        break;

    //Code for Multiply
    case '*':
        ans = num1 * num2;
        printf("\nYour Answer: %.2lf\n\n", ans);
        break;

    //Code for Divide
    case '/':
        //Possible Divide
        if(num2 != 0) {
            ans = num1 / num2;
            int answer;
            answer = num1 / num2;
            //Divide With Remainder
            if(num1 != answer * num2) {
                int quotient, remainder;
                quotient = num1 / num2;
                remainder = num1 - quotient * num2;
                printf("\nYour Answer: %.2lf\n\    Whether,  Quotient: %d\n        And,  Remainder: %d\n\n", ans, quotient, remainder);
            }
            //Divide Without Remainder
            if(num1 == answer * num2) {
                printf("\nYour Answer: %.0lf\n\n", ans);
            }
        }
        //Impossible Divide
        if(num2 == 0) {
            printf("\nYour Answer: Infinite\n\n");
        }
        break;

    default:
        clrscr();
        printf("You Entered Miss Operator to Calculation.");
        calculator();
    }


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter “11”... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use == 11) {
        clrscr();
        main();
    }
    else {
        clrscr();
        calculator();
    }
}



int triangle() {
    int shape;
    double a, b, c, area, s, range, x, y, z;
    printf("\n\nWhat kind of Triangle? \n1. ‌Equilateral_Triangle \n2. Isosceles_Triangle \n3. Scalene_Triangle\n");
    printf("4. ‌Two Arms and An Included Angle \n5. An Arm and Two Angles \n\tYour Answer: ");
    scanf("%d", &shape);

    switch(shape) {
    //Equilateral_Triangle
    case 1:
        printf("\nAn Arm Length: ");
        scanf("%lf", &a);

        area = (sqrt(3)/4)*pow(a,2);
        range = 3*a;
        printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);
        break;

    //Isosceles_Triangle
    case 2:
        printf("\nEqual Arm Length: ");
        scanf("%lf", &a);
        printf("\nOther Arm's Length (Base): ");
        scanf("%lf", &b);

        area = (b/4)*sqrt((4*pow(a,2))-pow(b,2));
        range = (2*a)+b;
        printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);
        break;

    //Scalene_Triangle
    case 3:
        printf("\nEnter 3 Arm Length: ");
        scanf("%lf %lf %lf", &a, &b, &c);

        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        range = a+b+c;
        printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);
        break;

    //Two Arms and An Included Angle
    case 4:
        printf("\nEnter Any 2 Arm's Length: ");
        scanf("%lf %lf", &a, &b);
        printf("\nEnter The Angle Between Them: ");
        scanf("%lf", &x);

        area = 0.5*a*b*sin((x*pi)/180);
        range = a+b+sqrt(pow(a,2)+pow(b,2)-2*a*b*cos((x*pi)/180));
        printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);
        break;

    //An Arm and Two Angles
    case 5:
        printf("\nEnter Arm Length: ");
        scanf("%lf", &a);
        printf("\nEnter 2 Angle's Value: ");
        scanf("%lf %lf", &x, &y);

        z = 180-(x+y);
        b = a*sin((y*pi)/180)/sin((z*pi)/180);
        c = a*sin((z*pi)/180)/sin((y*pi)/180);

        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        range = a+b+c;
        printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);
        break;

    default:
        clrscr();
        printf("\tPlease Choose Option 1~5. \n\n");
        triangle();
    }


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter “11”... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use == 11) {
        clrscr();
        main();
    }
    else {
        clrscr();
        triangle();
    }
}



int square() {
    int shape, type;
    double a, b, c, d, area, s, h, range, x, y;

    printf("\n\nWhat kind of Square? \n1. Square \n2. Rhombus \n3. Rectangle \n4. Parallelogram \n5. Trapezium \n\tYour Answer: ");
    scanf("%d", &shape);

    switch(shape) {
    //Square
    case 1:
        printf("\n\nWhat do you have to Calculate Square? \n\t1. An Arm Length. \n\t2. An Diagonal Length. \nYour Answer: ");
        scanf("%d", &type);

        if(type == 1) {
            printf("\nEnter An Arm Length: ");
            scanf("%lf", &a);

            area = pow(a,2);
            range = 4*a;
            printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);
        }
        if(type == 2) {
            printf("\nEnter An Diagonal's Length: ");
            scanf("%lf", &x);

            area = pow((x/sqrt(2)),2);
            range = 4*(x/sqrt(2));
            printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);
        }
        break;

    //Rhombus
    case 2:
        printf("\n\nWhat do you have to Calculate Rhombus? \n\t1. Two Diagonal's Length. \n\t2. Height & Land Length. \nYour Answer: ");
        scanf("%d", &type);

        if(type == 1) {
            printf("\nEnter Two Diagonal's Length: ");
            scanf("%lf %lf", &x, &y);

            area = 0.5*x*y;
            range = 2*sqrt(pow(x,2)+pow(y,2));
            printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);
        }
        if(type == 2) {
            printf("\nEnter Length of Land: ");
            scanf("%lf", &a);
            printf("\nEnter Height: ");
            scanf("%lf", &h);

            area = a*h;
            range = 4*a;
            printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);
        }
        break;

    //Rectangle
    case 3:
        printf("\n\nWhat do you have to Calculate Rectangle? \n\t1. Two Arm's Length. \n\t2. An Arm & Diagonal Length. \nYour Answer: ");
        scanf("%d", &type);

        if(type == 1) {
            printf("\nEnter Two Arm's Length: ");
            scanf("%lf %lf", &a, &b);

            area = a*b;
            range = 2*(a+b);
            printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);
        }
        if(type == 2) {
            printf("\nEnter An Diagonal Length: ");
            scanf("%lf", &x);
            printf("\nEnter An Arm Length: ");
            scanf("%lf", &a);

            area = a*sqrt(pow(x,2)-pow(a,2));
            range = 2*(a+sqrt(pow(x,2)-pow(a,2)));
            printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);
        }
        break;

    //Parallelogram
    case 4:
        printf("\n\nWhat do you have to Calculate Parallelogram? \n\t1. Two Neighboring Arm Length & Angle between Them. \n\t2. Height & Land Length. \nYour Answer: ");
        scanf("%d", &type);

        if(type == 1) {
            printf("\nEnter Two Neighboring Arm Length: ");
            scanf("%lf %lf", &a, &b);
            printf("\nEnter the Angle between Them: ");
            scanf("%lf", &x);

            area = a*b*sin((x*pi)/180);
            range = 2*(a+b);
            printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);
        }
        if(type == 2) {
            printf("\nEnter Length of Land: ");
            scanf("%lf", &b);
            printf("\nEnter Height: ");
            scanf("%lf", &h);

            area = b*h;
            range = 2*(b+h);
            printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);
        }
        break;

    //Trapezium
    case 5:
        printf("\n\nWhat do you have to Calculate Trapezium? \n\t1. Four Arm's Length. \n\t2. Two Parallel Arm's Length & Height. \nYour Answer: ");
        scanf("%d", &type);

        if(type == 1) {
            printf("\nEnter Four Arm's Length: ");
            scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

            s = (a+b+c+d)/2;
            area = sqrt(s*(s-a)*(s-b)*(s-c)*(s-d));
            range = a+b+c+d;
            printf("\n\tArea: %.2lf Square Units. (Can be Incorrect) \n\tRange: %.2lf Units. \n\n", area, range);
        }
        if(type == 2) {
            printf("\nEnter Shorter Parallel Arm's Length: ");
            scanf("%lf", &a);
            printf("\nEnter Larger Parallel Arm's Length: ");
            scanf("%lf", &b);
            printf("\nEnter Height: ");
            scanf("%lf", &h);

            area = 0.5*(a+b)*h;
            range = a+b+2*(sqrt(pow((b-a),2)+pow(h,2)));
            printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. (Can be Incorrect) \n\n", area, range);
        }
        break;

    default:
        clrscr();
        printf("\tPlease Choose Option 1~5. \n\n");
        square();
    }


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter “11”... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use == 11) {
        clrscr();
        main();
    }
    else {
        clrscr();
        square();
    }
}



int circle() {
    double r, area, range;

    printf("\n\nEnter Radius: ");
    scanf("%lf", &r);

    area = pi*pow(r,2);
    range = 2*pi*r;
    printf("\n\tArea: %.2lf Square Units. \n\tRange: %.2lf Units. \n\n", area, range);


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter “11”... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use == 11) {
        clrscr();
        main();
    }
    else {
        clrscr();
        circle();
    }
}



int temperature_convert() {
    int temp;
    double c, f, k;

    printf("\n\nWhat Temperature do You want to Convert from? \n\t1. Celsius (°C) \n\t2. Fahrenheit (°F) \n\t3. Kelvin (K) \nYour Decision: ");
    scanf("%d", &temp);

    switch(temp) {
    //Celsius (°C) to Fahrenheit (°F) & Kelvin (K)
    case 1:
        printf("\nEnter (°C) Celsius: ");
        scanf("%lf", &c);

        f = ((9*c)/5)+32;
        k = 273.15+c;
        printf("\n\nAnswer of %.2lf °C is... \n\t=> %.2lf °F \n\t=> %.2lf K\n\n", c, f, k);
        break;

    //Fahrenheit (°F) to Celsius (°C) & Kelvin (K)
    case 2:
        printf("\nEnter (°F) Fahrenheit: ");
        scanf("%lf", &f);

        c = 5*(f-32)/9;
        k = (5*(f-32)/9)+273.15;
        printf("\n\nAnswer of %.2lf °F is... \n\t=> %.2lf °C \n\t=> %.2lf K\n\n", f, c, k);
        break;

    // Kelvin (K) to Celsius (°C) & Fahrenheit (°F)
    case 3:
        printf("\nEnter (K) Kelvin: ");
        scanf("%lf", &k);

        c = k-273.15;
        f = ((9*(k-273.15))/5)+32;
        printf("\n\nAnswer of %.2lf K is... \n\t=> %.2lf °C \n\t=> %.2lf °F\n\n", k, c, f);
        break;

    default:
        clrscr();
        printf("\tPlease Choose Option 1~3. \n");
        temperature_convert();
    }


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter “11”... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use == 11) {
        clrscr();
        main();
    }
    else {
        clrscr();
        temperature_convert();
    }
}



int fibonacci_series() {
    int i, n;
    double t1=0, t2=1, next=t1+t2;

    printf("\n\nEnter The Number of Terms: ");
    scanf("%d", &n);

    printf("\n\tFibonacci Series: \n%.0lf, %.0lf", t1, t2);

    //Calculation of Fibonacci Series
    for(i=3; i<=n; ++i) {
        printf(", %.0lf", next);

        t1 = t2;
        t2 = next;
        next = t1+t2;
    }
    printf("\n\n");


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter “11”... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use == 11) {
        clrscr();
        main();
    }
    else {
        clrscr();
        fibonacci_series();
    }
}



int factorial_number() {
    int i, n;
    double ans=1;

    printf("\n\nEnter a Number (Maximum 170): ");
    scanf("%d", &n);

    //Input Negative number, It's Error
    if(n<0) {
        printf("\nError! Factorial of a Negative Number doesn't Exist.\n\n");
    }
    else {
        //Calculation of Factorial Numbers
        for(i=1; i<=n; ++i) {
            ans *= i;
        }
        printf("\nFactorial of %d is = %.0lf\n\n", n, ans);
    }


    //Back to Main Function or Stay in this Function
    printf("\n\nTo Back Main Function, Enter “11”... \nOtherwise, Enter another Number to stay in this Function. \n\tEnter: ");
    scanf("%lf", &use);
    if(use == 11) {
        clrscr();
        main();
    }
    else {
        clrscr();
        factorial_number();
    }
}