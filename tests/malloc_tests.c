#include <stdlib.h>
#include <../tests/minunit.h>
#include <../tests/utils/utils.h>
#include <malloc/malloc.h>

char *test_string_dup()
{
    char *s = "Some string to duplicate.";
    char *dup = string_dup(s);
    mu_assert(check_strings(dup, s) == 0, "Your string_dup function did not correctly duplicate the given string.");

    free(dup);

    return NULL;
}

char *all_tests()
{
    mu_suite_start();

    mu_run_test(test_string_dup);
    
    return NULL;
}

RUN_TESTS(all_tests)