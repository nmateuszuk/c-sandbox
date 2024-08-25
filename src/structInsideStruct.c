// composing struct inside another struct

typedef struct point {
  int x;
  int y;
} Point;

// typedef struct circle {
//   int x;
//   int y;
//   double radius;
// } Circle;

typedef struct circle {
  Point center;
  double radius;
} Circle;

void makeCircle() {
  Point p1 = {1, 2};
  Circle c1;
  c1.radius = 3.3;
  c1.center = p1;

  // redefine point
  c1.center.y = 3;
}
