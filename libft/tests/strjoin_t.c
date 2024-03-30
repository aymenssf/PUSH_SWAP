#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"
int	main(int argc, char **argv)
{
	char	*ret_ft_strjoin;
	(void)	argc;
	(void)	argv;

/******************************************************************************/
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "       TESTING YOUR STRJOIN FUCNTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
/******************************************************************************/
// TEST 1
	printf("%s%s%s", GREEN, "----------------- TEST 1 --------------------\n", DEFAULT);
	ret_ft_strjoin = ft_strjoin("Hello", " world!");
	if (!strcmp("Hello world!", ret_ft_strjoin))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_ft_strjoin);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 2
	printf("%s%s%s", GREEN, "----------------- TEST 2 --------------------\n", DEFAULT);
	ret_ft_strjoin = ft_strjoin("", "world!");
	if (!strcmp("world!", ret_ft_strjoin))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_ft_strjoin);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 3
	printf("%s%s%s", GREEN, "----------------- TEST 3 --------------------\n", DEFAULT);
	ret_ft_strjoin = ft_strjoin("Hello", " ");
	if (!strcmp("Hello ", ret_ft_strjoin))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s","RED", "[KO]\n", DEFAULT);
	free(ret_ft_strjoin);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 4
	printf("%s%s%s", GREEN, "----------------- TEST 4 --------------------\n", DEFAULT);
	ret_ft_strjoin = ft_strjoin("", "");
	if (!strcmp("", ret_ft_strjoin))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[OK]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 5
	printf("%s%s%s", GREEN, "----------------- TEST 5 --------------------\n", DEFAULT);
	ret_ft_strjoin = ft_strjoin("", " ");
	if (!strcmp(" ", ret_ft_strjoin))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[OK]\n", DEFAULT);
	free(ret_ft_strjoin);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------- FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}