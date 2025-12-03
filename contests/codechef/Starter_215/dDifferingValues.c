// https://www.codechef.com/problems/DIFFVAL

// https://www.codechef.com/viewsolution/1214427025

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void check(){
    long long n, k;
    scanf("%lld %lld", &n, &k);
    char *s = (char *)malloc(n + 5);
    do{
        scanf("%s", s);
    }while((long long)strlen(s)!=n);
    long long z = 0;
    for(long long i=0;i<n;i++)
        if(s[i]=='0') z++;

    long long o=n-z;

    long long *a = (long long *)calloc(k,sizeof(long long));
    for(long long i=0;i<n;i++)
        a[i%k]++;

    long long need = 0;
    for(long long i=0;i<k;i++)
        need +=(a[i]+1)/2;

    long long mx=(z>o?z:o);
    printf(mx <= need ? "Yes\n" : "No\n");
    free(a);
    free(s);
}


int main() {
	// your code goes here
    int t;
    scanf("%d", &t);
    while (t--) check();
    return 0;
}
