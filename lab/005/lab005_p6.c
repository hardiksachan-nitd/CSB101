// total electricity bill for Delhi customers by TATA Power DDL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int LINE_LENGTH = 80;
const int PROMT_SIZE = 59;
const int STR_LEN = 50;
const int W_COL_1 = 15;
const int W_COL_2 = 45;
const int W_COL_3 = 15;

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

double calculateAndPrintFixedCharges(double load, int months, char *toc)
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

    double charges = load * fixed_charge * months;
    printf("%.0lf\n", charges);

    return charges;
}

double calculateAndPrintEnergyRow(int units, double rate, int months)
{
    double amount = units * rate * months;
    printf(
        "%-*d\t@Rs.%7.2lfper unit\t%-*.0lf\n",
        W_COL_1, units,
        rate,
        W_COL_3, amount);

    return amount;
}

int calculateAndPrintEnergyCharges(double load, int months, char *toc, int units)
{
    double total_charges = 0.0;

    printf("Energy charges: \n\n");
    printf("%-*s%-*s%-*s\n", W_COL_1, "Units", W_COL_2, "Rate (Rs)", W_COL_3, "Amount (Rs)");

    if (strcmp(toc, "D") == 0)
    {
        if (units <= 200)
        {
            total_charges += calculateAndPrintEnergyRow(units, 3.0, months);
        }
        else if (units <= 400)
        {
            total_charges += calculateAndPrintEnergyRow(200, 3.0, months);
            total_charges += calculateAndPrintEnergyRow(units - 200, 4.5, months);
        }
        else if (units <= 800)
        {
            total_charges += calculateAndPrintEnergyRow(200, 3.0, months);
            total_charges += calculateAndPrintEnergyRow(200, 4.5, months);
            total_charges += calculateAndPrintEnergyRow(units - 400, 6.5, months);
        }
        else if (units <= 1200)
        {
            total_charges += calculateAndPrintEnergyRow(200, 3.0, months);
            total_charges += calculateAndPrintEnergyRow(200, 4.5, months);
            total_charges += calculateAndPrintEnergyRow(400, 6.5, months);
            total_charges += calculateAndPrintEnergyRow(units - 800, 7.0, months);
        }
        else
        {
            total_charges += calculateAndPrintEnergyRow(200, 3.0, months);
            total_charges += calculateAndPrintEnergyRow(200, 4.5, months);
            total_charges += calculateAndPrintEnergyRow(400, 6.5, months);
            total_charges += calculateAndPrintEnergyRow(400, 7.0, months);
            total_charges += calculateAndPrintEnergyRow(units - 1200, 8.0, months);
        }
    }
    else if (strcmp(toc, "ND") == 0)
    {
        if (load <= 3)
        {
            total_charges += calculateAndPrintEnergyRow(units, 6.0, months);
        }
        else
        {
            total_charges += calculateAndPrintEnergyRow(units, 8.5, months);
        }
    }
    else if (strcmp(toc, "I") == 0)
    {
        total_charges += calculateAndPrintEnergyRow(units, 7.75, months);
    }
    else if (strcmp(toc, "A") == 0)
    {
        total_charges += calculateAndPrintEnergyRow(units, 1.5, months);
    }
    else
    {
        printf("\n\n\nIllegal value for type of connection. Exiting...\n");
        exit(1);
    }

    printDivider('=', W_COL_1 + W_COL_2 + W_COL_3);
    printf("Total: %*.2lf\n", W_COL_1 + W_COL_2 + W_COL_3 - 7, total_charges);

    printf("\n");
    prompt("Energy charges: ");
    printf("%.2lf", total_charges);

    return total_charges;
}

double calculateAndPrintSurchargeAmount(double energy_charges)
{
    double surcharge = energy_charges * 0.16;
    prompt("Surcharge Amount @ 16%%");
    printf("%.2lf\n", surcharge);

    return surcharge;
}

void printNetCurrentDemand(double fixed, double energy, double surcharge)
{
    prompt("Net Current Demand");
    printf("%.2lf\n", fixed + surcharge + energy);
}

double calculateAndPrintSubsidy(double total, char *toc, int units, int months)
{
    double subsidy = 0.0;
    if (strcmp(toc, "D") == 0)
    {
        if (units <= 200)
        {
            subsidy = total;
        }
        else if (units <= 400)
        {
            subsidy = 800.0 * months;
            if (subsidy > total)
            {
                subsidy = total;
            }
        }
    }

    prompt("Subsidy");
    printf("- %.0lf\n", subsidy);

    return subsidy;
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

    double fixed_charges = calculateAndPrintFixedCharges(load, months, type_of_conn);

    printf("\n");

    double energy_charges = calculateAndPrintEnergyCharges(load, months, type_of_conn, units);

    printf("\n");

    double surcharge = calculateAndPrintSurchargeAmount(energy_charges);
    printNetCurrentDemand(fixed_charges, energy_charges, surcharge);

    double subsidy = calculateAndPrintSubsidy(fixed_charges + energy_charges + surcharge, type_of_conn, units, months);

    printDivider('=', LINE_LENGTH);
    prompt("Net Amount Payable By the Customer");
    printf("%.2lf\n", fixed_charges + energy_charges + surcharge - subsidy);
    printDivider('=', LINE_LENGTH);
}