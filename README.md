## Nix-related

The backend is now packaged with the nix package manager.

## Original Readme

NOTE: it's easier to use `nix-build` to build the whole repository. Original readme is only kept as a reference.

Sketch 1.7.6 README

Simple Setup Instructions:
1. Dependencies
Before building you need to have the following tools installed:
bash g++ flex bison

To run sketch you need to install either Java Runtime (JRE) or JDK, at least version 1.5.

2. Building the backend
under the sketch-1.7.6 directory, execute:

```
cd sketch-backend
chmod +x ./configure
./configure
make
cd ..
```

Hint: if configure or make keeps complaining, you can try install autoconf and libtool. But usually this is not necessary.

3. Testing the sketch

```
cd sketch-frontend
chmod +x ./sketch
./sketch test/sk/seq/miniTest1.sk
```

This should print out the completed sketch.

4. (Optional) setting environment variables
under sketch-frontend directory:

```
export PATH="$PATH:`pwd`"
export SKETCH_HOME="`pwd`/runtime"
```

The first one will let you run sketch from anywhere, and the second one will allow the code generators to find the runtime libraries.

5. (Optional) thorough test
If you want to run the completed test suites, run the following commands:

```
cd test/sk/seq
make long
```

This will run the complete sketch test suites.

frontend version:
parent: 4257:26040ed6006f tip
 updated pom
branch: default
commit: 2 unknown (clean)
backend version:
parent: 2226:a010e0200793 
 Completed new memory allocator.
branch: default
commit: 2 unknown (clean)
