# Ejercicio 4

## Principios SOLID

### S: Principio de Responsabilidad Única (SRP)

El **Principio de Responsabilidad Única** establece que una clase debe tener una única responsabilidad o razón para cambiar.
En el ejemplo tenemos un gatito que avisa cuando tiene hambre. La clase `Cat` se encarga solamente de manejar la información del gato, como su nombre y nivel de hambre, además de permitirle maullar cuando tiene hambre. Por otro lado, la clase `CatFeeder` es responsable únicamente de alimentar al gatito, reduciendo su nivel de hambre. Cada clase tiene una responsabilidad clara y específica lo que cumple con este principio.

### O: Principio Abierto/Cerrado (OCP)

El **Principio Abierto/Cerrado** dice que las clases deben estar abiertas para su extensión, pero cerradas para modificación.
En el ejemplo, la clase base `Cat` está cerrada para modificaciones, osea, no es necesario cambiarla si se quiere añadir nuevos tipos de gatos. Para esto podemos extenderla creando subclases (como `OrangeCat` y `BlackCat`), que definen comportamientos específicos para cada tipo de gato. Esto permite que el código sea flexible y extensible sin modificar las clases existentes, lo que cumple con este principio.

### L: Principio de Sustitución de Liskov (LSP)

El **Principio de Sustitución de Liskov** menciona que los objetos de una subclase deben poder sustituir a los objetos de su clase base sin alterar el funcionamiento del sistema.
En el ejemplo, las clases `OrangeCat`, `BlackCat` y `CalicoCat` heredan de Cat, y cada una puede ser utilizada sin alterar el comportamiento general del programa. Aunque cada gato tiene una reacción diferente al jugar con el juguete, todos siguen la estructura de `playWithToy`. Cualquier subclase de Cat puede reemplazar a la clase base sin romper el programa, cumpliendo con este principio.

### I: Principio de Segregación de Interfaces (ISP)

El **Principio de Segregación de Interfaces** sugiere que los clientes no deben estar forzados a depender de interfaces que no utilizan.
En el ejemplo, en lugar de una única interfaz grande que force a los gatos a implementar habilidades que no tienen, se crean varias interfaces pequeñas (`IMeower`, `IHunter`, `IAdorable`). Los gatos implementan solo las habilidades que necesitan, esto evita que las clases se vean obligadas a implementar métodos innecesarios, lo que cumple con el principio.

### D: Principio de Inversión de Dependencias (DIP)

El **Principio de Inversión de Dependencias** establece que los módulos de alto nivel no deben depender de módulos de bajo nivel, sino de abstracciones.
En el ejemplo, la clase `HungryCat` no depende directamente de una implementación específica de alimentador, si no que dependen de un alimentador abstracto `ICatFeeder` que puede ser de cualquier tipo (manual o automático). Esto facilita la extensibilidad del código, permite agregar nuevas implementaciones de alimentadores sin modificar la clase `HungryCat` y mejora la mantenibilidad del codigo al promover una arquitectura más flexible y desacoplada, cumpliendo con este principio.

## Cómo Ejecutar

Compila y ejecuta cada uno de los archivos `.cpp`, puede utilizar un compilador de C++ como `g++`:

```bash
g++ -o solid_example solid_example.cpp
./solid_example
```
