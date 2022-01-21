// total electricity bill for Delhi customers by TATA Power DDL

#include <stdio.h>
#include <string.h>

const int LINE_LENGTH = 80;
const int PROMT_SIZE = 59;

void prompt(char text[])
{
    printf("%-*s", PROMT_SIZE, text);
    printf(": ");
}

long input_customer_id()
{
    long id;

    prompt("1. Input Customer ID");
    scanf("%ld", &id);

    return id;
}

char *input_customer_name()
{
    char *name;

    prompt("2. Input the name of the customer");
    scanf("%s", &name);

    return name;
}

int input_months()
{
    int months;

    prompt("3. Input Bill Period (months)");
    scanf("%d", &months);

    return months;
}

char *input_type_of_connection()
{
    char *t;

    printf("4. Input the Type of connection (Domestic (D) /\n");
    prompt("Non-Domestic (ND), Industrial (I) and Agriculture(A))");
    scanf("%s", &t);

    return t;
}

double input_sanctioned_load()
{
    double load;

    prompt("5. Input the Sanctioned Load (KW/KVA)");
    scanf("%lf", &load);

    return load;
}

int input_used_units()
{
    int units;

    prompt("6. Input the unit used/consumed by the customer");
    scanf("%d", &units);

    return units;
}

void print_divider(char c, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%c", c);
    }
    printf("\n");
}

void print_centered(char *s, int length)
{
    int padding = (length - strlen(s)) / 2 + strlen(s);
    printf("%*s\n", padding, s);
}

void print_banner()
{
    print_divider('*', LINE_LENGTH);
    print_centered("TATA Power DDL", LINE_LENGTH);
    print_centered("Bill of Supply for Electricity", LINE_LENGTH);
    print_divider('*', LINE_LENGTH);
}

void print_customer_id(long id)
{
    prompt("Customer IDNO");
    printf("%ld\n", id);
}

void print_customer_name(char *s)
{
    prompt("Customer Name");
    printf("%s\n", s);
}

void print_bill_period(int months)
{
    prompt("Bill Period (months )");
    printf("%d\n", months);
}

void print_type_of_connection(char *toc)
{
    prompt("Type of connection");

    if (strcmp(&toc, "D") == 0)
    {
        printf("Domestic (D)\n");
    } else if (strcmp(&toc, "ND") == 0) {
        printf("Non-Domestic (ND)\n");
    }
}

int main()
{
    // long id = input_customer_id();
    // char *name = input_customer_name();
    // int months = input_months();
    char *type_of_conn = input_type_of_connection();
    // double load = input_sanctioned_load();
    // int units = input_used_units();

    system("clear"); // NOTE: won't work on windows

    print_banner();

    // print_customer_id(id);
    // print_customer_name(&name);
    // print_bill_period(months);
    print_type_of_connection(type_of_conn);
}