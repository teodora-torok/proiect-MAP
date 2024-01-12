# Use a base image with a C compiler
FROM gcc:latest

# Set the working directory inside the container
WORKDIR /app

# Copy the source code into the container
COPY . /app

# Compile the C code
RUN gcc -o main main.c

# Define the command to run the application
CMD ["./main"]
