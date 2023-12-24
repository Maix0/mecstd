/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buf_str.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:54:28 by maiboyer          #+#    #+#             */
/*   Updated: 2023/11/22 12:39:42 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUF_STR_H
# define BUF_STR_H
# include "me/types.h"

typedef struct s_buffer_str
{
	t_str		buf;
	t_usize		capacity;
	t_usize		len;
}				t_buffer_str;
bool			push_str_buffer(t_buffer_str *buf, t_const_str to_push);
t_buffer_str	alloc_new_buffer(t_usize capacity);

#endif