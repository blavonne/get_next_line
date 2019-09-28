cmake_minimum_required(VERSION 3.14)
project(get_next_line C)

set(CMAKE_C_STANDARD 99)

add_executable(get_next_line main.c get_next_line.h get_next_line.c libft/includes/libft.h
        libft/ft_bzero.c libft/ft_memchr.c
        libft/ft_strdup.c libft/ft_strjoin.c libft/ft_strlen.c libft/ft_strsub.c libft/ft_memset.c
        libft/ft_strcat.c libft/ft_strncpy.c libft/ft_strnew.c libft/ft_lstadd.c libft/ft_lstnew.c libft/ft_strchr.c
        libft/ft_memcpy.c libft/ft_lstdelone.c libft/ft_atoi.c)