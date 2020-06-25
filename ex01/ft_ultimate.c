/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thmoloi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:46:54 by thmoloi           #+#    #+#             */
/*   Updated: 2020/06/25 14:07:01 by thmoloi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

	int main()
  {
  int a;
  int *ptr;
  int **ptr2;
  int ***ptr3;
  int ****ptr4;
  int *****ptr5;
  int ******ptr6;
  int *******ptr7;
  int ********ptr8;

  a = 7;
  ptr = &a;
  ptr2 = &ptr;
  ptr3 = &ptr2;
  ptr4 = &ptr3;
  ptr5 = &ptr4;
  ptr6 = &ptr5;
  ptr7 = &ptr6;
  ptr8 = &ptr7;

  ft_ultimate_ft(&ptr8);
  printf("%d\n", ********ptr8);
  return (0);
  }

