import java.util.Scanner;
public class A_OddOneOut{

    public static void main(String args[]){


        int t;
        Scanner sc =new Scanner (System.in);
        t=sc.nextInt();
        while(t-->0){

            int a,b,c;
            a=sc.nextInt();
            b=sc.nextInt();
            c=sc.nextInt();
            if (a==b){
                System.out.println(c);

            }
            else if (b==c){
                System.out.println(a);

            }
            else{
                System.out.println(b);
            }
            }
        
        
        }
    }
