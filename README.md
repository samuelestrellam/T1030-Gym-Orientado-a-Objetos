# T1030-Gym-Orientado-a-Objetos
Este proyecto consiste en el diseño de un sistema para administrar un gimnasio usando Programación Orientada a Objetos y diagramas UML. El objetivo es organizar la información de usuarios, entrenadores, rutinas, membresías y pagos de forma más eficiente, evitando errores que normalmente ocurren cuando todo se maneja manualmente.

**Problemática**

Muchos gimnasios pequeños todavía administran su información en papel o en archivos simples, lo que puede causar desorganización y errores frecuentes. Por ejemplo, algunos pagos pueden no registrarse correctamente, las membresías pueden vencer sin que exista un control adecuado y también puede haber problemas al asignar rutinas o entrenadores a los usuarios.

Además, cuando la información no está organizada, es más difícil llevar el control de clientes activos, pagos pendientes y entrenamientos asignados. Por esta razón se propone un sistema orientado a objetos que permita administrar toda la información de manera más clara y segura.

**Clases del sistema**

Persona: contiene datos básicos como id, nombre, edad y teléfono.
Usuario: representa a los clientes del gimnasio.
Entrenador: asigna rutinas a los usuarios.
Rutina: define los entrenamientos.
Membresía: controla la vigencia del acceso al gimnasio.
Pago: registra los pagos realizados.
Gym: administra todo el sistema.

**Relaciones UML**

Herencia: Usuario y Entrenador heredan de Persona.
Asociación: Usuario se relaciona con Rutina y Pago.
Composición: Gym contiene y organiza los entrenadores.

**Casos donde el sistema podría fallar**

El sistema también considera algunos casos que podrían afectar su funcionamiento. Por ejemplo:

Membresías vencidas que no sean actualizadas
Pagos rechazados o mal registrados
Usuarios duplicados dentro del sistema
Rutinas inexistentes o asignadas incorrectamente
Información incompleta al registrar usuarios
Errores al guardar datos importantes

Estos casos son importantes porque ayudan a identificar posibles problemas y mejorar la estabilidad del sistema.

**Conclusión**

El sistema mejora la organización del gimnasio al automatizar el control de usuarios, pagos y rutinas, reduciendo errores y facilitando la administración.
