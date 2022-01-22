// total electricity bill for Delhi customers by TATA Power DDL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int LINE_LENGTH = 80;
const int PROMT_SIZE = 59;
const int STR_LEN = 50;

void prompt(char text[])
{
    printf("%-*s", PROMT_SIZE, text);
    printf(": ");
}

long inputCustomerId()
{
    long id;

    prompt("1. Input Customer ID");
    scanf("%ld", &id);

    return id;
}

void inputCustomerName(char *name)
{
    prompt("2. Input the name of the customer");
    scanf("%s", name);
}

int inputMonths()
{
    int months;

    prompt("3. Input Bill Period (months)");
    scanf("%d", &months);

    return months;
}

void inputTypeOfConnection(char *toc)
{
    printf("4. Input the Type of connection (Domestic (D) /\n");
    prompt("Non-Domestic (ND), Industrial (I) and Agriculture(A))");
    scanf("%s", toc);
}

double inputSanctionedLoad()
{
    double load;

    prompt("5. Input the Sanctioned Load (KW/KVA)");
    scanf("%lf", &load);

    return load;
}

int inputUsedUnits()
{
    int units;

    prompt("6. Input the unit used/consumed by the customer");
    scanf("%d", &units);

    return units;
}

void printDivider(char c, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%c", c);
    }
    printf("\n");
}

void printCentered(char *s, int length)
{
    int padding = (length - strlen(s)) / 2 + strlen(s);
    printf("%*s\n", padding, s);
}

void printBanner()
{
    printDivider('*', LINE_LENGTH);
    printCentered("TATA Power DDL", LINE_LENGTH);
    printCentered("Bill of Supply for Electricity", LINE_LENGTH);
    printDivider('*', LINE_LENGTH);
}

void printCustomerId(long id)
{
    prompt("Customer IDNO");
    printf("%ld\n", id);
}

void printCustomerName(char *s)
{
    prompt("Customer Name");
    printf("%s\n", s);
}

void printBillPeriod(int months)
{
    prompt("Bill Period (months )");
    printf("%d\n", months);
}

void printTypeOfConnection(char *toc)
{
    prompt("Type of connection");

    if (strcmp(toc, "D") == 0)
    {
        printf("Domestic (D)\n");
    }
    else if (strcmp(toc, "ND") == 0)
    {
        printf("Non-Domestic (ND)\n");
    }
    else if (strcmp(toc, "I") == 0)
    {
        printf("Industrial (I)\n");
    }
    else if (strcmp(toc, "A") == 0)
    {
        printf("Agriculture(A)\n");
    }
    else
    {
        printf("\n\n\nIllegal value for type of connection. Exiting...\n");
        exit(1);
    }
}

void printSanctionedLoad(double load)
{
    prompt("Sanctioned Load (KW/KVA)");
    printf("%lf\n", load);
}

void printUnitConsumed(int units)
{
    prompt("Unit Consumed");
    printf("%d\n", units);
}

void printFixedCharges(double load, int months, char *toc)
{
    int fixed_charge;

    if (strcmp(toc, "D") == 0)
    {
        if (load <= 2)
        {
            fixed_charge = 20;
        }
        else if (load <= 5)
        {
            fixed_charge = 50;
        }
        else if (load <= 15)
        {
            fixed_charge = 100;
        }
        else if (load <= 25)
        {
            fixed_charge = 200;
        }
        else
        {
            fixed_charge = 250;
        }
    }
    else if (strcmp(toc, "ND") == 0)
    {
        fixed_charge = 250;
    }
    else if (strcmp(toc, "I") == 0)
    {
        fixed_charge = 250;
    }
    else if (strcmp(toc, "A") == 0)
    {
        fixed_charge = 125;
    }
    else
    {
        printf("\n\n\nIllegal value for type of connection. Exiting...\n");
        exit(1);
    }

    char prompt_text[STR_LEN];
    snprintf(
        prompt_text,
        sizeof prompt_text,
        "Fixed Charges : %.0lf x %d x %d", load, fixed_charge, months);

    prompt(prompt_text);
    printf("%.0lf\n", load * fixed_charge * months);
}

int main()
{
    long id = inputCustomerId();
    char name[STR_LEN];
    inputCustomerName(name);
    int months = inputMonths();
    char type_of_conn[3];
    inputTypeOfConnection(type_of_conn);
    double load = inputSanctionedLoad();
    int units = inputUsedUnits();

    system("clear"); // NOTE: won't work on windows

    printBanner();

    printCustomerId(id);
    printCustomerName(name);
    printBillPeriod(months);
    printTypeOfConnection(type_of_conn);
    printSanctionedLoad(load);

    printf("\n");

    printFixedCharges(load, months, type_of_conn);
}