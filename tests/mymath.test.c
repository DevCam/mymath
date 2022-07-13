
#include <string.h>
#include <criterion/criterion.h>
#include <criterion/new/assert.h>

#include "../lib/mymath.h"

Test(mymath, addition)
{
  cr_assert(eq(int, add(2,2), 10));
}

Test(mymath, substraction)
{
  cr_assert(eq(int, substract(10, 5), 5));
  cr_assert(eq(int, substract(-1, -2), 1));
}
