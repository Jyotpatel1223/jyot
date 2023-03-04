
//Monday to Sunday using switch case//


#include<stdio.h>

 
int main()
{
	int week;
	printf("enter week numbers(1-7):");
	scanf("%d",&week);
	
	switch(week)
	{
		case 1:
			printf("monday");
			break;
			case 2:
				printf("tuesday");
				break;
				case 3:
					printf("wednesday");
					break;
					case 4:
						printf("thursday");
						break;
						case 5:
							printf("friday");
							break;
							case 6:
								printf("saturday");
								break;
								case 7:
									printf("sunday");
									break;
									default:
										printf("invalid input!!");
									
						
				
	}
	return 0;
}


//Vowel or Consonant using switch case//


#include <stdio.h>
int main()

{
    char ch;

    /* Input an alphabet from user */
    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    /* Switch value of ch */
    switch(ch)
    {
        case 'a': 
            printf("Vowel");
            break;
        case 'e': 
            printf("Vowel");
            break;
        case 'i': 
            printf("Vowel");
            break;
        case 'o': 
            printf("Vowel");
            break;
        case 'u': 
            printf("Vowel");
            break;
        case 'A': 
            printf("Vowel");
            break;
        case 'E': 
            printf("Vowel");
            break;
        case 'I': 
            printf("Vowel");
            break;
        case 'O': 
            printf("Vowel");
            break;
        case 'U': 
            printf("Vowel");
            break;
        default: 
            printf("Consonant");
    }

    return 0;
}



