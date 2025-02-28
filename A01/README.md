# Würfel-Auswertung in C

Dieses kleine C-Programm simuliert einen Würfelwurf (1–6) und bewertet das Ergebnis basierend auf einem Entscheidungsdiagramm.

## 📌 Funktionsweise
- Generiert eine Zufallszahl zwischen 1 und 6
- Falls die Zahl größer als 3 ist, wird **"Überdurchschnittlich"** ausgegeben
- Bei 1–3 erfolgt eine spezifische Bewertung per `switch`-Anweisung
- Falls die Zahl unerwartet wäre (sollte nicht passieren), gibt es eine Default-Ausgabe

## 🔧 Kompilierung & Ausführung
```sh
gcc -o wuerfel wuerfel.c
./wuerfel

📜 Beispielausgabe

Würfelergebnis: 5
Überdurchschnittlich
