import java.util.Scanner;
public class A_Triple {
    public static void main(String args[]){

        int t;
        Scanner sc=new Scanner (System.in);
        t=sc.nextInt();
        while(t-->0){
            int n;
            
            n=sc.nextInt();
            int arr[]=new int [n];
            int fre[]=new int[n+1];
            boolean found=false;
            for (int i=0;i<n;i++){
                arr[i]=sc.nextInt();
                fre[arr[i]]++;
                

            }
            for (int i=1;i<=n;i++){

            
             if(fre[i]>=3){
                  System.out.println(i);
                  found=true;
                  break;
            }
            }
           if (!found){
            System.out.println(-1);
        }
    
            
        

        }
        
        
    }
    }
    

