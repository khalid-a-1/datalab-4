//1 Due Monday February 17
/*
* dividePower2 - Compute x/(2^n), for 0 <= n <= 30
*  Round toward zero
*   Examples: dividePower2(15,1) = 7, dividePower2(-33, 4) = -2
*   Legal ops: ! ~ & ^ | + << >>
*   Max ops: 15
*/
int dividePower2(int x, int n) {
  return x>>n;
}

/*
* isPositive - return 1 if x > 0, return 0 otherwise
*   Example: isPositive(-1) = 0.
*   Legal ops: ! ~ & ^ | + << >>
*   Max ops: 8
*/
int isPositive(int x) {
  int a = !x;
  int b = !(x>>31);
  return  a^b;
}

/*
 * isLessOrEqual - if x <= y then return 1, else return 0
 *   Examples: isLessOrEqual(4,5) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 */
 int isLessOrEqual(int x, int y) {
   int p = (~x + 1);
   int z = y+p;
   int s = z>>31;
   int u = !(s&1)

   return u;
 }

 /*
  * conditional - same as x ? y : z
  *   Examples: conditional(2, 4, 5) = 4
  *   Legal ops: ! ~ & ^ | + << >>
  *   Max ops: 16
  */
  int conditional(int x, int y, int z) {
    int s = !x;
    int t = ~(!s)+1
    int f = ~t &z;
    int d = t&z;
    return f|d;
  }
