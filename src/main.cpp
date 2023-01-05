#include <Arduino.h>
#include <SPI.h>
#include <Adafruit_ST7735.h>
#include <Adafruit_ST77xx.h>

const uint8_t PIN_SPI_RST = 10; // Used for AIR101
const uint8_t PIN_SPI_DC = 6; // Used for AIR101
const uint8_t PIN_SPI_CS_SS = 7; // Used for AIR101
const uint8_t PIN_SPI_SDA_SDI_DARA_IN_MOSI = 3; // Used for AIR101
const uint8_t PIN_SPI_SDO_DATA_OUT_MISO = 12; // Used for AIR101
const uint8_t PIN_SPI_SCK_CLK_SCL_SCLK = 2; // Used for AIR101
const uint8_t PIN_I2C_SDA = 4;
const uint8_t PIN_I2C_SCL = 5;
const uint8_t PIN_UART_TX = 0;
const uint8_t PIN_UART_RX = 1;

Adafruit_ST7735 display = Adafruit_ST7735(PIN_SPI_CS_SS, PIN_SPI_DC, PIN_SPI_RST);

void setupDisplay() {
    SPI.begin(PIN_SPI_SCK_CLK_SCL_SCLK, PIN_SPI_SDO_DATA_OUT_MISO, PIN_SPI_SDA_SDI_DARA_IN_MOSI, PIN_SPI_CS_SS);
    display.initR(INITR_MINI160x80);
    display.setSPISpeed(40000000);
    display.setTextColor(ST77XX_WHITE);
    display.setRotation(1);
    display.setTextSize(1);
    display.setTextWrap(true);
    display.fillScreen(ST77XX_BLACK);
    display.setCursor(60, 40);
    display.println("Start");
}

void setup() {
    setupDisplay();
}

void loop() {

}