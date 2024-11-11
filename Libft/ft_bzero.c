/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzanana <mzanana@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:31:43 by mzanana           #+#    #+#             */
/*   Updated: 2024/11/11 03:01:14 by mzanana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *str;

	str = (unsigned char *) (s);
	ft_memset(str, 0, n);
}
#include <strings.h> // For bzero
#include <stdio.h>   // For printf

void print_array(const char *label, char *arr, size_t size) {
    printf("%s: ", label);
    for (size_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Test function
void test_bzero(size_t n) {
    char arr_ft[20];
    char arr_std[20];

    // Fill both arrays with non-zero values
    ft_memset(arr_ft, 1, 20);
    ft_memset(arr_std, 1, 20);

    // Apply ft_bzero and standard bzero
    ft_bzero(arr_ft, n);
    bzero(arr_std, n);

    // Print results
    printf("Test with n = %zu\n", n);
    print_array("ft_bzero", arr_ft, 20);
    print_array("bzero   ", arr_std, 20);
    printf("\n");
}

// Main function to run 20 test cases
int main() {
    // Run tests with different sizes and edge cases
    test_bzero(0);          // Edge case: zero bytes
    test_bzero(1);          // Minimal case
    test_bzero(2);          // Small case
    test_bzero(5);          // Random small number
    test_bzero(10);         // Half of the array size
    test_bzero(20);         // Full array size

    // Additional random and edge cases
    test_bzero(3);          // Small number
    test_bzero(15);         // Close to full array but not full
    test_bzero(19);         // Just one less than the array size
    test_bzero(6);          // Small number
    test_bzero(8);          // Small number
    test_bzero(9);          // Small number
    test_bzero(12);         // Over half of the array
    test_bzero(18);         // Near-full array
    test_bzero(7);          // Random small number
    test_bzero(13);         // Random near-half
    test_bzero(17);         // Random near-full
    test_bzero(4);          // Small number
    test_bzero(11);         // Over half but less than full
    test_bzero(14);         // Close to three-quarters

    return 0;
}
