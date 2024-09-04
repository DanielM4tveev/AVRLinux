#ifndef kernel_h
#define kernel_h
 
// Kernel Params
#define SerialPort 115200
#define DefaultLed 13
#define dlclock 500

void kl() {
    Serial.println("\nKernel panic - not syncing: Fatal exception in interrupt\nCode: 00 FF FA 0F\n");
    while(1){}
}

#endif
