#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{

    int i, j = 0, k = 0, count = 0;
    char str[100], str1[10][20], word[20];
    printf("Enter the String : ");
    gets(str);

    /* Converting the string into 2D Array */

    for (i=0; str[i]!='\0'; i++)
    {
	if (str[i]==' ')
	{
	    str1[k][j] = '\0';
	    k++;
	    j=0;
	}
	else
	{
	    str1[k][j]=str[i];
	    j++;
	}
    }
    str1[k][j] = '\0';
    printf("Enter a word to be delete : ");
    scanf("%s", word);

    /* Comparing the string with the given word */

    for (i=0; i<k+1; i++)
    {
	if (strcmp(str1[i], word) == 0)
	{
	    for (j=i; j<k+1; j++)
			{
				strcpy(str1[j], str1[j + 1]);
				k--;
			}
	}

    }
    printf("The new String after deleting the word : \n");
    for (i=0; i<k+1; i++)
    {
	printf("%s ", str1[i]);
    }
    getch();
}
