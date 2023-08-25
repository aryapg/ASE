#include <stdio.h>
int min(int coins[], int n, int amount) 
{
    if(amount==0)
    {
        return 0;
    }
    int result=amount+1;
    for (int i=0;i<n;i++) 
    {
        if (coins[i]<=amount) 
        {
            int subResult=1+min(coins, n, amount-coins[i]);
            if (subResult<result) 
            {
                result=subResult;
            }
        }
    }
    return result;
}
int main() 
{
    int k, coins[100], totalAmount;
    scanf("%d", &k);
    for (int i=0;i<k;i++) 
    {
        scanf("%d",&coins[i]);
    }
    scanf("%d",&totalAmount);
    int result=min(coins, k, totalAmount);
    printf("%d\n", result);
}