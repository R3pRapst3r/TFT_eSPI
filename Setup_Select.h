// Only ONE line below should be uncommented to define your setup.

//#include <TFT_Setups/ILI9341.h>
//#include <TFT_Setups/ILI9488.h>
//#include <TFT_Setups/ST7789.h>
#include <TFT_Setups/ST7796.h>

// Identical looking TFT displays may have a different colour ordering in the 16-bit colour
#define TFT_BGR 0   // Colour order Blue-Green-Red
#define TFT_RGB 1   // Colour order Red-Green-Blue

// Invoke 18-bit colour for selected displays
#if !defined (TFT_PARALLEL_8_BIT) && !defined (TFT_PARALLEL_16_BIT)
  #if defined (ILI9488_DRIVER)
    #define SPI_18BIT_DRIVER
  #endif
#endif

// Load the right driver definition - do not tinker here !
#if defined (ILI9341_DRIVER)
     #include <TFT_Drivers/ILI9341_Defines.h>
     #define  TFT_DRIVER 0x9341
#elif defined (ILI9488_DRIVER)
     #include <TFT_Drivers/ILI9488_Defines.h>
     #define  TFT_DRIVER 0x9488
#elif defined (ST7789_DRIVER)
     #include "TFT_Drivers/ST7789_Defines.h"
     #define  TFT_DRIVER 0x7789
#elif defined (ST7796_DRIVER)
      #include "TFT_Drivers/ST7796_Defines.h"
      #define  TFT_DRIVER 0x7796
#else
     #define  TFT_DRIVER 0x0000
#endif
