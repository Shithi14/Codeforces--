import java.util.Scanner;
public class A_Tram
{

    public static void main(String args[]){

        int t;
       Scanner sc=new Scanner (System.in);

       t= sc.nextInt();
       int count=0;
       int maxcapacity=0;

       while(t-->0){
        int a,b;
        a=sc.nextInt();
        b=sc.nextInt();
        count=count-a+b;
        maxcapacity=Math.max(count,maxcapacity);

       }
       System.out.println(maxcapacity);
    }
}