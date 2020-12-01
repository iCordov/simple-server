FROM gcc:latest

COPY . /usr/src/simple-server

WORKDIR /usr/src/simple-server

RUN g++ main.cpp -o main -pthread
RUN chmod +x main

ENTRYPOINT [ "./main" ]