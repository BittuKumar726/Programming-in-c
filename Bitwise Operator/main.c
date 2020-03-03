#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n, k;
    int i, j,maxAnd=0,maxOr=0,maxXor=0;
    scanf("%d %d", &n, &k);
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
          if (((i&j) > maxAnd) && ((i&j) < k)) {
                maxAnd = i&j;
            }
            if (((i|j) > maxOr) && ((i|j) < k)) {
                maxOr = i|j;
            }
            if (((i^j) > maxXor) && ((i^j) < k)) {
                maxXor = i^j;
        }
    }
    }
    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
    
    return 0;
}
