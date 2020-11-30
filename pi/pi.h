#ifndef PI_INCLUDED
#define PI_INCLUDED

int sigma(int n)
{
    int somme = 0;
    int i=0;
    // printf("%d", i);
    for (i = 1; i < n; i++)
    {
        somme += i;
        // printf(" + %d", i);
    }
    return somme;
}


inline double MoinsUnPuissanceN(const long unsigned int n)
{
  return (n & 1) ? -1 : 1;
}

int factorial(int x)
{
  int i, sum = 1;
  for (i = 1; i <= x; i++)
  {
    sum = sum * i;
  }
  return sum;
}

int power(int x, int y)
{
  unsigned long long int i, sum = 1;
  for (i = 1; (int) i <= y; i++)
  {
    sum = sum * x;
  }

  return sum;
}

double userSin(int z)
{
  int i = 1;
  double value, val2, val3, sum = 0;

  for (i = 1; i < 33; i += 2)
  {
    val2 = power(z, i);
    val3 = factorial(i);
    value = val2 / val3;

    if (((i - 1) / 2) % 2 != 0) {
      sum = sum - value; // ((power(x,i))/factorial(i));
    } else {
      sum = sum + value;
    }
  }

  return sum;
}

double newSin(v)
{
  double y;
  y = userSin(v);
  // printf("\nYour value is %f \n", y);

  return y;
}

#endif
