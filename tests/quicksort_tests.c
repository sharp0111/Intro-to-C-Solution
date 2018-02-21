#include <../tests/minunit.h>
#include <quicksort/quicksort.h>

char *test_swap()
{
    int ints_short[] = { 4, 9 };
    swap(ints_short, 0, 1);
    mu_assert((ints_short[0] == 9 && ints_short[1] == 4), "Your swap function did not swap values correctly");

    int ints_long[] = { 1, 9, 2, 8, 3, 7, 6, 4, 5 };
    swap(ints_long, 0, 8);
    swap(ints_long, 3, 4);
    mu_assert((ints_long[0] == 5 && ints_long[8] == 1), "Your swap function did not swap values correctly");
    mu_assert((ints_long[3] == 3 && ints_long[4] == 8), "Your swap function did not swap values correctly");

    mu_assert((ints_long[5] == 7 && ints_long[6] == 6), "Your swap function swapped values it shouldn't have");

    return NULL;
}

char *test_quicksort()
{

}

char *all_tests()
{
    mu_suite_start();

    mu_run_test(test_swap);
    mu_run_test(test_quicksort);

    return NULL;
}

RUN_TESTS(all_tests);