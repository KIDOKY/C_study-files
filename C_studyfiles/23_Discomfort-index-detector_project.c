#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include <Servo.h>

#define DHTPIN 7      // DHT ������ ������ ��
#define DHTTYPE DHT11 // DHT11 ������ ����ϹǷ� DHT11�� ����

DHT_Unified dht(DHTPIN, DHTTYPE);

#define RED_PIN 9    // ������ LED ��
#define GREEN_PIN 10  // �ʷϻ� LED ��
#define BLUE_PIN 11   // �Ķ��� LED ��

Servo servoMotor;   // �������� ��ü ����

// LCD ����
LiquidCrystal_I2C lcd(0x27, 16, 2);

const int SERVO_THRESHOLD = 70; // ���������� �� ������ ���� ���� �������͸� ����

void setup() {
  Serial.begin(9600);

  // DHT ���� �ʱ�ȭ
  dht.begin();

  // RGB LED ���� ������� ����
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);

  // Servo ���� �� ����
  servoMotor.attach(6); // ����� �� ��ȣ ����

  // LCD �ʱ�ȭ
  lcd.begin(16, 2);
  lcd.backlight();

  // �ʱ�ȭ�� LCD�� ȭ�� ǥ��
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");

  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");

  lcd.setCursor(0, 2);
  lcd.print("Discom: ");
}

void loop() {
  // ���� �����͸� �о����
  sensors_event_t event;
  dht.temperature().getEvent(&event);
  float temperature = isnan(event.temperature) ? 0 : event.temperature;

  dht.humidity().getEvent(&event);
  float humidity = isnan(event.relative_humidity) ? 0 : event.relative_humidity;

  // �������� ���
  float discomfortIndex = 0.81 * temperature + 0.01 * humidity * (0.99 * temperature - 14.3) + 46.3;

  // ���������� �ۼ�Ʈ�� ��ȯ
  int discomfortPercentage = map(discomfortIndex, 0, 100, 0, 100);

  // LCD�� �µ�, ����, �������� ǥ��
  lcd.setCursor(6, 0);
  lcd.print(temperature, 1);
  lcd.print(" C");

  // LCD�� �� ��° �ٿ� ���� ǥ�� �� ���� �̵�
  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(humidity, 1);
  lcd.print(" %   ");

  // LCD�� �� ��° �ٿ� �������� ǥ�� �� ���� �̵�
  lcd.setCursor(0, 2);
  lcd.print("Discom: ");
  lcd.print(discomfortPercentage);
  lcd.print("%   ");

  // ���� �̵�
  scrollText();

  // �ø��� ���
  Serial.print("Discomfort Index: ");
  Serial.print(discomfortPercentage);
  Serial.println("%");

  // ���������� ���� LED ���� ����
  if (discomfortPercentage <= 20) {
    setColor(0, 0, 255);  // �Ķ�
  } else if (discomfortPercentage <= 68) {
    setColor(0, 255, 0);  // �ʷ�
  } else {
    setColor(255, 0, 0);  // ����

    // ���������� ���� ������ ���� ���� �������� ����
    if (discomfortPercentage > SERVO_THRESHOLD) {
      // �������͸� ��� ������ ȸ��
      for (int angle = 0; angle <= 180; angle += 1) {
        moveServo(angle);
      }
    }
  }

  delay(1000);  // 1�ʿ� �� �� ����
}

// RGB LED ���� ���� �Լ�
void setColor(int red, int green, int blue) {
  analogWrite(RED_PIN, red);
  analogWrite(GREEN_PIN, green);
  analogWrite(BLUE_PIN, blue);
}

// Servo ���� ȸ�� �Լ�
void moveServo(int angle) {
  servoMotor.write(angle);
  delay(15); // �������Ͱ� ����ȭ�Ǳ⸦ ��ٸ�
}

// LCD ���� �̵� �Լ�
void scrollText() {
  static int offset = 0;
  lcd.scrollDisplayLeft();
  offset++;
  if (offset >= 16) {
    offset = 0;
    lcd.setCursor(0, 1);
    delay(50);
  }
}