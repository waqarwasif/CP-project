// #include <stdio.h>
// int main()
// {
//     int i, j;
//     int rows = 10, cols = 10;

//     for (i = 1; i <= rows; i++)
//     { 
//         for (j = 1; j <= cols; j++)
//         { 
//             if (i == 1 || i == rows || j == 1 || j == cols)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int rows = 9, column = 7;
    int i,j;

    for(i=1;i<=rows;i++){
        for(j=1;j<=column;j++){
            if(( i>2&&i<=7&&j==1)||   
            (i > 2 && i <= 7 && j==7)||
            (i ==1 && j>=3 && j<6)||
            (i ==9 && j>=3 && j<6)||
            // (i==2 &&j==2)||(i==2 && j==6)||(j==6 && i==8)||(j==2&& i==8))
            ((i == 2 || i == 8) && (j == 2 || j == 6)))
            {
                printf("*");}
            else{printf(" ");}
        }
    printf("\n");}

return 0;

}
