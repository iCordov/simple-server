FROM gcc:latest

COPY . /usr/src/simple-server

WORKDIR /usr/src/simple-server

RUN g++ main.cpp -o main -pthread

CMD [ "./main.cpp" ]