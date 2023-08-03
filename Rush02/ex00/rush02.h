/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalqatta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 17:42:04 by aalqatta          #+#    #+#             */
/*   Updated: 2023/07/30 19:21:56 by aalqatta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*parse_dict(char *str, int *i);
void	put_nbr_controller(char *str);
void	ft_putstr(char *str);
void	put_sp(int j);
char	*create_3_zeros(int j);
char	*get_nb_from_pipe(void);
void	go_to_next_line(int *fd, int *i);
void	print_error(void);
void	cmp_input_dict(int len);
void	rm_left_zeros(char **str);
int		ft_realloc(char **str, char sign);
void	put_sp_space(int j);

#endif
