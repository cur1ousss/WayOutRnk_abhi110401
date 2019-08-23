import java.util.Scanner;


public class testInputintbeforeString{

    public static void main(String args[]){
        int num=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a number");
/// therefore correct way is nextLine() intertfernce and nextLine() string input
        num=sc.nextInt();
        String teststring;
        sc.nextLine();
        teststring=sc.nextLine();
        System.out.println("number is "+num);
        System.out.println("Inputted string is >>> "+teststring);
    }
}
/** 
 * $$$$$$$ Without intefernce of sc.next() ie empty input
 * case 1--
 * 
 *  >>    num=sc.nextInt();
        teststring=sc.next();

 // works/compiles correctly , takes input as well BUT
  // string with space fucked up input not prints whole
    string as takes only uptil firstSpace faced
 * ********************************************************************

 case 2--

    >> num=sc.nextInt();
        teststring=sc.nextLine();

//does not taken input of string diereclty skip 
  and prints the inpuuted number and the following steps

 * 
 * 
 * 
********************************************************************
$$$$$$$ Inteference of sc.next() || sc.nextLine() empty input


 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * 
 * ********************************************************************

STRANGE CASE 

* OUTPUT()*()**)(*()*()*)>>>>
 * enter a number
109
abcdefgfhasidh string wigt sapce
number is 109
Inputted string is >>> string

// strangely skips the first part of the stringInputted

CODE_________
int num=0;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a number");

        num=sc.nextInt();
        String teststring;

           sc.next();
        teststring=sc.next();
      System.out.println("number is "+num);
        System.out.println("Inputted string is >>> "+teststring);
    }



also Starnge case
    sc.next();
    somestring=sc.nextLine();







*/
