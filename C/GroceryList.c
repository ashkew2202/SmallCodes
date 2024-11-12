// I have tried to code thig grocery list which reads your list and you have the ability to print the list to view it anytime, 
// while also having the ability to find a Item according to quantity and also finding the item with maximum price.


#include <stdio.h>
#include <stdlib.h>

// The parameters of the items
struct item{
    int ID;
    char Name[20];
    float Price;
    int Quantity;
};

// Function calls

struct item * readGroceryList(int count);
void printGroceryList(int count,struct item *arr);
struct item findItem(struct item *arr, int qVal, int count);
struct item findMaxPriceItem(struct item * arr, int count);

int main(){
    int count, qVal;
    scanf("%d", &count);
    struct item *GroceryArr = readGroceryList(count);
    printGroceryList(count, GroceryArr);
    scanf("%d", &qVal);
    struct item ItemYouNeed = findItem(GroceryArr, qVal, count);
    printf("Item: ID = %d, Name = %s, Price = %f, Quantity = %d\n", ItemYouNeed.ID, ItemYouNeed.Name, ItemYouNeed.Price, ItemYouNeed.Quantity);
    struct item max_price_item = findMaxPriceItem(GroceryArr, count);
    printf("Item: ID = %d, Name = %s, Price = %f, Quantity = %d\n", max_price_item.ID, max_price_item.Name, max_price_item.Price, max_price_item.Quantity);

    free(GroceryArr);
}

struct item * readGroceryList(int count){
    struct item* groceryArray = (struct item*) malloc(100*sizeof(struct item));
    for(int i = 0; i < count; i++){
        printf("ID of Item: \n");
        scanf("%d", &groceryArray[i].ID);
        printf("Name of Item: \n");
        scanf("%s", groceryArray[i].Name);
        printf("Price of Item: \n");
        scanf("%f", &groceryArray[i].Price);
        printf("Quantity of Item: \n");
        scanf("%d", &groceryArray[i].Quantity);
    }
    return groceryArray;
}

void printGroceryList(int count,struct item *arr){
    for(int i = 0; i < count; i++){
        printf("ID of Item: %d\n", arr[i].ID);
        printf("Name of Item: %s\n", arr[i].Name);
        printf("Price of Item: %f\n", arr[i].Price);
        printf("QUantity of Item: %d\n", arr[i].Quantity);
        printf("-------------------------------------------\n");
    }
    return ;
}

struct item findItem(struct item *arr, int qVal, int count){
    for(int i = 0; i < count; i++){
        if(arr[i].Quantity == qVal){
            return arr[i];
        }
    }
    struct item notFound = {0};
    return notFound;
}

struct item findMaxPriceItem(struct item * arr, int count){
    int j;
    float max = 0;
    for(int i = 0; i < count; i++){
        if(max < arr[i].Price){
            max = arr[i].Price;
        }
    }
    for(j = 0; j < count; j++){
        if(max == arr[j].Price){
            break;
        }
    }
    return arr[j];
}
