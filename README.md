# Listas Enlazadas en C

Este repositorio contiene implementaciones básicas de listas 
enlazadas en C, organizadas como ejemplos para la materia de 
Estructura de Datos en Ingeniería de Sistemas.

---

## 📂 Estructura del proyecto

LISTAS_ENLAZADAS/
│── ejemplo_1.c # Implementación de una lista simple
│── ejemplo_2.c # Implementación de una lista doble
│── lista.c #
│── README.md # Documentación


> Nota: El archivo `lista.py` no hace parte de la entrega solicitada, se puede ignorar.

---

```bash
### Compilación y ejecución

### Lista Simple (ejemplo_1.c)

gcc ejemplo_1.c -o ejemplo_1
./ejemplo_1


### Lista Doble (ejemplo_2.c)
gcc ejemplo_2.c -o ejemplo_2
./ejemplo_2

-----


### Descripción de los ejemplos:

    Lista Simple (ejemplo_1.c)

        Cada nodo contiene:

        nombre: arreglo de caracteres (string).
        next: puntero al siguiente nodo.

    Se puede recorrer la lista solo hacia adelante.

    Operaciones implementadas:

        Creación de nodos.
        Enlace secuencial.
        Impresión de la lista.

Lista Doble (ejemplo_2.c)

    Cada nodo contiene:

        nombre: arreglo de caracteres.
        next: puntero al siguiente nodo.
        prev: puntero al nodo anterior.

    Se puede recorrer la lista en ambas direcciones (hacia adelante y hacia atrás).

    Operaciones implementadas:

        Creación de nodos.
        Enlace en ambos sentidos.
        Impresión hacia adelante.
        Impresión hacia atrás.


### Complejidad

|  Operación          |  Lista simple  | Explicación
|---------------------|----------------|--------------------------------------------------------
| Inserción al inicio |      O(1)      | Solo se crea el nuevo nodo y se enlaza al primero.
------------------------------------------------------------------------------------------------
| Inserción al final  |      O(n)      | Se recorre la lista completa hasta el último
|                     |                | nodo para enlazar el nuevo.
------------------------------------------------------------------------------------------------
| Borrado en medio    |      O(n)      | Hay que recorrer hasta el nodo anterior para 
|                     |                | poder ajustar su `next`.
------------------------------------------------------------------------------------------------
| Búsqueda            |      O(n)      | Se recorre nodo por nodo hasta hallar el valor buscado.
------------------------------------------------------------------------------------------------
| Recorrido completo  |      O(n)      | Se avanza desde el inicio hasta `NULL`, visitando cada 
|                     |                | nodo una vez.



|  Operación          |  Lista simple  | Explicación
|---------------------|----------------|--------------------------------------------------------
| Inserción al inicio |      O(1)      | Igual que la simple, pero también se ajusta el puntero
|                     |                | `prev` del antiguo primer nodo.
------------------------------------------------------------------------------------------------
| Inserción al final  |      O(n)      | Igual que la simple, salvo que si se guarda un puntero 
|                     |                | al último nodo, sería O(1).
------------------------------------------------------------------------------------------------
| Borrado en medio    |      O(1)      | Si se tiene acceso directo al nodo, basta con enlazar
|                     |                | `prev` y `next` de los vecinos.
------------------------------------------------------------------------------------------------
| Búsqueda            |      O(n)      | También requiere recorrer toda la lista nodo a nodo.
------------------------------------------------------------------------------------------------
| Recorrido completo  |      O(n)      | Igual que en la simple, pero se puede recorrer en ambos 
|                     |                | sentidos (`next` y `prev`). 




### Pruebas realizadas

    Lista Simple:

        Creación de nodos con nombres: Marta, Luisa, Andrea, Maria.

        Impresión en orden secuencial:
        Marta -> Luisa -> Andrea -> Maria -> NULL

    Lista Doble:

        Creación de los mismos nodos.

        Impresión hacia adelante:
        Perseo -> Paris -> Aquiles -> Menelao -> NULL

        Impresión hacia atrás:
        Menelao -> Aquiles -> Paris -> Perseo -> NULL

Conclusión

La lista simple es más ligera en memoria pero limitada 
al recorrido hacia adelante.

La lista doble ocupa más memoria pero brinda flexibilidad 
al permitir recorrer la lista en ambos sentidos y 
facilita operaciones de borrado/inserción.