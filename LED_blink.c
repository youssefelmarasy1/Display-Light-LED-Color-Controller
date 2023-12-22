/* 
 * File:   lab_1.c
 * Author: youss
 *
 * Created on October 6, 2022, 2:29 PM
 */

#define F_CPU 1200000UL
#include <stdio.h>
#include <stdlib.h>
#include <util/delay.h>
#include <avr/io.h>
int main(void) {
 DDRB |= (1 << PB3); // Make PB3 an output. (Red)
 DDRB |= (1 << PB1); //Make PB2 an output. (Green)
 DDRB |= (1 << PB2); //Make PB1 an output. (Blue)
 
 //PB4 is connected to the push button and the push button isn't connected to an external supply
 DDRB &= ~(1 << PB4); // Make PB4 an input
 PORTB |= (1 << PB4); // Turn on pull ups on PB4 since there's an external pushbutton

 
 //defining the colors that we want
 typedef enum {RED, YELLOW, GREEN, CYAN, BLUE, MAGENTA, WHITE} color;
 color chosenColor = RED; //We pick Red as our starting color
 while(1){
 
 switch(chosenColor){
     
     case RED:{_delay_ms(250);
     while(1){
         if(PINB & (1<<PB4)){ // if the push button is not pressed
             PORTB |= (1 << PB3); //keep the red color on
         
         }
         else{
             PORTB &= ~(1 << PB3); //Turn red off
             PORTB &= ~(1 << PB1); //Turn green off
             PORTB &= ~(1 << PB2); //Turn blue off
             break;
         
         }
     
     }//second bracket for the while loop
     }//second curly brace for the RED switch statement
     case YELLOW:{_delay_ms(250);
     while(1){
         if (PINB & (1 << PB4)){ // if the push button is not pressed
             
             //Yellow is a mix of Red and Green
             PORTB |= (1 << PB3); //Turn on red
             PORTB |= (1 << PB1); //Turn on green
         
         }
         else{
             PORTB &= ~(1 << PB3); //Turn red off
             PORTB &= ~(1 << PB1); //Turn green off
             PORTB &= ~(1 << PB2); //Turn blue off
             break;
         }
     
     }//second bracket for the while loop
     
     }//second curly brace for the YELLOW case case statement
     
     case GREEN: {
         _delay_ms(250);
         while(1){
             if (PINB & (1 << PB4)){
                 PORTB |= (1 << PB1); // Turn green on            
             }
             else{
                 PORTB &= ~(1 << PB3); //Turn red off
                 PORTB &= ~(1 << PB1); //Turn green off
                 PORTB &= ~(1 << PB2); //Turn blue off
                 break;
             }//second curly brace for the else statement
         
         }//second curly brace for the while loop
     
     
     }//second curly brace for the GREEN case statement
     
     case CYAN: {
         _delay_ms(250);
         while(1) {
             if (PINB & (1 << PB4)){
                 PORTB |= (1 << PB1); //Turn Green on
                 PORTB |= (1 << PB2); //Turn Blue on            
             }
             else{
                 PORTB &= ~(1 << PB3); //Turn red off
                 PORTB &= ~(1 << PB1); //Turn green off
                 PORTB &= ~(1 << PB2); //Turn blue off
                 break;
                 
             }
         
         
         }//second curly brace for the while loop
     }//second curly brace for the CYAN case statement
     
     case BLUE: {
         _delay_ms(250);
         while(1) {
             if (PINB & (1 << PB4)){
                 PORTB |= (1 << PB2); //Turn Blue on            
             }
             else{
                 PORTB &= ~(1 << PB3); //Turn red off
                 PORTB &= ~(1 << PB1); //Turn green off
                 PORTB &= ~(1 << PB2); //Turn blue off
                 break;
                 
             }
         
         
         }//second curly brace for the while loop
     }//second curly brace for the BLUE case statement
     
     case MAGENTA: {
         _delay_ms(250);
         while(1) {
             if (PINB & (1 << PB4)){
                 PORTB |= (1 << PB3);
                 PORTB |= (1 << PB2); //Turn Blue on            
             }
             else{
                 PORTB &= ~(1 << PB3); //Turn red off
                 PORTB &= ~(1 << PB1); //Turn green off
                 PORTB &= ~(1 << PB2); //Turn blue off
                 break;
                 
             }
         
         
         }//second curly brace for the while loop
     }//second curly brace for the MAGENTA case statement
     
     case WHITE: {
         _delay_ms(250);
         while(1) {
             if (PINB & (1 << PB4)){
                 PORTB |= (1 << PB3); //Turn Red on
                 PORTB |= (1 << PB1); // Turn Green on
                 PORTB |= (1 << PB2); //Turn Blue on            
             }
             else{
                 PORTB &= ~(1 << PB3); //Turn red off
                 PORTB &= ~(1 << PB1); //Turn green off
                 PORTB &= ~(1 << PB2); //Turn blue off
                 chosenColor = RED;
                 break;
                 
             }
         
         
         }//second curly brace for the while loop
     }//second curly brace for the WHITE case statement
     
     
     
     
 
 
 
 
 }//second curly brace for the switch statement
 }//second curly brace for the big while loop
 
 
 

 return (EXIT_SUCCESS);
}
