#include <stdio.h>

long long int countStrings(long long int n)
{
    
    long long int a[n], b[n];
    a[0] = b[0] = 1;
    long long int i;
    for ( i = 1; i < n; i++)
    {
        a[i] = a[i-1] + b[i-1];
        b[i] = a[i-1];
    }
    return a[n-1] + b[n-1];
}

int main() {
    
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
       
        printf("%lld\n",countStrings(n)); 
       
    }
    
	return 0;
}