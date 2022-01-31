#include <stdio.h>

int main()
{
    char i1[20]= {"Espresso"}, i2[20]= {"Latte"}, i3[20]= {"Donuts"}, i4[20]= {"Cupcakes"}, i5[20]= {"Iced Coffee"},i6[20]= {"Hot Chocolate"};
    int price[6]= {250,105,100,80,230,320},itemnumber,ItemQuantity,total=0,tax=0,moneyPaid=0;

    printf("***************MENU***************\n");
    printf(" 1 %s \t\t %d\n",i1,price[0]);
    printf(" 2 %s \t\t %d\n",i2,price[1]);
    printf(" 3 %s \t\t %d\n",i3,price[2]);
    printf(" 4 %s \t\t %d\n",i4,price[3]);
    printf(" 5 %s \t\t %d\n",i5,price[4]);
    printf(" 6 %s \t %d\n",i6,price[5]);
    printf("**********************************\n\n");

    printf("Enter Item Number (or -1 to Exit): "),scanf("%d",&itemnumber);

    while (itemnumber>=1 && itemnumber <=6)
    {
        if (itemnumber==1)
        {
            printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
            total=total+ItemQuantity*price[itemnumber-1];
        }
        else if (itemnumber==2)
        {
            printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
            total=total+ItemQuantity*price[itemnumber-1];
        }
        else if (itemnumber==3)
        {
            printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
            total=total+ItemQuantity*price[itemnumber-1];
        }
        else if (itemnumber==4)
        {
            printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
            total=total+ItemQuantity*price[itemnumber-1];
        }
        else if (itemnumber==5)
        {
            printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
            total=total+ItemQuantity*price[itemnumber-1];
        }
        else if (itemnumber==6)
        {
            printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
            total=total+ItemQuantity*price[itemnumber-1];
        }
        else if (itemnumber==7)
        {
            printf("Enter Quantity: "),scanf("%d",&ItemQuantity);
            total=total+ItemQuantity*price[itemnumber-1];
        }
        printf("\nEnter Item Number (or -1 to Exit): ");
        scanf("%d",&itemnumber);
    }

    tax=total*10/100;
    total+=tax;
    printf("\nGST : %d\n",tax);
    printf("Total: %d\n",total);

ReEnter:

    printf("\nEnter Money Paid by customer: "),scanf("%d",&moneyPaid);
    printf("\n");
    if(moneyPaid==total)
    {
        printf("\n************Payment Complete************\n");
    }

    else if(moneyPaid<total)
    {
        printf("\nEntered Amount is Less than Total plz Re-Enter");
        goto ReEnter;
    }

    else if(moneyPaid>total)
    {
        int rupees[10] = {5000, 1000, 500, 100, 50, 20, 10, 5, 2, 1};
        int index, amount, quantity;

        printf("\n******************Change******************\n");

        amount=moneyPaid-total;
        for(index=0; index<10; index++)
        {
            quantity = amount / rupees[index];
            if (quantity>0)
            {
                printf("[%2d] \t", rupees[index] );
                printf("------> %2d Notes/Coins\n", quantity);
            }
            amount = amount % rupees[index];
        }
        printf("\n************Payment Completed************\n");
    }

    return 0;
}
