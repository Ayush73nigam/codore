#include <stdio.h>
#include <string.h>

char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen",
                "Eighteen", "Nineteen"};
char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
char *units[] = {"", "Thousand", "Million", "Billion", "Trillion"};

void indian_number_to_words(int num) {
    if (num == 0) {
        printf("Zero");
        return;
    }

    if (num >= 10000000) {
        indian_number_to_words(num / 10000000);
        printf(" Crore ");
        num %= 10000000;
    }

    if (num >= 100000) {
        indian_number_to_words(num / 100000);
        printf(" Lakh ");
        num %= 100000;
    }

    if (num >= 1000) {
        indian_number_to_words(num / 1000);
        printf(" Thousand ");
        num %= 1000;
    }

    if (num >= 100) {
        printf("%s Hundred ", ones[num / 100]);
        num %= 100;
    }

    if (num > 0) {
        if (num < 20)
            printf("%s ", ones[num]);
        else {
            printf("%s ", tens[num / 10]);
            if (num % 10)
                printf("%s ", ones[num % 10]);
        }
    }
}

void international_number_to_words(int num) {
    if (num == 0) {
        printf("Zero");
        return;
    }

    int i = 0;
    while (num > 0) {
        if (num % 1000 != 0) {
            indian_number_to_words(num % 1000);
            printf(" %s ", units[i]);
        }
        num /= 1000;
        i++;
    }
}

int main() {
    int num = 12025850; // Change this to the desired number

    printf("Indian Representation: ");
    indian_number_to_words(num);
    printf("\n");

    printf("International Representation: ");
    international_number_to_words(num);
    printf("\n");

    return 0;
}



#include <stdio.h>

// Function to convert a number to Roman numeral
void convertToRoman(int num) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    if (num < 1 || num > 3999) {
        printf("Invalid input. Please enter a number between 1 and 3999.\n");
        return;
    }

    printf("Roman numeral representation of %d is: ", num);

    for (int i = 0; num > 0; i++) {
        while (num >= values[i]) {
            printf("%s", symbols[i]);
            num -= values[i];
        }
    }

    printf("\n");
}

int main() {
    int num;
    printf("Enter a number between 1 and 3999: ");
    scanf("%d", &num);

    convertToRoman(num);

    return 0;
}
