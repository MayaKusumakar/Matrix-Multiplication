#ifndef MAT_MULTIPLY_H
#define MAT_MULTIPLY_H

	void get_matrix_dimensions_from_user(char* prompt, int* num_rows, int* num_cols);
	int** make_empty_matrix(int num_rows, int num_cols);
	void fill_matrix_from_user_input(int** matrix, int num_rows, int num_cols);
	int** matrix_multiply(int** matrix_a, int num_rows_a, int num_cols_a,
												int** matrix_b, int num_rows_b, int num_cols_b,
											  int* out_num_rows_c, int* out_num_cols_c);
	void print_matrix(int** matrix, int num_rows, int num_cols);
	void delete_matrix(int*** matrix, int num_rows, int num_cols);

#endif
