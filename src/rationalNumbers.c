typedef struct rational {
  int numerator;
  int denominator;
} Rational;

void rationalIncrement(Rational *rPtr) {
  (*rPtr).numerator = (*rPtr).numerator + (*rPtr).denominator;
}

void rationalDecrement(Rational *rPtr) {
  (*rPtr).numerator = (*rPtr).numerator - (*rPtr).denominator;
}

Rational rationalAddition(Rational r1, Rational r2) {
  Rational result;
  result.denominator = r1.denominator * r2.denominator;
  result.numerator =
      r1.numerator * r2.denominator + r2.numerator * r1.denominator;
  return result;
}

Rational rationalSubstraction(Rational r1, Rational r2) {
  Rational result;
  result.denominator = r1.denominator * r2.denominator;
  result.numerator =
      r1.numerator * r2.denominator - r2.numerator * r1.denominator;
  return result;
}

Rational rationalMultiplication(Rational r1, Rational r2) {
  Rational result;
  result.denominator = r1.denominator * r2.denominator;
  result.numerator = r1.numerator * r2.numerator;
  return result;
}

Rational rationalDivision(Rational r1, Rational r2) {
  Rational result;
  result.denominator = r1.denominator * r2.numerator;
  result.numerator = r1.numerator * r2.denominator;
  return result;
}

// in order to compare use common ground-> common denominator
int smallerRational(Rational r1, Rational r2) {
  r1.denominator = r1.denominator * r2.denominator;
  r2.denominator = r1.denominator * r2.denominator;
  r1.numerator = r1.numerator * r2.denominator;
  r2.numerator = r2.numerator * r1.denominator;
  if (r1.numerator < r2.numerator) {
    return 1;
  } else
    return 0;
}

// in order to compare use common ground-> common denominator
int largerRational(Rational r1, Rational r2) {
  r1.denominator = r1.denominator * r2.denominator;
  r2.denominator = r1.denominator * r2.denominator;
  r1.numerator = r1.numerator * r2.denominator;
  r2.numerator = r2.numerator * r1.denominator;
  if (r1.numerator > r2.numerator) {
    return 1;
  } else
    return 0;
}

int isEqual(Rational r1, Rational r2) {
  r1.denominator = r1.denominator * r2.denominator;
  r2.denominator = r1.denominator * r2.denominator;
  r1.numerator = r1.numerator * r2.denominator;
  r2.numerator = r2.numerator * r1.denominator;
  if (r1.numerator == r2.numerator) {
    return 1;
  } else
    return 0;
}

int isNotEqual(Rational r1, Rational r2) {
  r1.denominator = r1.denominator * r2.denominator;
  r2.denominator = r1.denominator * r2.denominator;
  r1.numerator = r1.numerator * r2.denominator;
  r2.numerator = r2.numerator * r1.denominator;
  if (r1.numerator != r2.numerator) {
    return 1;
  } else
    return 0;
}