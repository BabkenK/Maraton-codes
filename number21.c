#include <stdio.h>

int main (){
	char letter;

	printf("Enter the letter: ");
	scanf("%c", &letter);

	if((letter >= 'A'&& letter <='Z' || letter >='a' && letter <= 'z') &&
	(letter =='A'||letter =='E'|| letter =='I'|| letter =='O'|| letter =='U' || 
	  letter=='a'|| letter=='e'|| letter=='i'|| letter=='o'|| letter=='u')){
		printf("The letter is a vowel. \n");
	}else if (letter >= 'A' && letter <= 'Z' || letter >= 'a' && letter <='z') {
		printf("The letter is a consonant. \n");
	}else{
		printf("wrong inpute. \n");
	}
	return 0;
}