//#include "MainMenu.h"
//MainMenu::MainMenu()
//{
//    // Load the font
//    if (!font.loadFromFile("Fonts/CHILLER.ttf"))
//    {
//        // Handle the error if font cannot be loaded
//        std::cerr << "Error loading font file." << std::endl;
//        return 1;
//    }
//
//    // Load the background
//    if (!backgroundTexture.loadFromFile("C:/Users/Yara/Desktop/SMFLandProject/ConsoleApplication1/ConsoleApplication1/backgrounds/Image2.jpg"))
//    {
//        // Handle the error if background cannot be loaded
//        std::cerr << "Error loading background file." << std::endl;
//        return 1;
//    }
//
//    // Set up the background sprite
//    backgroundSprite.setTexture(backgroundTexture);
//
//    // Set up the title text
//    title.setFont(font);
//    title.setString("Main Menu");
//    title.setCharacterSize(50);
//    title.setPosition(200, 50);
//
//    // Set up the menu options
//    PlayText.setFont(font);
//    PlayText.setString("Play");
//    PlayText.setCharacterSize(30);
//    PlayText.setPosition(300, 200);
//
//    AboutText.setFont(font);
//    AboutText.setString("About");
//    AboutText.setCharacterSize(30);
//    AboutText.setPosition(300, 250);
//
//    CreditsText.setFont(font);
//    CreditsText.setString("Credits");
//    CreditsText.setCharacterSize(30);
//    CreditsText.setPosition(300, 300);
//
//    ExitText.setFont(font);
//    ExitText.setString("Exit");
//    ExitText.setCharacterSize(30);
//    ExitText.setPosition(300, 350);
//
//    // Set up the keyboard icons
//    keyboardIcon1Texture.setFont(font);
//    keyboardIcon1Texture.setString("Press ");
//    keyboardIcon1Texture.setCharacterSize(20);
//    keyboardIcon1Texture.setPosition(270, 205);
//    keyboardIcon1Sprite.setTexture(keyboardIconTexture);
//    keyboardIcon1Sprite.setPosition(400, 200);
//
//    keyboardIcon2Texture.setFont(font);
//    keyboardIcon2Texture.setString(" or ");
//    keyboardIcon2Texture.setCharacterSize(20);
//    keyboardIcon2Texture.setPosition(470, 205);
//    keyboardIcon2Sprite.setTexture(keyboardIconTexture);
//    keyboardIcon2Sprite.setPosition(520, 200);
//
//    // Set playing to false
//    playing = false;
//}

#include "MainMenu.h"
