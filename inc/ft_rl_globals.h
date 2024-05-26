/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rl_globals.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:48:20 by ivalimak          #+#    #+#             */
/*   Updated: 2024/05/27 00:01:56 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RL_GLOBALS_H
# define FT_RL_GLOBALS_H
# include "libft.h"

extern t_hmap	*g_keys;
extern t_hmap	*g_funcs;
extern t_hmap	*g_maps;

extern const char	*g_hlcolor;

extern const t_list	*g_hist;
extern const t_list	*g_hist_cur;

#endif
