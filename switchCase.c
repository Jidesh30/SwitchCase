#include<stdio.h>
int main()

{
    printf("Enter a random number from 1 to 10\n");
    int foodItem=0;
    scanf("%d",&foodItem);

    switch(foodItem)
    {
        case 1:
            printf("Food item - Ghee Dosa\nPrice - Rs 60");
            break;
        case 2:
            printf("Food item - Masala Dosa\nPrice - Rs 80");
            break;
        case 3:
            printf("Food item - Idli\nPrice - Rs 30");
            break;
        case 4:
            printf("Food item - Pongal\nPrice - Rs 50");
            break;
        case 5:
            printf("Food item - Vada Sambar\nPrice - Rs 20");
            break;
        case 6:
            printf("Food item - Poori Masala\nPrice - Rs 50");
            break;
        case 7:
            printf("Food item - Panner Roast\nPrice - Rs 100");
            break;
        case 8:
            printf("Food item - Onion Roast\nPrice - Rs 80");
            break;
        case 9:
            printf("Food item - Filter Coffee\nPrice - Rs 20");
            break;
        case 10:
            printf("Food item - Tea\nPrice - Rs 20");
            break;
        default:
            printf("Use the default case");
    }
    return 0;
}
