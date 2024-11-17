#include <stdio.h>
#include <string.h>


int compareNames(char name1[], char name2[]) {
    return strcmp(name1, name2);
}


void copyContactDetails(char src[], char dest[]) {
    strcpy(dest, src);
}


int nameLength(char name[]) {
    return strlen(name);
}


void concatenateContactInfo(char name[], char email[], char phone[], char result[]) {
    strcpy(result, name);
    strcat(result, " | ");
    strcat(result, email);
    strcat(result, " | ");
    strcat(result, phone);
}

int main() {
    char name1[100], name2[100], email[100], phone[20];
    char copiedName[100], contactDetails[300];
    
    
    printf("Enter the first contact name: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0';  

    printf("Enter the second contact name: ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0';  

    printf("Enter the contact's email: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';  

    printf("Enter the contact's phone number: ");
    fgets(phone, sizeof(phone), stdin);
    phone[strcspn(phone, "\n")] = '\0';  

    
    if (compareNames(name1, name2) == 0) {
        printf("\nThe contact names are the same.\n");
    } else {
        printf("\nThe contact names are different.\n");
    }

   
    copyContactDetails(name1, copiedName);
    printf("\nCopied contact name: %s\n", copiedName);

  
    printf("\nLength of the first contact's name: %d\n", nameLength(name1));
    printf("Length of the second contact's name: %d\n", nameLength(name2));

    concatenateContactInfo(name1, email, phone, contactDetails);
    printf("\nFull contact details: %s\n", contactDetails);

    return 0;
}
