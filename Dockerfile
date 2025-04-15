FROM ubuntu:latest

COPY fibonacci_1.0_amd64.deb /tmp/

# Устанавливаем зависимости для .deb-пакета
RUN apt-get update && \
    apt-get install -y dpkg && \
    dpkg -i /tmp/fibonacci_1.0_amd64.deb && \ || apt-get install -f -y && \
    rm -rf /var/lib/apt/lists/*

# Запуск программы с параметром (n=10 для успешного завершения)
CMD ["fibonacci", "10"]
