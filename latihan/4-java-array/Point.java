class Point {
    /* Atribut */
    private int x, y; // absis, ordinat

    /* Metode */
    public Point() { x = 0; y = 0; }
    public Point(int xNew, int yNew) { x = xNew; y = yNew; }
    public int getX() { return x; }
    public int getY() { return y; }
    public void setX(int xNew) { x = xNew; }
    void setY(int yNew) { y = yNew; }
    @Override
    public String toString() { return String.format("(%d,%d)", x, y); }
    public static void main(String args[]) {
        Point arrPoint[] = new Point[10];

        for (int i = 0; i < 10; i++) {
            arrPoint[i] = new Point();
        }

        for (Point p: arrPoint) {
            System.out.println(p);
        }
    }
}