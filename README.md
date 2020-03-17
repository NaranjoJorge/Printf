# printf

Function that prints arguments and data.  Arguments type: c, s, %, d, i and b.

## Files

[_printf.c](https://github.com/NaranjoJorge/printf/blob/master/_printf.c) - File that contains: (1) the main function (int _printf(const char *format)),  and (2) function pointer to array structure.
[_putchar.c](https://github.com/NaranjoJorge/printf/blob/master/_putchar.c) - File that contains _putchar function which writes characters, one by one, to standard output.
[formatf.c](https://github.com/NaranjoJorge/printf/blob/master/formatf.c) - File that contains functions (for when arguments are type: c, s, %, i or d) pointed by function pointer define in structure struct formato (typedef fmt) on file holberton.h.
[formatf2.c ](https://github.com/NaranjoJorge/printf/blob/master/formatf2.c) - Same as formatf.c but for arguments types: b, u and o.
[holberton.h  ](https://github.com/NaranjoJorge/printf/blob/master/holberton.h)- Library with fucntions prototypes, and struct format (typedef fmt) that contains (1)pointer and (2)function pointer. 
[main.c  ](https://github.com/NaranjoJorge/printf/blob/master/test/main.c)- In test directory. File to test _printf.c .  

### Compilation

gcc -Wall -Werror -Wextra -pedantic *.c

## Code Style

[Betty](https://github.com/holbertonschool/Betty/wiki)

## Flow Chart
<!--[if IE]><meta http-equiv="X-UA-Compatible" content="IE=5,IE=9" ><![endif]-->
<!DOCTYPE html>
<html>
<head>
<title>Untitled Diagram</title>
<meta charset="utf-8"/>
</head>
<body><div class="mxgraph" style="max-width:100%;border:1px solid transparent;" data-mxgraph="{&quot;highlight&quot;:&quot;#0000ff&quot;,&quot;nav&quot;:true,&quot;resize&quot;:true,&quot;toolbar&quot;:&quot;zoom layers lightbox&quot;,&quot;edit&quot;:&quot;_blank&quot;,&quot;xml&quot;:&quot;&lt;mxfile host=\&quot;app.diagrams.net\&quot; modified=\&quot;2020-03-17T18:36:09.475Z\&quot; agent=\&quot;Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_3) AppleWebKit/605.1.15 (KHTML, like Gecko) Version/13.0.5 Safari/605.1.15\&quot; etag=\&quot;i4csvNEQXVh9RDOb1089\&quot; version=\&quot;12.8.6\&quot; type=\&quot;google\&quot;&gt;&lt;diagram id=\&quot;C5RBs43oDa-KdzZeNtuy\&quot; name=\&quot;Page-1\&quot;&gt;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&lt;/diagram&gt;&lt;/mxfile&gt;&quot;}"></div>
<script type="text/javascript" src="https://app.diagrams.net/js/viewer.min.js"></script>
</body>
</html>

## Authors

**Santiago Peña** 
**Jorge Naranjo** 

## Acknowledgments

* Holberton School