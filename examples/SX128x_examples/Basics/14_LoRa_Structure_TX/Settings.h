/*******************************************************************************************************
  lora Programs for Arduino - Copyright of the author Stuart Robinson - 08/02/20

  This program is supplied as is, it is up to the user of the program to decide if the program is
  suitable for the intended purpose and free from errors.
*******************************************************************************************************/

//*******  Setup hardware pin definitions here ! ***************

//These are the pin definitions for one of my own boards, the Easy Mikrobus Pro Mini,
//be sure to change the definitions to match your own setup. Some pins such as DIO2,
//DIO3, BUZZER may not be in used by this sketch so they do not need to be
//connected and should be included and be set to -1.

#define NSS 10
#define RFBUSY 7
#define NRESET 9
#define LED1 8
#define DIO1 3
#define DIO2 -1                 //not used 
#define DIO3 -1                 //not used                      
#define BUZZER -1               //connect a buzzer here if wanted        

#define LORA_DEVICE DEVICE_SX1280               //we need to define the device we are using  

//LoRa Modem Parameters
#define Frequency 2445000000                     //frequency of transmissions
#define Offset 0                                 //offset frequency for calibration purposes  
#define Bandwidth LORA_BW_0400                   //LoRa bandwidth
#define SpreadingFactor LORA_SF7                 //LoRa spreading factor
#define CodeRate LORA_CR_4_5                     //LoRa coding rate

const uint8_t TXpower = -18;                     //Start power for transmissions in dBm

const uint16_t packet_delay = 1000;              //mS delay between packets

