/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @Descripcion:
*/

import java.util.Scanner;
public class linearKeyboard {
  public static void main(String [] args){
    Scanner scan = new Scanner(System.in);
    int t = scan.nextInt();
    int sum = 0;
    int [] listSum = new int [t];
    for(int j = 0; j<t; j++){
      String alpha = scan.next();
      String word = scan.next();
      for(int i=0; i<word.length()-1;i++){
        int f = alpha.indexOf(word.substring(i,i+1)) + 1;
        int s = alpha.indexOf(word.substring(i+1,i+2)) + 1;
        sum += Math.abs(f-s);
      }
      listSum[j] = sum;
      sum=0;
    }
    for (int i = 0; i < listSum.length; i++) {
      System.out.println(listSum[i]);
    }
  }

}

