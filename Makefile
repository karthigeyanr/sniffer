

APP = sniffer
SUBDIR = src

all:
	for dir in $(SUBDIR); do \
		$(MAKE) -C $$dir; \
	done

	gcc -o $(APP) ./bin/*

clean:
	rm -f $(APP)
	rm -f ./bin/*
