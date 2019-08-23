import java.io.*;
//import java.math.*;
import java.text.*;
import java.util.*;
//import java.util.regex.*;

// stuck due to not able to print 00 int as 00


// using java for now since strings involved

public class timeConversionProblem {
  private static final Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
    
            String s = scan.nextLine();
                
                int flag=100;
                
                if(s.endsWith("AM")){
                   flag=0;
                }
                else if(s.endsWith("PM")){
                flag=1;
                }

          //  String result = timeConversion(s);

           // bw.write(result);

    
            StringTokenizer st=new StringTokenizer(s,":");
    int index=3;
        
                String arr[]=new String[3];

                for(int i=0;i<3;i++){
                arr[i]=st.nextToken();
                }
                
                String endSec=arr[2];
                
                StringBuffer tmp=new StringBuffer("randomString");
                String finalendSec;
    
                if(flag==1){
                StringTokenizer stSec=new StringTokenizer(endSec,"PM");        
               
                String tmpholdstring=stSec.nextToken();
                tmp=new StringBuffer(tmpholdstring);
                }
                else if(flag==0){
                StringTokenizer stSec=new StringTokenizer(endSec,"AM");        
               
                String tmpholdstring=stSec.nextToken();
                tmp=new StringBuffer(tmpholdstring);
    
                } 
                
                finalendSec=tmp.toString();
                int finalFirstH=0;
                int Hh=Integer.parseInt(arr[0]);
                
                     
                if(Hh<12 && flag==1){
                    finalFirstH=Hh+12;
                }                
                
                else if(Hh<12 && flag==0){
                    finalFirstH=Hh;
                }
                else if(Hh==12){
                        
                   finalFirstH=00;
                }
                
             /*
                   System.out.println("prting array");
                for(int i=0;i<3;i++){
                System.out.println(arr[i]);
                }
                
                
                */
                for(int i=0;i<3;i++){
                    if(i==1){
                    
                    System.out.print(arr[i]);
                    }
                    else if(i==0){
                            System.out.print(finalFirstH+":");
                    
                    }
                    else if(i==2){
                        System.out.print(":"+finalendSec);
                    }
                            
                }
            //bw.newLine();

            //bw.close();
       }
}
