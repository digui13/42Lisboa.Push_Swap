/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpestana <dpestana@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 15:12:28 by dpestana          #+#    #+#             */
/*   Updated: 2022/01/11 17:26:14 by dpestana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

/*
	struct: s_stack

	"int	*value"		-	Value of stack.
	"int	qty"		-	Quantity of stack.
	"int	median"		-	Median of stack values.
*/

typedef struct s_stack
{
	int	*value;
	int	qty;
	int	median;
}	t_stack;

typedef struct s_cost
{
	int	a;
	int b;
	int	final_a;
	int	final_b;
}	t_cost;

/*
	struct: s_stack

	"t_stack	stack_a"		-	Stack A.
	"t_stack	stack_b"		-	Stack B.
	"t_stack	stack_sorted"	-	Stack Sorted.
	"int		output"			-	If "0" = Doesnt shows the single operation executed, shows the group operation, in case of "rr", "rrr", "ss".
									If "1" = Shows the single operation executed, in case of "pa", "pb", "ra", "rb", "rra", "rrb", "sa", "sb".
*/

typedef struct s_stacks
{
	t_stack	a;
	t_stack	b;
	t_stack	sorted_a;
	t_stack	sorted;
	t_cost	cost;
	int		output;
}
t_stacks;

#endif