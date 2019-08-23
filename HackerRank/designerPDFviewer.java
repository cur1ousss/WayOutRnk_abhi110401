import java.util.Scanner;

//97 se 122 az

public class designerPDFviewer{

public static void main(String args[]){
Scanner sc=new Scanner(System.in);
int arrWordHeights[]=new int[26];
for(int i=0;i<26;i++){
arrWordHeights[i]=sc.nextInt();
}

int copyArrWordsheight[]=new int[27];   // to set intial zero so can match later contexct
copyArrWordsheight[0]=0;

// now considerate indxing start fromm  1
for(int i=1;i<27;i++){
    copyArrWordsheight[i]=arrWordHeights[i-1];
}
sc.nextLine();
String word=sc.nextLine();

byte bytearray[]=word.getBytes();
int lenBytearray=0;
for(byte tmp:bytearray){
lenBytearray++;
}

int lenofAreaMultiple[]=new int[lenBytearray];

for(int i=0;i<lenBytearray;i++){
    lenofAreaMultiple[i]=copyArrWordsheight[bytearray[i]-96];
}

int swap=0;
for(int i=0;i<lenBytearray;i++){
    for(int j=0;j<lenBytearray-1;j++){
        if(lenofAreaMultiple[j]<lenofAreaMultiple[j+1]){
            swap=lenofAreaMultiple[j];
            lenofAreaMultiple[j]=lenofAreaMultiple[j+1];
            lenofAreaMultiple[j+1]=swap;
        }
    }
}

int max=lenofAreaMultiple[0];
int totalArea=max*lenBytearray;

System.out.println(totalArea);


}


}
/**         hcakerank paste later foramt
     * import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    private static final Scanner sc= new Scanner(System.in);

    public static void main(String[] args) throws IOException {

 //       import java.util.Scanner;

//97 se 122 az

//public class designerPDFviewer{

//public static void main(String args[]){
//Scanner sc=new Scanner(System.in);
int arrWordHeights[]=new int[26];
for(int i=0;i<26;i++){
arrWordHeights[i]=sc.nextInt();
}

int copyArrWordsheight[]=new int[27];   // to set intial zero so can match later contexct
copyArrWordsheight[0]=0;

for(int i=1;i<27;i++){
    copyArrWordsheight[i]=arrWordHeights[i-1];
}
sc.nextLine();
String word=sc.nextLine();

byte bytearray[]=word.getBytes();
int lenBytearray=0;
for(byte tmp:bytearray){
lenBytearray++;
}

int lenofAreaMultiple[]=new int[lenBytearray];

for(int i=0;i<lenBytearray;i++){
    lenofAreaMultiple[i]=copyArrWordsheight[bytearray[i]-96];
}

int swap=0;
for(int i=0;i<lenBytearray;i++){
    for(int j=0;j<lenBytearray-1;j++){
        if(lenofAreaMultiple[i]<lenofAreaMultiple[i+1]){
            swap=lenofAreaMultiple[i];
            lenofAreaMultiple[i]=lenofAreaMultiple[i+1];
            lenofAreaMultiple[i+1]=swap;
        }
    }
}
int max=lenofAreaMultiple[0];
int totalArea=max*lenBytearray;

System.out.println(totalArea);


        sc.close();
    }
}

 */