import java.util.Scanner;
public class theaterSquare {
    public static void main(String[] args) {
        Scanner x = new Scanner(System.in);
        double l=x.nextInt();
        double b=x.nextInt();
        double s=x.nextInt();
        System.out.println((long)(Math.ceil(l/s)*Math.ceil(b/s)));
        x.close();
    }
}
