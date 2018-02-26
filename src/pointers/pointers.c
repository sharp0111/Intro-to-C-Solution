void swap(int* a, int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int string_length(char *s)
{
    int n = 0;
    
    while (*s != '\0') {
        n++;
        s++;
    }

    return n;
}