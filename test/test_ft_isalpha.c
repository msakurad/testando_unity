#include "libft.h"
#include "unity.h"

void	setUp(void)
{
}

void	tearDown(void)
{
}

void test_ft_isalpha_inputletter_true(void)
{
	TEST_ASSERT_EQUAL(true, ft_isalpha('a'));
}

int	main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_isalpha_inputletter_true);
	return (UNITY_END());
}
