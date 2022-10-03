import java.util.Scanner;
public class palindrom {
    public static void main(String args[]){
        int temp,i=0,n,a;
        System.out.println("Enter a number!");
        Scanner input = new Scanner(System.in);
         n= input.nextInt();
         temp =n;
         while(n>0){
            a= n%10;
            i= (i*10)+a;
            n= n/10;
         }
         if(temp == i){
         System.out.println("It's palindrome!");
        }
        else{
            System.out.println("Not Palindrome!");
        }
    }
}
