/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @Descripcion:
*/

import java.util.Scanner;
public class decoding {
  public static void main(String [] args){
    Scanner scan = new Scanner(System.in);
    int len = scan.nextInt();
    String s = scan.next();
    String ns = ""; 
    for(int i = 1; len!=0;i++){
      if(len%2==0){
        ns = s.substring(0, 1) + ns; 
      }
      else{
        ns += s.substring(0, 1); 
      }
      s = s.substring(1);
      len--;
    }
    System.out.println(ns);

  }

}

