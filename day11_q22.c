#include <stdio.h>

int main() {
    double costPrice, sellingPrice;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%lf %lf", &costPrice, &sellingPrice);

    if (sellingPrice > costPrice) {
        double profit = sellingPrice - costPrice;
        double profitPercent = (profit / costPrice) * 100;
        printf("Profit %.0lf%%\n", profitPercent);
    } 
    else if (costPrice > sellingPrice) {
        double loss = costPrice - sellingPrice;
        double lossPercent = (loss / costPrice) * 100;
        printf("Loss %.0lf%%\n", lossPercent);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
