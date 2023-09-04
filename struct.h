/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lochane <lochane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 13:51:16 by lochane           #+#    #+#             */
/*   Updated: 2023/09/04 15:23:15 by lochane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef enum s_tokens
{
	GREAT = 1,
	GREAT_GREAT,
	LESS,
	LESS_LESS,
}	t_tokens;
typedef struct s_cmd
{
	char			*cmd;
	char			**arg;
	char			*in;
	char			*out;
	t_tokens		token;
	struct s_cmd	*next;
}	t_cmd;

typedef struct s_data
{
	char	*args;
	t_cmd	*cmd;
}	t_data;

#endif
