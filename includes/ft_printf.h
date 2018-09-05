/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smickael <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:30:21 by smickael          #+#    #+#             */
/*   Updated: 2018/09/05 18:02:06 by smickael         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <wchar.h>
# include <limits.h>
# include <string.h>
# define BUFF_SIZE 4096

typedef	struct	s_flags
{
	int	hash;
	int	zero;
	int	minus;
	int	plus;
	int	space;
	int	negative;
	int accuracy;
}				t_flags;

typedef	enum	e_mod
{
	pf_hh,
	pf_h,
	pf_l,
	pf_ll,
	pf_j,
	pf_z,
}				t_mod;

typedef	struct	s_env
{
	int		i;
	va_list	ap;
	t_flags	flags;
	t_mod	mod;
	char	*out;
	int		ret;
}				t_env;

/*
 * 				LIBFT
 */

char			*ft_itoa(int n);
void			ft_bzero(void *s, size_t n);
char			*ft_strdup(const char *s1);
void			*ft_memset(void *s, int c, size_t len);
char			*ft_strnew(size_t size);
char			*ft_strchr(const char *str, int c);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
size_t			ft_strlen(const char *s);
char			*ft_strjoin(char const *s1, char const *s2);
void			ft_strlower(char *s);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strcat(char *dest, const char *src);
int				ft_atoi(const char *str);
int				ft_isdigit(int c);
int				ft_isspace(int c);
char			*ft_ltoa(long n);
char			*ft_ltoa_base(long n, int base);
char			*ft_ultoa(unsigned long n);
char			*ft_ultoa_base(unsigned long n, int base);

/*
 *				ft_printf
 */

int				ft_printf(const char *fmt, ...);

/*
 * 				ft_get_spec
 */

void			ft_spec_ptraddr(t_env *op, char type);
void			ft_spec_wchar(t_env *op, char type);
void            ft_spec_int(t_env *op);
void			ft_spec_base(t_env *op, char type);

/*
 *				ft_parse
 */

void			ft_init_flag(t_flags *flags);

/*
 *				ft_print_ptr
 */

void			ft_print_ptraddr(t_env *op, char type);
void			ft_print_ptraddr_width(t_env *op);




#endif
