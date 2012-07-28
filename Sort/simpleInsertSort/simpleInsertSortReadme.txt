sort {{{2
	各自写在各自的文件中，然后写makefile　f6调用　手动行动main.exe 已经ok
sort2 {{{2
　把所有的文件都拷到main2.c中{包括main.c simpleInsert.c simpleInsertPass.c}，然后f5就ok

sort3 {{{2
	把simpleInsert.c 与simpeInsertPass.c　中的内容纳入simpleInsertTest中。然后在main中include simpleInsertTest.c　然后f5就ok了

sort4 {{{2
　把simpleInsert.c simpleInsertPass.c　纳入simpleInsertTest.c中　然后写makefile　f6调用　ok
