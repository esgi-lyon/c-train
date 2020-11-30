#ifndef PI_INCLUDED
#define PI_INCLUDED

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
  printf("\n%f\n", sum);

  return sum;
}

int pi()
{
  int i = 2;
  double y;
  y = userSin(i);
  printf("\nYour value is %f \n", y);

  return 0;
}

#endif
