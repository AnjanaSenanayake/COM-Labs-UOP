#include<avr/io.h>
#include<util/delay.h>
void delayTimer0(){
	TCNT0 = 0X00;
	TCCR0A = 0X00;
	TCCR0B = 0X01;

	while((TIFR0 & 0X01)==0);
	TCCR0A = 0X00;
	TCCR0B = 0X00;
	TIFR0 = 0X01;

}

int main(void){
	DDRB = DDRB | (1<<5);
	while(1){
		PORTB = PORTB | (1<<5);
		//delayTimer0();
		// _delay_ms(5000);
		// PORTB = PORTB & ~(1<<5);
		//delayTimer0();
		//_delay_ms(5000);
	}
}
