#include <stdio.h>
#include <string.h>

struct Address 
{
    char firstName[100];
    char locality[50];
    char village[50];
    char city[50];
    char district[50];
    int pincode;
    long long mobileNumber;
}devotee[500];

int main()
{

    int numDevotees;
    for ( numDevotees = 0; numDevotees<3; numDevotees++)
    {
        fflush(stdin);
        printf("Devotee #%d:\n", numDevotees + 1);

        printf("First Name: ");
        scanf("%[^\n]s",devotee[numDevotees].firstName);

        printf("Flat No./Bldg.Name/Locality:\n");
        scanf("%[^\n]s",devotee[numDevotees].locality);

        printf("City: ");
        scanf("%[^\n]s",devotee[numDevotees].city);

        printf("District: ");
        scanf("%[^\n]s",devotee[numDevotees].district);

        printf("Pincode: ");
        scanf("%d", &devotee[numDevotees].pincode);

        printf("Mobile Number: ");
        scanf("%lld", &devotee[numDevotees].mobileNumber);
    }

    printf("\nFormatted Addresses:\n");

    for (int i = 0; i < numDevotees; i++) 
        {
            printf("%s\n", devotee[i].firstName);
            printf("%s\n", devotee[i].locality);
            printf("%s, ", devotee[i].city);
            printf("%s, ", devotee[i].district);
            printf("%d\n", devotee[i].pincode);
            printf("Mobile: %lld\n", devotee[i].mobileNumber);
            printf("\n");
        }

    return 0;
}
