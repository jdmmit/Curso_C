#!/usr/bin/env bash
# crear_archivos_cpp.sh
# Crea archivos .cpp con nombres seguros (sin emojis/símbolos problemáticos).

set -euo pipefail

ITEMS='0:00 | Introducción
2:33 | Instalación
10:16 | Nuestro Primer Programa
16:34 | Variables
31:08 | const
39:41 | Namespace
49:19 | Typedef y type aliases
57:19 | Operadores Aritméticos
1:10:48 | Conversión de tipos
1:18:37 | INPUT
1:27:30 | 8 Funciones útiles
1:36:04 | Calculando la Hipotenusa de un Triangulo Rectángulo
1:40:10 | Instrucciones IF
1:50:11 | Switches
1:59:03 | Calculadora
2:07:09 | Operador Ternario
2:13:39 | Operadores Lógicos
2:21:14 | Conversión de Temperatura
2:29:37 | Métodos
2:40:06 | Bucles While
2:45:36 | Do while loops
2:52:31 | Bucle FOR
2:59:32 | Break & continue
3:02:57 | Bucles Anidados
3:10:53 | Números Aleatorios
3:16:28 | Generador de Eventos Aleatorios
3:21:14 | Adivina el Número - Juego
3:27:50 | Funciones
3:39:55 | Return
3:52:36 | Funciones sobrecargadas
3:58:46 | Scope
4:07:37 | Sistema Bancario
4:26:37 | Piedra-Papel-Tijera
4:43:34 | Arreglo
4:53:26 | Operador Sizeof()
5:02:14 | Iterar sobre un Arreglo
5:09:49 | Bucle Foreach
5:14:53 | Como pasar un ARREGLO a Función
5:20:53 | Buscar un elemento en una Arreglo
5:30:47 | Ordenar Arreglos
5:43:16 | Función Fill
5:50:57 | Llenar un Arreglo con la entrada del usuario
6:02:40 | Arreglos Multidimensionales
6:12:36 | Juegos de Preguntas
6:26:53 | Dirección de Memoria
6:31:15 | Pasar por VALOR vs Pasar por REFERENCIA
6:38:52 | Parámetros Const
6:43:59 | Programa para Validar
6:58:49 | Punteros
7:05:33 | Punteros Nulos
7:12:48 | Tic Tac Toe
7:39:59 | Memoria Dinámica
7:47:18 | Recursión
7:57:54 | Plantillas de Funciones
8:09:12 | Estructuras
8:17:06 | Pasar una Estructura a una Función
8:25:48 | Enumeraciones
8:31:56 | Programación Orientada a Objetos
8:44:05 | Constructores
8:56:10 | Constructores Sobrecargados
9:03:24 | Getters & setters
9:13:11 | HERENCIA'

sanitize() {
  local s="$1"
  # Eliminar diacríticos (requiere iconv). Si falla, continúa sin él.
  if command -v iconv >/dev/null 2>&1; then
    s="$(printf '%s' "$s" | iconv -f UTF-8 -t ASCII//TRANSLIT 2>/dev/null || printf '%s' "$s")"
  fi
  # Quitar todo lo que no sea letra, número, espacio o ciertos signos
  s="$(printf '%s' "$s" | sed -E 's/[^A-Za-z0-9 _\-\&\(\)\.]+//g')"
  # Reemplazar espacios por guion bajo y limpiar
  s="$(printf '%s' "$s" | sed -E 's/[[:space:]]+/_/g; s/_+/_/g; s/^_+|_+$//g')"
  echo "$s"
}

i=1
today="$(date +%F)"

while IFS= read -r line; do
  [ -z "$line" ] && continue
  time="${line%%|*}"
  title="${line#*| }"

  time_safe="${time//:/-}"
  title_safe="$(sanitize "$title")"
  printf -v idx "%02d" "$i"
  filename="${idx}_${time_safe}_${title_safe}.cpp"

  cat > "$filename" <<CPP
/*
  Tema: $title
  Marca de tiempo: $time
  Archivo generado: $today
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Tema: $title" << endl;
    // Escribe tu código aquí...
    return 0;
}
CPP

  echo "Creado: $filename"
  i=$((i+1))
done <<< "$ITEMS"

echo
echo "Listo. Se generaron $((i-1)) archivos .cpp."
echo "Puedes compilarlos con: g++ nombre_archivo.cpp -o nombre_programa"
echo "Y ejecutarlos con: ./nombre_programa"
