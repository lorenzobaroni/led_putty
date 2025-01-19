#include <stdio.h>
#include "pico/stdlib.h"
#include <string.h>

// Definição dos pinos para os LEDs e Buzzer
#define LED_GREEN 11
#define LED_BLUE 12
#define LED_RED 13
#define BUZZER 21

// Função para inicializar os pinos GPIO
void init_gpio() {
    const int leds[] = {LED_RED, LED_GREEN, LED_BLUE};
    for (int i = 0; i < 3; i++) {
        gpio_init(leds[i]);
        gpio_set_dir(leds[i], GPIO_OUT);
    }
    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);
}

// Função para desligar todos os LEDs e o Buzzer


int main() {
    stdio_init_all();
    init_gpio();

    while (true) {
        printf("Digite um comando: ");
        if (fgets(input, sizeof(input), stdin)) {

    }
    return 0;
    }
}
