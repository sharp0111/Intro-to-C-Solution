int check_arrays(int input[], int expected[], int n, int m)
{
    if (n != m) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (input[i] != expected[i]) {
            return 0;
        }
    }

    return 1;
}