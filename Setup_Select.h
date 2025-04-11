// This header file contains a list of user setup files and defines which one the
// compiler uses when the IDE performs a Verify/Compile or Upload.
//
// Users can create configurations for different boards and TFT displays.
// This makes selecting between hardware setups easy by "uncommenting" one line.

// The advantage of this hardware configuration method is that the examples provided
// with the library should work with immediately without any other changes being
// needed. It also improves the portability of users sketches to other hardware
// configurations and compatible libraries.
//
// Create a shortcut to this file on your desktop to permit quick access for editing.
// Re-compile and upload after making and saving any changes to this file.

// Example User_Setup files are stored in the "User_Setups" folder. These can be used
// unmodified or adapted for a particular hardware configuration.

#ifndef USER_SETUP_LOADED //  Lets PlatformIO users define settings in
                          //  platformio.ini, see notes in "Tools" folder.

///////////////////////////////////////////////////////
//   User configuration selection lines are below    //
///////////////////////////////////////////////////////

// Only ONE line below should be uncommented to define your setup.

//#include <TFT_Setups/ILI9341.h>
//#include <TFT_Setups/ILI9488.h>
//#include <TFT_Setups/ST7789.h>
#include <TFT_Setups/ST7796.h>

#endif // USER_SETUP_LOADED

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
#if defined (ILI9341_DRIVER) || defined(ILI9341_2_DRIVER) || defined (ILI9342_DRIVER)
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
