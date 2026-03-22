# 🚦 Projeto Arduino - Controle de LEDs com Botão

## 📌 Descrição

Este projeto controla três LEDs (verde, amarelo e vermelho) utilizando um botão.

* O sistema inicia com o LED verde ligado.
* Ao pressionar o botão, os LEDs acendem em sequência, simulando um semáforo.

---

## 🧰 Componentes utilizados

* Arduino (UNO ou similar)
* 3 LEDs (verde, amarelo, vermelho)
* 3 resistores (220Ω ou 330Ω)
* 1 botão
* Jumpers
* Protoboard

---

## 🔌 Ligações

### LEDs:

* LED verde → pino 11
* LED amarelo → pino 10
* LED vermelho → pino 9
* Todos conectados ao GND com resistor

### Botão:

* Um lado → pino 7
* Outro lado → GND
* Configurado com `INPUT_PULLUP` (sem resistor externo)

---

## ⚙️ Funcionamento

1. O sistema inicia com o LED verde ligado.
2. O botão é monitorado continuamente.
3. Ao pressionar o botão:

   * LED verde acende por 1,5 segundos
   * LED amarelo acende por 2 segundos
   * LED vermelho acende por 2,5 segundos
4. Após a sequência, o sistema retorna ao estado inicial.

---

## ⚠️ Observações

* O botão funciona com lógica invertida (LOW = pressionado).
* Verifique se o botão está ligado corretamente ao GND.
* Sempre use resistores nos LEDs para evitar danos.

![Circuito](image01.png)

---
