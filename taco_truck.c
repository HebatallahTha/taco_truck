#include <stdio.h>

float totalDue(float totalpriceTacos, float totalpriceBurritos, float totalpriceQuesadillas, float totalpriceNachos) 
{
    return totalpriceTacos + totalpriceBurritos + totalpriceQuesadillas + totalpriceNachos;
}

int main()
{
    char orderChoice;
    char menuChoice;

    int totalNachos = 0, totalBurritos = 0, totalQuesadillas = 0, totalTacos = 0;
    float totalpriceNachos = 0.0, totalpriceBurritos = 0.0, totalpriceQuesadillas = 0.0, totalpriceTacos = 0.0;

    printf("Welcome to Tomas Taco Truck!\n");

    do {
        printf("Would you like to place an order? Y/N ");
        scanf("\n%c", &orderChoice);

        if (orderChoice == 'n' || orderChoice == 'N') {
            printf("Your order consists of:\n");
            printf("Total Tacos: %d\n", totalTacos);
            printf("Total Burritos: %d\n", totalBurritos);
            printf("Total Quesadillas: %d\n", totalQuesadillas);
            printf("Total Nachos: %d\n", totalNachos);
            printf("Total due: $%.2f\n", totalDue(totalpriceTacos, totalpriceBurritos, totalpriceQuesadillas, totalpriceNachos));
            printf("Thanks for choosing Tomas Taco Truck!\n");
            break;
        }

        while (orderChoice == 'y' || orderChoice == 'Y') {
            printf("\nPlease choose from the following menu categories:\n");
            printf("T - Tacos\n");
            printf("B - Burritos\n");
            printf("Q - Quesadillas\n");
            printf("N - Nachos\n");

            scanf("\n%c", &menuChoice);
            switch (menuChoice) {
                case 't': case 'T':
                    printf("\n1 - Regular Taco    $ 1.99\n");
                    printf("2 - Super Taco      $ 2.99\n");
                    printf("3 - Veggie Taco     $ 1.99\n");
                    printf("Please choose a taco: ");
                    scanf("\n%c", &menuChoice);
                    switch (menuChoice) {
                        case '1':
                            totalpriceTacos += 1.99;
                            totalTacos++;
                            break;
                        case '2':
                            totalpriceTacos += 2.99;
                            totalTacos++;
                            break;
                        case '3':
                            totalpriceTacos += 1.99;
                            totalTacos++;
                            break;
                        default:
                            printf("Invalid choice for taco. Please select a valid option.\n");
                            break;
                    }
                    break;

                case 'b': case 'B':
                    printf("\n1 - Regular Burrito               $ 2.99\n");
                    printf("2 - Super Burrito                 $ 3.99\n");
                    printf("3 - Veggie Burrito                $ 2.99\n");
                    printf("4 - Bean & Rice Burrito           $ 1.99\n");
                    printf("5 - Bean, Rice, & Cheese Burrito  $ 1.99\n");
                    printf("6 - Burrito Bowl                  $ 4.99\n");
                    printf("Please choose a Burrito: ");
                    scanf("\n%c", &menuChoice);
                    switch (menuChoice) {
                        case '1':
                            totalpriceBurritos += 2.99;
                            totalBurritos++;
                            break;
                        case '2':
                            totalpriceBurritos += 3.99;
                            totalBurritos++;
                            break;
                        case '3':
                            totalpriceBurritos += 2.99;
                            totalBurritos++;
                            break;
                        case '4':
                            totalpriceBurritos += 1.99;
                            totalBurritos++;
                            break;
                        case '5':
                            totalpriceBurritos += 1.99;
                            totalBurritos++;
                            break;
                        case '6':
                            totalpriceBurritos += 4.99;
                            totalBurritos++;
                            break;
                        default:
                            printf("Invalid choice for burrito. Please select a valid option.\n");
                            break;
                    }
                    break;

                case 'q': case 'Q':
                    printf("\n1 - Regular Quesadilla   $ 1.99\n");
                    printf("2 - Meat Quesadilla     $ 2.99\n");
                    printf("3 - Beef Quesadilla     $ 3.99\n");
                    printf("4 - Super Quesadilla    $ 4.99\n");
                    printf("Please choose a Quesadilla: ");
                    scanf("\n%c", &menuChoice);
                    switch (menuChoice) {
                        case '1':
                            totalpriceQuesadillas += 1.99;
                            totalQuesadillas++;
                            break;
                        case '2':
                            totalpriceQuesadillas += 2.99;
                            totalQuesadillas++;
                            break;
                        case '3':
                            totalpriceQuesadillas += 3.99;
                            totalQuesadillas++;
                            break;
                        case '4':
                            totalpriceQuesadillas += 4.99;
                            totalQuesadillas++;
                            break;
                        default:
                            printf("Invalid choice for quesadilla. Please select a valid option.\n");
                            break;
                    }
                    break;

                case 'n': case 'N':
                    printf("\n1 - Regular Nacho       $ 3.99\n");
                    printf("2 - Super Nacho         $ 5.99\n");
                    printf("Please choose a Nacho: ");
                    scanf("\n%c", &menuChoice);
                    switch (menuChoice) {
                        case '1':
                            totalpriceNachos += 3.99;
                            totalNachos++;
                            break;
                        case '2':
                            totalpriceNachos += 5.99;
                            totalNachos++;
                            break;
                        default:
                            printf("Invalid choice for nacho. Please select a valid option.\n");
                            break;
                    }
                    break;

                default:
                    printf("Invalid entry! Please enter one of the letters from the menu!\n");
                    break;
            }

            printf("Would you like to add to your order? Y/N ");
            scanf("\n%c", &orderChoice);
        }
    } while (orderChoice != 'n' && orderChoice != 'N');

    return 0;
}
