// #include<stdio.h>
// int main()
// {
//     char z;
//     scanf("%c",&z);
//     int v=(int)z;int c=0;int i=0;
//     for(i=0;i<=9;i++)
//     {
//         switch(v)
//         {
//             case i: printf("Given character is a no.");
//                 c++;
//                 break;
//             default:
//         }
//     }
//     for(i=97;i<=122;i++)
//     {
//         switch(v)
//         {
//             case i:printf("Given character is an alphabet");
//              c++;
//              break;
//             default:
//         }
//     }
//     for (i=65;i<=90;i++)
//     {
//         switch(v)
//         {
//             case i: printf("Given character is an alphabet");
//                 c++;
//                 break;
//             default:
//         }
//     }
//     switch(c)
//     {
//         case 0: printf("Given character is special character");
//         break;
//         default: break;
//     }
// }
#include<stdio.h>

int main()
{
    char z;
    scanf("%c", &z);
    int v = (int)z;
    int c = 0;
    int i = 0;

    for (i = 0; i <= 9; i++)
    {
        switch (v)
        {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                printf("Given character is a no.");
                c++;
                break;
            default:
                break;
        }
    }

    for (i = 97; i <= 122; i++)
    {
        switch (v)
        {
            case i:
                printf("Given character is an alphabet");
                c++;
                break;
            default:
                break;
        }
    }

    for (i = 65; i <= 90; i++)
    {
        switch (v)
        {
            case i:
                printf("Given character is an alphabet");
                c++;
                break;
            default:
                break;
        }
    }

    switch (c)
    {
        case 0:
            printf("Given character is a special character");
            break;
        default:
            break;
    }

    return 0;
}
