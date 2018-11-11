package pkg1a;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int m=s.nextInt();
        int a=s.nextInt();
        long w=0,f=0;
     
        if(m>a&&n>a){
            w=m/a;
            f=n/a;
            if(m%a!=0){
                w++;
            }
            if(n%a!=0){
                f++;
            }
        }
        else if(m<=a&&n<=a){
            w=1;
            f=1;
        }
        else if(m>a&&n<=a){
            w=m/a;
            if(m%a!=0){
                w++;
            }
             f=1;
        }
        else if(m<=a&&n>a){
            f=n/a;
            if(n%a!=0){
                f++;
            }
            w=1;
        }
        else if(m==n&a==1){
            w=m;
            f=n;
        }
      
        System.out.println(w*f);
    }
}
