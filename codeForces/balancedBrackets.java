/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @Descripcion:
*/

import java.util.Scanner;
public class balancedBrackets {
  public static void main(String [] args){
    Scanner scan = new Scanner(System.in);
    String s = scan.next();
    int count = 0;
    for(int i=0; i < s.length(); i++){
      if(s.substring(i,i+1).equals("(")){
        count++;
      }
      else{
        count--;
      }
    }
    if(count!=0){
      System.out.println("NO");
    }
    else{
      System.out.println("YES");
    }
  }

}

