FROM debian:buster
EXPOSE 80/tcp
COPY srcs/* tmp/
ENTRYPOINT [ "bash", "./tmp/t.sh" ]