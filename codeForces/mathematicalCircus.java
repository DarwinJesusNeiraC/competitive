/*
* @Autor: Darwin Neira Carrasco
* @Email: dneirac@unsa.edu.pe
* @Descripcion:
*/

import java.util.Scanner;
public class mathematicalCircus {
  public static void main(String [] args){
    Scanner scan = new Scanner(System.in);
    int t = scan.nextInt();
    int n = scan.nextInt();
    int k = scan.nextInt();
    int [][] list = new int [n/2][2];

    int r =0;
    for(int i=1;i<=n;i++){
      for(int j=2;j<=n;j++){
        if((i+k)*j % 4==0){
          if(r < n/2){
            System.out.println("entrado");
            System.out.println(i);
            System.out.println(j);
            list[r][0]=i;
            list[r][1]=j;
            System.out.println(r);
            r++;
          }
        }
      }
    }

    if(list[0][0] == 0){
      System.out.println("NO");
    }
    else{
      System.out.println("YES");
    }
    for(int i=0;i<list.length;i++){
      System.out.println(list[i][0] + " "+ list[i][1]);
    }


  }

}

