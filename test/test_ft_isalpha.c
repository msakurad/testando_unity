#include "libft.h"
#include "unity.h"

void	setUp(void)
{
}

void	tearDown(void)
{
}

void	test_ft_isalpha_inputlowercaseletter_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isalpha('a'));
}

void	test_ft_isalpha_inputuppercaseletter_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isalpha('D'));
}

void	test_ft_isalpha_inputspecialcharac_false(void)
{
	TEST_ASSERT_EQUAL_INT(0, ft_isalpha('!'));
}

int	main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_isalpha_inputlowercaseletter_true);
	RUN_TEST(test_ft_isalpha_inputuppercaseletter_true);
	RUN_TEST(test_ft_isalpha_inputspecialcharac_false);
	return (UNITY_END());
}
