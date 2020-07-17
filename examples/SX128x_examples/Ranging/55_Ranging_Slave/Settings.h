/*****************************************************************************************************
  Programs for Arduino - Copyright of the author Stuart Robinson - 16/03/20

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

#define LORA_DEVICE DEVICE_SX1280                //we need to define the device we are using

//*******  Setup LoRa Parameters Here ! ***************

//LoRa Modem Parameters
const uint32_t Frequency = 2445000000;           //frequency of transmissions in hz
const int32_t Offset = 0;                        //offset frequency in hz for calibration purposes  
const uint8_t Bandwidth = LORA_BW_0800;          //LoRa bandwidth
const uint8_t SpreadingFactor = LORA_SF8;        //LoRa spreading factor
const uint8_t CodeRate = LORA_CR_4_5;            //LoRa coding rate
const uint16_t Calibration = 11350;              //Manual Ranging calibrarion value

const uint8_t TXpower = 10;                      //Transmit power used 
const uint32_t RangingAddress = 16;              //must match address in recever

const uint16_t  rangingRXTimeoutmS = 0xFFFF;     //ranging RX timeout in mS

