import java.util.Scanner;

public class inputfromuser {
    public static void main(String[] args) {
        System.out.println("taking input from the user");
        Scanner sc=new Scanner(System.in);//system.in specifies that user is taking input from the keyboard
        System.out.println("enter the first number");
        int a=sc.nextInt();
        System.out.println("enter the second number");
        int b=sc.nextInt();
        int sum=a+b;
        System.out.println("The sum of this number is");
        System.out.println(sum);
        String str=sc.nextLine();
        System.out.println(str);

    }

}
