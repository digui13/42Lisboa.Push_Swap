/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_climb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:04:14 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/25 21:26:38 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*

	Function: 
	
		element_climb

	Parameters:

		"int **stack"	-	Stack.
		"int qty"		-	Qty of values in stack.

	Return:

		nothing.

	Info:

		"cnt = (qty - 1)"								-	Set last position of stack to variable "cnt".
		"tmp = *(*stack + cnt)"							-	Set value of last poision of stack to "tmp".
		"while (cnt > 0)"								-	Cycle runs when variable "cnt" is bigger than 0.
			"*(*stack + cnt) = *(*stack + (cnt - 1))"	-	Set the actual position with the value of the previous position.
			"cnt--"										-	Decrease variable "cnt".
		"*(*stack + cnt) = tmp"							-	Set the first position of stack with the value of the last position of stack.
		
*/

void	element_climb(int **stack, int qty)
{
	int	cnt;
	int	tmp;

	cnt = 0;
	tmp = *(*stack + cnt);
	while ((cnt + 1) < qty)
	{
		*(*stack + cnt) = *(*stack + (cnt + 1));
		cnt++;
	}
	*(*stack + cnt) = tmp;
}
