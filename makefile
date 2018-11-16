F1 = main.c
F2 = find_in_line.c
F3 = filetype.c
F4 = find_dir.c
F5 = find.c

search: ${F1} ${F2} ${F3} ${F4} ${F5}
	gcc -o search ${F1} ${F2} ${F3} ${F4} ${F5}

