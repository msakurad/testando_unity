#include "tests.h"

void	setUp(void)
{
}

void	tearDown(void)
{
}

void	test_ft_isdigit_inputnumber_true(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isdigit('3'));
}

void	test_ft_isdigit_inputothercarac_false(void)
{
	TEST_ASSERT_NOT_EQUAL_INT(0, ft_isdigit('D'));
}

int	main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_isdigit_inputnumber_true);
	RUN_TEST(test_ft_isdigit_inputothercarac_false);
	return (UNITY_END());
}
