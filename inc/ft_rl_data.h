/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rl_data.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:51:46 by ivalimak          #+#    #+#             */
/*   Updated: 2024/05/27 00:51:26 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RL_DATA_H
# define FT_RL_DATA_H
# include "libft.h"

typedef enum e_rl_etype			rl_etype_t;
typedef enum e_rl_wtype			rl_wtype_t;
typedef enum e_rl_rdmode		rl_rdmode_t;
typedef enum e_rl_mapmode		rl_mapmode_t;

typedef struct s_rl_histnode	rl_histnode_t;
typedef struct s_rl_cursor		rl_cursor_t;
typedef struct s_rl_input		rl_input_t;
typedef struct s_rl_map			rl_map_t;
typedef struct s_rl_wc			rl_wc_t;

typedef uint8_t	(*rl_fn_t)(rl_input_t *);

enum e_rl_etype
{
	ACL,
	EOF
};

enum e_rl_wtype
{
	SPACE,
	NORMAL
};

enum e_rl_rdmode
{
	ALL,
	LINE,
	PROMPT
};

enum e_rl_mapmode
{
	WARN,
	QUIET,
	REMAP,
	QREMAP
};

struct s_rl_histnode
{
	const char	*line;
	const char	*edit;
};

struct s_rl_cursor
{
	int16_t	i_row;
	int16_t	i_col;
	int16_t	row;
	int16_t	col;
};

struct s_rl_input
{
	char			*line;
	const char		*prompt;
	const char		*keystr;
	rl_etype_t		exittype;
	rl_cursor_t		*cursor;
	const uint64_t	plen;
	uint64_t		len;
	uint64_t		key;
};

struct s_rl_map
{
	const uint64_t	key;
	const rl_fn_t	f;
};

struct s_rl_wc
{
	const char		*pattern;
	const t_list	*matches;
};

#endif
