#include "pch.h"
#include <stdio.h>
#include "string.h"
#include "ctype.h"

void printLongestWord();

int findWord(char word[]);

int findWordWithMostVowels();

int isVowel(char c);

// generated using http://listofrandomnames.com/

char words[][20] = { "alert","restipulated","exoskeletal","titicaca","countershaft","ligamenta","predriller","amur","mannite","memphis" };
int nwords = 10;
char longestword[100];


void main()
{
	char word[20];
	int i = 0;

	printLongestWord();

	i = findWordWithMostVowels();
	printf("Word with most vowels is: %s \n", words[i]);

	puts("enter word");
	gets_s(word);

	if (findWord(word))
	{
		printf("%s is in our list of words\n", word);
	}
	else
	{
		printf("%s is not in our list of words\n", word);
	}

}

void printLongestWord()
{
	int i = 0;
	int len = 0;
	for (i = 0; i <= 10; i++) {

		if (strlen(words[i]) > len) {
			len = strlen(words[i]);
			strcpy_s(longestword, words[i]);
		}
	}

	printf("longest word is: %s \n with %d characters\n", longestword, len);
}

int findWord(char word[])
{
	bool yesOrNO = false;
	for (int i = 0; i < 10; i++) {
		if (!strcmp(words[i], word))
			yesOrNO = true;
	}

	return yesOrNO;
}




int findWordWithMostVowels()
{
	int maxVow = 0;
	int maxVowwordId = 0;
	for (int i = 0; i < nwords; i++)
	{
		int vow = 0;
		for (int j = 0; j < strlen(words[i]); j++)
		{
			if (isVowel(words[i][j]))
				vow++;
		}
		if (vow > maxVow)
		{
			maxVow = vow;
			maxVowwordId = i;
		}
	}
	return maxVowwordId;
}

int isVowel(char c)
{
	c = toupper(c);
	char vow[5] = { 'A', 'E', 'I', 'O', 'U' };
	for (int i = 0; i < 5; i++)
	{
		if (c == vow[i])
			return 1;
	}
	return 0;
}
