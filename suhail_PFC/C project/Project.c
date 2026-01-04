#include <stdio.h>ṇ
void showMenu() {
    printf("\n------ RESTAURANT MENU ------\n");
    printf("1. Burger      - Rs.100\n");
    printf("2. Pizza       - Rs.200\n");
    printf("3. Sandwich    - Rs.80\n");
    printf("4. Coffee      - Rs.50\n");
    printf("5. Cold Drink  - Rs.40\n");
    printf("------------------------------\n");
}

int getPrice(int item) {
    switch(item) {
        case 1: return 100;
        case 2: return 200;
        case 3: return 80;
        case 4: return 50;
        case 5: return 40;
        default: return 0;
    }
}

int main() {
    int choice, qty;
    float total = 0, gst, discount, finalAmount; 
    char more;

    printf("---------------Welcome to GIZA Restraunt---------------");


    showMenu();

    do {
        printf("Enter item number: ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        total += getPrice(choice) * qty;

        printf("Add more items? (y/n): ");
        scanf(" %c", &more);

    } while(more == 'y' || more == 'Y');

    gst = total * 0.18;

    if(total > 500)
        discount = total * 0.10;
    else
        discount = 0;

    finalAmount = total + gst - discount;

    printf("\n-------- BILL --------\n");
    printf("Total Amount : Rs. %.2f\n", total);
    printf("GST (18%%)     : Rs. %.2f\n", gst);
    printf("Discount     : Rs. %.2f\n", discount);
    printf("----------------------\n");
    printf("Final Amount : Rs. %.2f\n", finalAmount);
    printf("----------------------\n");
    printf("Thank You! Visit Again\n");

    return 0;
}