package pkg71a;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        
        int n=s.nextInt();
        String a[]=new String[100];
        String b[]=new String[100];
        for(int i=0;i<=n;i++){
            a[i]=s.nextLine();
          
           if(a[i].length()>10){
               String r=Integer.toString(a[i].length()-2)  ;
                b[i]=a[i].substring(0,1)+r+a[i].substring(a[i].length()-1, a[i].length());
            }
           else{
               b[i]=a[i];
           }
        }
        for(int i=0;i<=n;i++){
            System.out.println(b[i]);
        }
        
        
}
    
}
