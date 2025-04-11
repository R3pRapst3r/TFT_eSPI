// TFT Configuration for ST7796 (using RP2040_PIO_SPI)

#define ST7789_DRIVER

// ST7796 resolution
#define TFT_WIDTH   240      
#define TFT_HEIGHT  320

// Enable PIO SPI
#define RP2040_PIO_SPI              // Use PIO to emulate SPI
#define SPI_FREQUENCY  40000000     // 40 MHz (adjust if unstable)
#undef TFT_SPI_PORT                 // Disable hardware SPI pins

// PIO SPI pins for TFT
#define TFT_CS      6       // Chip Select (RP2350 GPIO6)
#define TFT_DC      7       // Data/Command (RP2350 GPIO7)
#define TFT_RST     8       // Reset (RP2350 GPIO8)
#define TFT_SCLK    9       // PIO SPI Clock (RP2350 GPIO9)
#define TFT_MOSI    10      // PIO SPI MOSI (RP2350 GPIO10)
#define TFT_MISO    2       // PIO SPI MOSI (RP2350 GPIO2)

#define LOAD_GLCD   // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2  // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4  // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6  // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7  // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:-.
#define LOAD_FONT8  // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
//#define LOAD_FONT8N // Font 8. Alternative to Font 8 above, slightly narrower, so 3 digits fit a 160 pixel TFT
#define LOAD_GFXFF  // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

// Comment out the #define below to stop the SPIFFS filing system and smooth font code being loaded
// this will save ~20kbytes of FLASH
#define SMOOTH_FONT