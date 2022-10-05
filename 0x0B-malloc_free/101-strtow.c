#include "main.h"
#include <stdlib.h>

int word_count(char *str);
char *first_word(char *str);

/**
 * strtow - set memory function
 * @str: pointer array
 * Return: NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
char **strArr;
int wordCount, counter, letter;

if (str == NULL || *str == '\0')
	return (NULL);
wordCount = word_count(str);
strArr = (char **)malloc(sizeof(char *) * (wordCount + 1));
if (!strArr)
	return (NULL);
for (counter = 0; counter <= wordCount;)
{
	strArr[counter] = (NULL);
	counter++;
}
	counter = 0;
	wordCount = 0;
	letter = 0;
while (str[counter] != '\0')
{
if (str[counter] != ' ' && !letter)
{
	strArr[wordCount] = first_word(str + wordCount);
if (!strArr[counter])
{
	wordCount--;
	while (wordCount >= 0)
	free(*(strArr + wordCount--));
free(strArr);
	return (NULL);
}
	wordCount++;
	letter = 1;
}
	else if (*(str + counter) == ' ' && letter)
	letter = 0;
counter++;
	if (!wordCount)
	return (NULL);
return (strArr);
if (str[wordCount] != ' ' && !letter)
{
	strArr[counter] = first_word(str + counter);
if (!strArr[counter])
{
	wordCount--;
while (wordCount >= 0)
	free(*(strArr + wordCount--));
	free(strArr);
	return (NULL);
}
	wordCount++;
	letter = 1;
}
else if (str[counter] == ' ' && letter)
	letter = 0;
	counter++;
}
if (!wordCount)
	return (NULL);
	return (strArr);
}

/**
 * word_count - Count the number of words
 * @str: character pointer
 * Return: the word count
 */

int word_count(char *str)
{
int counter = 0, wordCount, letter;

while (str[counter] != '\0')
{
if (str[counter] != ' ' && !letter)
{
	wordCount++;
	letter = 1;
}
else if (str[counter] == ' ' && letter)
{
	letter = 0;
}
	counter++;
}
return (wordCount);
}

/**
 * first_word - finds the first word
 * @str: char pointer
 * Return: pointer word
 */

char *first_word(char *str)
{
int counter;
char *word;

	counter = 0;
while (str[counter] != ' ' && str[counter] != '\0')
{
	counter++;
}
word = malloc(sizeof(char) * (counter + 1));
if (!word)
{
	return (NULL);
}
	word[counter] = '\0';
	counter--;
while (counter >= 0)
{
	word[counter] = str[counter];
	counter--;
}
return (word);
}
