struct screenCoordinates {
  int x;
  int y;
}

struct screenArea {
  struct screenCoordinates pt1;
  struct screenCoordinates pt2;
}

struct screenApplication {
  struct screenArea requiredArea;
  struct screenArea safeArea;
}
