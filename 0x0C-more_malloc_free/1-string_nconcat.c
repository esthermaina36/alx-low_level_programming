#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Concatenates two strings with a limit on the number of characters from the second string.
 * The returned pointer points to a newly allocated memory space containing the concatenated string.
 * The resulting string consists of s1, followed by the first n bytes of s2, and is null-terminated.
 *
 * @param s1 The first string to be included in the concatenation. If NULL, treated as an empty string.
 * @param s2 The second string to be included in the concatenation. If NULL, treated as an empty string.
 * @param n The maximum number of characters from s2 to be concatenated.
 * @return A pointer to the newly allocated concatenated string, or NULL if allocation fails.
 */
char *concatenateStrings(const char *s1, const char *s2, size_t n)
{
	if (s1 == NULL) s1 = "";
	if (s2 == NULL) s2 = "";

	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	if (n >= s2_len) n = s2_len;

	char *result = (char *)malloc(s1_len + n + 1);
	if (result == NULL)
	{
		return NULL; // Allocation failed
	}

	strcpy(result, s1);
	strncat(result, s2, n);
	return result;
}

int main()
{
	const char *str1 = "Hello, ";
	const char *str2 = "world!";
	size_t n = 3;

	char *concatenated = concatenateStrings(str1, str2, n);
	if (concatenated != NULL)
	{
		printf("Concatenated string: %s\n", concatenated);
		free(concatenated); // Remember to free the allocated memory
	}
	else
	{
		printf("Concatenation failed.\n");
	}
	return (0);
}
