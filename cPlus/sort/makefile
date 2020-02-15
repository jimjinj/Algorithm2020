
ldflag := -std=c99

bubble := bubble
quick := quick
insert := insert
shell := shell
bubbleOOP = bubbleOOP

bubble_src = $(addsuffix .c,$(bubble))
quick_src = $(addsuffix .cpp,$(quick))
insert_src = $(addsuffix .cpp,$(insert))
shell_src = $(addsuffix .cpp,$(shell))
bubbleOOP_src = $(addsuffix .cpp,$(bubbleOOP))

$(bubble): ${bubble_src}
	gcc -o  $@ $< ${ldflag}

$(quick): ${quick_src}
	g++ -o  $@ $< ${ldflag}

$(insert): ${insert_src}
	g++ -o  $@ $< ${ldflag}

$(shell): ${shell_src}
	g++ -o  $@ $< ${ldflag}

$(bubbleOOP): ${bubbleOOP_src}
	g++ -o  $@ $< ${ldflag}

