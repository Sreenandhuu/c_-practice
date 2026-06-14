#include <stdio.h>

int main() {
    const int N = 8;              
    const int TOTAL_ROWS = 2 * N - 1;
    
    for (int i = 0; i < TOTAL_ROWS; i++) {
      
        int L = (i < N) ? i + 1 : 2 * N - i - 1;
        
        int start = L * (L - 1) / 2 + 1;
        
        
        for (int j = 0; j < L; j++) {
            printf("%d", start + j);
            if (j < L - 1) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}