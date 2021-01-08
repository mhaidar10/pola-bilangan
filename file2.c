// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int i, j = 0, N, tambah = 1, k = 0;
//     printf("Masukkan nilai N=");
//     scanf("%d", &N);
//     for (i = N; i >= 4; i--)
//     {
//         for (j = 1; j <= i - 3; j = j + 1)
//         {
//             printf("%d ", tambah);
//             tambah = tambah + 2;
//         }
//         printf("\n");
//     }
//     for (i = N; i > N - 3; i--)
//     {
//         for (k = i - 4; k <= N - 3; k++)
//         {
//             printf("%d ", tambah);
//             tambah = tambah + 2;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int i, j = 1, N, tambah = 1, k = 0;
//     printf("Masukkan nilai N=");
//     scanf("%d", &N);
//     i=N;
//     while (i>=4)
//     {
//         j=1;
//         while (j<=i-3)
//         {
            
//              printf("%d ", tambah);
//             tambah = tambah + 2;
//            j=j+1;
//         }
        
//         i=i-1;
//          printf("\n");
//     }
//     i=N;
//     while (i>N-3)
//     {   k = i - 4;
//         while (k<=N-3)
//         {
//             printf("%d ", tambah);
//             tambah = tambah + 2;
//             k=k+1;
//         }
        
//          printf("\n");
//         i=i-1;
//     }
//     return 0;
// }
