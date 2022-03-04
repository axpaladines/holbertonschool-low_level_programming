Librerias static
 Librerias estáticas y dinámicas

 En linux podemos hacer dos tipos de librerías: estáticas y dinámicas.

 Una librería estática es una librería que "se copia" en nuestro programa cuando lo compilamos. Una vez que tenemos el ejecutable de nuestro programa, la librería no sirve para nada (es un decir, sirve para otros futuros proyectos). Podríamos borrarla y nuestro programa seguiría funcionando, ya que tiene copia de todo lo que necesita. Sólo se copia aquella parte de la librería que se necesite. Por ejemplo, si la librería tiene dos funciones y nuestro programa sólo llama a una, sólo se copia esa función.

 Una librería dinámica NO se copia en nuestro programa al compilarlo. Cuando tengamos nuestro ejecutable y lo estemos ejecutando, cada vez que el código necesite algo de la librería, irá a buscarlo a ésta. Si borramos la librería, nuestro programa dará un error de que no la encuentra.

  ¿Cuáles son las ventajas e inconvenientes de cada uno de estos tipos de librerías?

      Un programa compilado con librerías estáticas es más grande, ya que se hace copia de todo lo que necesita.
          Un programa compilado con librerías estáticas se puede llevar a otro ordenador sin necesidad de llevarse las librerías.
	      Un programa compilado con librerías estáticas es, en principio, más rápido en ejecución. Cuando llama a una función de la librería, la tiene en su código y no tiene que ir a leer el fichero de la librería dinámica para encontrar la función y ejecutarla.
	          Si cambiamos una librería estática, a los ejecutables no les afecta. Si cambiamos una dinámica, los ejecutables se ven afectados. Esto es una ventaja si hemos cambiado la librería para corregir un error (se corrige automáticamente en todos los ejecutables), pero es un inconveniente si tocar eso nos hace cambiar los ejecutables (por ejemplo, hemos añadido un parámetro más a una función de la librería, los ejecutables ya hechos dejan de funcionar).

		  ¿Qué tipo de librería uso entonces?

		  Es como siempre una cuestión de compromiso entre las ventajas y los inconvenientes. Para programas no muy grandes y por simplicidad, yo suelo usar librerías estáticas. Las dinámicas están bien para programas enormes o para librerías del sistema, que como están en todos los ordenadores con linux, no es necesario andar llevándoselas de un lado a otro.

		  En unix las librerías estáticas suelen llamarse libnombre.a y las dinámicas libnombre.so, donde nombre es el nombre de nuestra librería. 
