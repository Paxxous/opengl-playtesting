default:
	g++ src/*.cpp -I src/*.h -I include/ -o bin/main -lglfw -lGL
	./bin/main
