/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rl_internal.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivalimak <ivalimak@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:34:49 by ivalimak          #+#    #+#             */
/*   Updated: 2024/05/27 00:03:13 by ivalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RL_INTERNAL_H
# define FT_RL_INTERNAL_H
# include "rl42.h"
# include "ft_rl_fns.h"
# include "ft_rl_term.h"
# include "ft_rl_globals.h"

// error.c
int32_t			ft_rl_perror(void);

// exec.c
uint8_t			ft_rl_execmap(rl_input_t *input);


/**  hist  **/

/**   history.c   **/
void			ft_rl_hist_get_next(rl_input_t *input);
void			ft_rl_hist_get_prev(rl_input_t *input);
void			ft_rl_hist_get_last(rl_input_t *input);
void			ft_rl_hist_get_first(rl_input_t *input);

/**   utils.c   **/
rl_histnode_t	*ft_rl_hist_mknode(const char *line);
void			ft_rl_hist_recycle(void);
void			ft_rl_hist_restore(void);
void			ft_rl_hist_newnode(void);

/**  hist  **/


/**  init  **/

/**   initkeys.c   **/
void			ft_rl_initkeys(void);

/**   initfuncs.c   **/
void			ft_rl_initfuncs(void);

/**  init  **/


/**  keys  **/

/**   utils.c   **/
char			*ft_rl_keystr(const uint64_t key);

/**  keys  **/

#endif
