//a simple shadow battle game in java !

import java.util.*;
 public class shadowGame
 {
   public static void main(String args[])
   { 
     System.out.print("\n You open your eyes in a dark room");
     try{
           Thread.sleep(2000);
           }
           catch(InterruptedException ex){
             }
     System.out.print("\n\n You can't see any thing");
     try{
           Thread.sleep(2000);
           }
           catch(InterruptedException ex){
             }
     System.out.print("\n\n A sound exactly as yours speaks....");
     try{
           Thread.sleep(2000);
           }
           catch(InterruptedException ex){
             }
             System.out.print("\n\n Hi soldire you are choosen for this mission\n We believe you \n Evil shadow has taken control over this world\n Everyone has turned evil except you");
             try{
           Thread.sleep(5000);
           }
           catch(InterruptedException ex){
             }
     System.out.print("\n\n You ask-->  who are you");
     try{
           Thread.sleep(500);
           }
           catch(InterruptedException ex){
             }
     System.out.print("\n\n I am your Light side\n The voice is no longer heard");
     try{
           Thread.sleep(3000);
           }
           catch(InterruptedException ex){
             }
     System.out.print("\n\n A huge SHADOW attacks you");
     try{
           Thread.sleep(3000);
           }
           catch(InterruptedException ex){
             }
     Scanner sc=new Scanner (System.in);
     int hi=100,ch=0,he=100,b=0,cha=0,sa=5,fa=0;
     while(true){
       if(cha%2==0){
     System.out.print("\n________________________\n1.Attack-10point\n2.Heal-5point\n3.Special attack(use 5 times only)-15point (for shadow 20points)\n4.Exit");
     System.out.print("\nenter choice:           ");
     ch=sc.nextInt();
     switch(ch){
       case 1:he=he-10;break;
       case 2:hi=hi+5;break;
       case 3:if(sa<=5 && sa!=0){
         --sa;
         System.out.print("\n Special attacks left= "+sa);
         he=he-15;
       break;}
       else{System.out.print("attack wasted");
          break;
          }
       case 4:b++;break;
       default:b++;
       }
      
      }
       else{
         fa=(int)(Math.random()*3+1);
         switch(fa){
           case 1:hi=hi-10;break;
       case 2:he=he+5;break;
       case 3:hi=hi-20;break;
       }
        System.out.print("\n________________________________\n\nSHADOW Used: "+fa+"\n\nSTATS:\n\nYour health= "+hi
         +"\nSHADOW's health= "+he); 
       }
       cha++;
       if(he<=0){
       System.out.print("\nyou won🎂🎂🔥🔥🔥🔥🔥🔥🔥🔥\n\n\n\nSTATS:\n\nYour health= "+hi
         +"\nSHADOW's health= "+he);
       b++;}
       else if(hi<=0){
       System.out.print("\nyou lost😫👺👺👹👹");
       b++;}
       if(b!=0){
         System.exit(0);
         }
      
      }
   }
 }

 
/**********************************************
 * @INFO
 * Author = programmer-offbeat  
 * @INFO
 * Discord = Astrexx.jar#4035
 *********************************************/
