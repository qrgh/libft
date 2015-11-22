/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_frrand.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:33 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:12:12 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float		ft_frrand(float a, float b)
{
	return (ft_frand() * (b - a) + a);
}