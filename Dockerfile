FROM gcc:latest
COPY . /Fib
WORKDIR /Fib
RUN g++ --o main.out main.cpp
CMD ["./main.out"]
