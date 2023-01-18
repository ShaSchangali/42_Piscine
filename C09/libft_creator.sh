# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sschanga <sschanga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 00:42:28 by sschanga          #+#    #+#              #
#    Updated: 2023/01/19 00:50:46 by sschanga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Add .C Files to the same folder
#ft_putchar.c
#ft_putstr.c
#ft_strcmp.c
#ft_strlen.c
#ft_swap.c

rm -f libft.a
find . -name "*.c" -type f -maxdepth 1 -exec gcc -Wall -Werror -Wextra -c {} \;
ar -rcs libft.a *.o
find . -name "*.o" -type f -maxdepth 1 -delete