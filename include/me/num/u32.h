/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u32.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:10:03 by maiboyer          #+#    #+#             */
/*   Updated: 2023/12/11 14:17:08 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef U32_H
# define U32_H

# include "me/types.h"

t_u32	u32_rotate_left(t_u32 n, t_usize by);
t_u32	u32_rotate_right(t_u32 n, t_usize by);

#endif
