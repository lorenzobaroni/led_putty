#include "pico/stdlib.h"
#include <stdio.h>
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
void all_off() {
    gpio_put(LED_GREEN, 0);
    gpio_put(LED_BLUE, 0);
    gpio_put(LED_RED, 0);
    gpio_put(BUZZER, 0);
}

// Função para gerar tons no buzzer
void tone(uint buzzer, uint frequencia, uint duracao) {
    uint32_t periodo = 1000000 / frequencia; 
    uint32_t meio_periodo = periodo / 2;    
    uint32_t ciclos = frequencia * duracao / 1000;

    for (uint32_t i = 0; i < ciclos; i++) {
        gpio_put(buzzer, 1); 
        sleep_us(meio_periodo);
        gpio_put(buzzer, 0); 
        sleep_us(meio_periodo);
    }
}

int main() {
    stdio_init_all();
    init_gpio();
    all_off();

    char input[20];

    while (true) {
        scanf("%s", input);

            if (strcmp(input, "RED") == 0) {
                all_off();
                gpio_put(LED_RED, 1);
                printf("ON: RED\n");
            } else if (strcmp(input, "BLUE") == 0) {
                all_off();
                gpio_put(LED_BLUE, 1);
                printf("ON: BLUE\n");
            } else if (strcmp(input, "GREEN") == 0) {
                all_off();
                gpio_put(LED_GREEN, 1);
                printf("ON: GREEN\n");
            } else if (strcmp(input, "WHITE") == 0) {
                all_off();
                gpio_put(LED_RED, 1);
                gpio_put(LED_GREEN, 1);
                gpio_put(LED_BLUE, 1);
                printf("ON: WHITE\n");
            } else if (strcmp(input, "BUZZER") == 0) {
                all_off();
                printf("ON: BUZZER\n");
                tone(BUZZER, 200, 500);
            } else if (strcmp(input, "OFF") == 0) {
                all_off();
                printf("SYSTEM: OFF\n");
            } else {
                printf("Comando desconhecido: %s\n", input);
            }
        }
    return 0;
}