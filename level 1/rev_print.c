/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkara <bkara@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:08:31 by bkara             #+#    #+#             */
/*   Updated: 2025/09/29 17:06:10 by bkara            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;

	if(argc == 2)
	{
		i = 0;
		while(argv[1][i])
			i++;
		while(--i >= 0)
			write(1, &argv[1][i], 1);

	}
	write(1, "\n", 1);
	return (0);
}
 /* Program 1 string alacak (av[1]).

Onu tersten ekrana yazdıracak.

Sonunda mutlaka \n olacak.

Eğer argüman yoksa ya da fazlaysa → sadece \n.
*/