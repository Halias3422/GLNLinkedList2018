/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.h                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/23 14:01:05 by vde-sain     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/29 15:16:52 by vde-sain    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "libft/includes/libft.h"

# define BUFF_SIZE 1

typedef struct		s_gnlist
{
	int				fd;
	char			*str;
	struct s_gnlist	*next;
}					t_gnlist;

int					get_next_line(const int fd, char **line);

#endif
