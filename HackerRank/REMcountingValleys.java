import java.nio.file.Path;
import java.util.Scanner;
///package Volatile;


public class test{
	public static void main(String args[]) {
		
		Scanner sc=new Scanner(System.in);
		int uselessSteps=sc.nextInt();
	sc.nextLine();
    
        String path=sc.nextLine();

        System.out.println("giben string is "+path);
        int flag=1;
		int countvalley=1;

        int firstindex=path.indexOf("DD");
        System.out.println("first index is "+firstindex);
        int lastindex=path.lastIndexOf("DD");
         System.out.println("last index is "+lastindex);
		int tmpindex=firstindex;
		
	
		if(firstindex==lastindex) {
			System.out.println("only one occ "+countvalley);
		}
		
		else if(firstindex!=lastindex){
    /*        int count=0;
            int nextocc=0;
            while(prevocc!=lastocc){
                nextocc=str.indexOf("java",(prevocc+1));
                System.out.println("next occurence "+nextocc);
                prevocc=nextocc;
                count++;
            }
            final int finalcount=count+1;// since lastindex alreday included so add firstindex count only
            System.out.println("total count is "+finalcount);
  */          
            /////////////////////
            System.out.println("entedred multiple count situatiomn");
			while(tmpindex!=lastindex) {
				System.out.println("entered while loop");
				tmpindex=path.indexOf("DD",tmpindex);
				
				countvalley++;
			}
			System.out.println("total vallyes "+countvalley);
			
		}
		
		if(firstindex==0) 
		{
			System.out.println("doesnt exist");
		}
			
		
	}
}
