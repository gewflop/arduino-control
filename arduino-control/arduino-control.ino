/*
 * arduino-control
 * Пульт для управления самолётом по радиоканалу на Arduino UNO
 *
 * Заготовка проекта: мигание встроенным светодиодом (LED_BUILTIN, пин 13)
 *
 * Подключение:
 *   - Встроенный светодиод на плате Arduino UNO (пин 13)
 *
 * Схема:
 *   Не требуется дополнительных подключений — используется встроенный светодиод.
 */

const int LED_PIN = LED_BUILTIN;  // Пин встроенного светодиода (13 на Arduino UNO)
const int BLINK_DELAY_MS = 500;   // Задержка между переключениями состояния светодиода (мс)

void setup() {
  // Настраиваем пин светодиода как выход
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // Включаем светодиод
  digitalWrite(LED_PIN, HIGH);
  delay(BLINK_DELAY_MS);

  // Выключаем светодиод
  digitalWrite(LED_PIN, LOW);
  delay(BLINK_DELAY_MS);
}