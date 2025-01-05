import java.util.Scanner;
public class A_Goal_Of_victory{
    public static void main(String args[]){

        int t;
        Scanner sc=new Scanner((System.in));
        t=sc.nextInt();
        
        while(t-->0){
            int n=sc.nextInt();
            int arr[]=new int[n];
            int sum=0;
            for (int i=0;i<n-1;i++){
                arr[i]=sc.nextInt();
                sum+=arr[i];
            }
            System.out.println(-sum);
        }
    }
}