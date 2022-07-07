
#include <string.h>
#include <criterion/criterion.h>
#include "../lib/mymath.h"

Test(mymath, addition)
{
  cr_expect(add(2, 2) == 4, "Expected 2+2 to equal 4");
}

Test(mymath, substraction)
{
  cr_expect(substract(2, 2) == 0, "Expected 2-2 to equal 0");
}