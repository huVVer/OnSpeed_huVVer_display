#line 1 "C:\\Users\\vern\\OneDrive\\Desktop\\GW_Archive\\OnSpeed_huVVer_display\\my_custom_setup.h"
// Copyright 2020-2024, V.R. Little

//                            USER DEFINED SETTINGS
//   Set driver type, fonts to be loaded, pins used and SPI control method etc
//
//   See the User_Setup_Select.h file if you wish to be able to define multiple
//   setups and then easily select which setup file is used by the compiler.
//
//   If this file is edited correctly then all the library example sketches should
//   run without the need to make any more changes for a particular hardware setup!
//   Note that some sketches are designed for a particular TFT pixel width/height

// User defined information reported by "Read_User_Setup" test & diagnostics example

#define USER_SETUP_INFO "User_Setup.h"
// Define to disable all #warnings in library (can be put in User_Setup_Select.h)
#define DISABLE_ALL_LIBRARY_WARNINGS
//
// Select one of the following board types
#define HUVVER_AVI
//#define HUVVER_AVI_S3 (Currently not implemented-- reserved for future development)
// #define M5STACK

// For audio channel R to work without noise, define the following inside User_Setup.h:
// #define SPI_FREQUENCY  10000000
// Otherwise, for maximum performance
// #define SPI_FREQUENCY  40000000

#ifdef HUVVER_AVI

// huVVer-AVI pin definitions

#define PIN_OC1 4      // Open Collector driver
#define PIN_OC2 12     // Open Collector driver
#define PIN_X1 32      // External analog input pin
#define PIN_X2 33      // External analog input pin
#define PIN_AUDR 26    // DAC output pin for audio
#define PIN_AUDL 25    // DAC output pin for audio
#define PIN_TX1 22     // Serial 1
#define PIN_RX1 21     // Serial 1
#define S1INVERT false // huVVer devices have RS232 buffers
#define PIN_TX2 17     // Serial 2
#define PIN_RX2 16     // Serial 2
#define S2INVERT false // huVVer devices have RS232 buffers
#define PIN_CANTX 14   // CAN bus
#define PIN_CANRX 27   // CAN bus
#define BUTTON_A 39
#define BUTTON_B 36
#define BUTTON_C 34
#define BUTTON_D 35
#define BUTTON_X1 32
#define BUTTON_X2 33
#define TFT_LED_PIN 15
//#define TOUCH_CS 13

// ##################################################################################
//
// Section 1. Call up the right driver file and any options for it
//
// ##################################################################################

#define ST7789_DRIVER // Full configuration option, define additional parameters below for this display
#define TFT_DRIVER 0x7789
// #define TFT_RGB_ORDER TFT_RGB  // Colour order Red-Green-Blue
#define TFT_RGB_ORDER TFT_BGR // Colour order Blue-Green-Red

#define TFT_WIDTH 240  //  240 x 240 and 240 x 320
#define TFT_HEIGHT 320 //  240 x 320
// #define TFT_INVERSION_ON
#define TFT_INVERSION_OFF

// ##################################################################################
//
// Section 2. Define the pins that are used to interface with the display here
//
// ##################################################################################

#define TFT_BL 15 // LED back-light control pin
// #define TFT_BACKLIGHT_ON LOW	// Level to turn ON back-light at startup.
#define TFT_BACKLIGHT_ON HIGH // Level to turn OFF back-light at startup. Define this for huVVer-AVI examples.

#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS 5  // Chip select control pin
#define TFT_DC 2  // Data Command control pin
#define TFT_RST 0 // Reset pin (could connect to RST pin)

// ##################################################################################
//
// Section 3. Define the fonts that are to be used here
//
// ##################################################################################

// Comment out the #defines below with // to stop that font being loaded
// The ESP8366 and ESP32 have plenty of memory so commenting out fonts is not
// normally necessary. If all fonts are loaded the extra FLASH space required is
// about 17Kbytes. To save FLASH space only enable the fonts you need!

#define LOAD_GLCD  // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2 // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4 // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6 // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7 // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:-.
#define LOAD_FONT8 // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
// #define LOAD_FONT8N // Font 8. Alternative to Font 8 above, slightly narrower, so 3 digits fit a 160 pixel TFT
#define LOAD_GFXFF // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

// Comment out the #define below to stop the SPIFFS filing system and smooth font code being loaded
// this will save ~20kbytes of FLASH
// #define SMOOTH_FONT

// ##################################################################################
//
// Section 4. Other options
//
// ##################################################################################

//#define SPI_FREQUENCY 10000000 // Use to minimize audio noise in R channel
#define SPI_FREQUENCY  80000000      // Maximum performance for huVVer-AVI
#define SPI_TOUCH_FREQUENCY 2500000

// Optional reduced SPI frequency for reading TFT
#define SPI_READ_FREQUENCY 10000000

#endif // HUVVER_AVI

#ifdef HUVVER_AVI_S3

#define PIN_OC1 31     // Open Collector driver
#define PIN_OC2 34     // Open Collector driver
#define PIN_X1 38      // External analog input pin
#define PIN_X2 7       // External analog input pin
#define PIN_AUDR 4     // Digital output pin for audio
#define PIN_AUDL 37    // Digital output pin for audio
#define PIN_TX1 36     // Serial 1
#define PIN_RX1 35     // Serial 1
#define S1INVERT false // huVVer devices have RS232 buffers
#define PIN_TX2 18     // Serial 2
#define PIN_RX2 16     // Serial 2
#define S2INVERT false // huVVer devices have RS232 buffers
#define PIN_CANTX 9    // CAN bus
#define PIN_CANRX 33   // CAN bus
#define BUTTON_A 5
#define BUTTON_B 2
#define BUTTON_C 8
#define BUTTON_D 6
#define BUTTON_X1 36
#define BUTTON_X2 13
#define TFT_LED_PIN 3
#define TOUCH_CS -1
// #define TOUCH_CS 	13 // Defined for touch screens.

// ##################################################################################
//
// Section 1. Call up the right driver file and any options for it
//
// ##################################################################################

#define ST7789_DRIVER // Full configuration option, define additional parameters below for this display
// #define TFT_RGB_ORDER TFT_RGB  // Colour order Red-Green-Blue
#define TFT_RGB_ORDER TFT_BGR // Colour order Blue-Green-Red

#define TFT_WIDTH 240  // ST7789 240 x 240 and 240 x 320
#define TFT_HEIGHT 320 // ST7789 240 x 320
// #define TFT_INVERSION_ON
#define TFT_INVERSION_OFF

// ##################################################################################
//
// Section 2. Define the pins that are used to interface with the display here
//
// ##################################################################################

#define TFT_BL 3 // LED back-light control pin
// #define TFT_BACKLIGHT_ON HIGH	// Level to turn ON back-light at startup. Define this for TFT_eSPI examples.
#define TFT_BACKLIGHT_ON LOW // Level to turn OFF back-light at startup. Define this for huVVer-AVI examples.

#define TFT_MISO 13
#define TFT_MOSI 11
#define TFT_SCLK 12
#define TFT_CS 10  // Chip select control pin
#define TFT_DC 15  // Data Command control pin
#define TFT_RST 17 // Reset pin (could connect to RST pin)

// ######       EDIT THE PINs BELOW TO SUIT YOUR ESP32 PARALLEL TFT SETUP        ######

// The library supports 8 bit parallel TFTs with the ESP32, the pin
// selection below is compatible with ESP32 boards in UNO format.
// Wemos D32 boards need to be modified, see diagram in Tools folder.
// Only ILI9481 and ILI9341 based displays have been tested!

// Parallel bus is only supported for the STM32 and ESP32
// Example below is for ESP32 Parallel interface with UNO displays

// Tell the library to use 8 bit parallel mode (otherwise SPI is assumed)
// #define TFT_PARALLEL_8_BIT

// The ESP32 and TFT the pins used for testing are:
// #define TFT_CS   33  // Chip select control pin (library pulls permanently low
// #define TFT_DC   15  // Data Command control pin - must use a pin in the range 0-31
// #define TFT_RST  32  // Reset pin, toggles on startup

// #define TFT_WR    4  // Write strobe control pin - must use a pin in the range 0-31
// #define TFT_RD    2  // Read strobe control pin

// #define TFT_D0   12  // Must use pins in the range 0-31 for the data bus
// #define TFT_D1   13  // so a single register write sets/clears all bits.
// #define TFT_D2   26  // Pins can be randomly assigned, this does not affect
// #define TFT_D3   25  // TFT screen update performance.
// #define TFT_D4   17
// #define TFT_D5   16
// #define TFT_D6   27
// #define TFT_D7   14

/// ##################################################################################
//
// Section 3. Define the fonts that are to be used here
//
// ##################################################################################

// Comment out the #defines below with // to stop that font being loaded
// The ESP8366 and ESP32 have plenty of memory so commenting out fonts is not
// normally necessary. If all fonts are loaded the extra FLASH space required is
// about 17Kbytes. To save FLASH space only enable the fonts you need!

#define LOAD_GLCD  // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2 // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4 // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6 // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7 // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:-.
#define LOAD_FONT8 // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
// #define LOAD_FONT8N // Font 8. Alternative to Font 8 above, slightly narrower, so 3 digits fit a 160 pixel TFT
#define LOAD_GFXFF // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

// Comment out the #define below to stop the SPIFFS filing system and smooth font code being loaded
// this will save ~20kbytes of FLASH
// #define SMOOTH_FONT

// ##################################################################################
//
// Section 4. Other options
//
// ##################################################################################

#define SPI_FREQUENCY 40000000
#define SPI_TOUCH_FREQUENCY 2500000
// Optional reduced SPI frequency for reading TFT
#define SPI_READ_FREQUENCY 20000000

#endif // HUVVER_AVI_S3

#ifdef M5STACK

// M5STACK pin definitions

#define PIN_OC1 2      // Open Collector driver
#define PIN_OC2 5      // Open Collector driver
#define PIN_X1 -1      // External analog input pin
#define PIN_X2 -1      // External analog input pin
#define PIN_AUDR 26    // DAC output pin for audio
#define PIN_AUDL 25    // DAC output pin for audio
#define PIN_TX1 -1     // Serial 1
#define PIN_RX1 -1     // Serial 1
#define S1INVERT false // for devices with RS232 buffers
#define PIN_TX2 17     // Serial 2
#define PIN_RX2 16     // Serial 2
#define S2INVERT false // for devices with RS232 buffers
#define PIN_CANTX 22   // CAN bus
#define PIN_CANRX 21   // CAN bus
#define BUTTON_A 39
#define BUTTON_B 38
#define BUTTON_C 37
#define BUTTON_D -1
#define TFT_LED_PIN 32

// ##################################################################################
//
// Section 1. Call up the right driver file and any options for it
//
// ##################################################################################

#define ILI9341_DRIVER // Full configuration option, define additional parameters below for this display
#define TFT_DRIVER 0x9341
// #define TFT_RGB_ORDER TFT_RGB  // Colour order Red-Green-Blue
#define TFT_RGB_ORDER TFT_BGR // Colour order Blue-Green-Red

#define TFT_WIDTH 240  //  240 x 240 and 240 x 320
#define TFT_HEIGHT 320 //  240 x 320
// #define TFT_INVERSION_ON
#define TFT_INVERSION_ON

// ##################################################################################
//
// Section 2. Define the pins that are used to interface with the display here
//
// ##################################################################################

#define TFT_BL 32 // LED back-light control pin
// #define TFT_BACKLIGHT_ON HIGH	// Level to turn ON back-light at startup. Define this for TFT_eSPI examples.
#define TFT_BACKLIGHT_ON LOW // Level to turn OFF back-light at startup. Define this for huVVer-AVI examples.

#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS 14  // Chip select control pin
#define TFT_DC 27  // Data Command control pin
#define TFT_RST 33 // Reset pin (could connect to RST pin)

// ##################################################################################
//
// Section 3. Define the fonts that are to be used here
//
// ##################################################################################

// Comment out the #defines below with // to stop that font being loaded
// The ESP8366 and ESP32 have plenty of memory so commenting out fonts is not
// normally necessary. If all fonts are loaded the extra FLASH space required is
// about 17Kbytes. To save FLASH space only enable the fonts you need!

#define LOAD_GLCD  // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2 // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4 // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6 // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7 // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:-.
#define LOAD_FONT8 // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
// #define LOAD_FONT8N // Font 8. Alternative to Font 8 above, slightly narrower, so 3 digits fit a 160 pixel TFT
#define LOAD_GFXFF // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

// Comment out the #define below to stop the SPIFFS filing system and smooth font code being loaded
// this will save ~20kbytes of FLASH
// #define SMOOTH_FONT

// ##################################################################################
//
// Section 4. Other options
//
// ##################################################################################

#define SPI_FREQUENCY 40000000

// Optional reduced SPI frequency for reading TFT
#define SPI_READ_FREQUENCY 16000000

#endif // M5STACK