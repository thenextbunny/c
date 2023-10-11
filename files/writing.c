#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * r - Opens a file for reading. The file must exist.
 * r+ Opens a file to update both reading and writing. The file must exist.
 * w - Creates an empty file for writing. If a file with the same name already exists, its content is erased and the file is considered a new empty file.
 * w+ - Creates an empty file for both reading and writing.
 * a - Appends to a file. Writing operations, append data at the end of the file. The file is created if it does not exist.
 * a+ - Opens a file for reading and appending.
 *
 * @cite https://www.tutorialspoint.com/c_standard_library/c_function_fopen.htm
 *
 * Steps:
 * 1. Create a file 🫡
 * 2. Writing 🫡
 * 3. Close 🫡
 */
int main()
{
    FILE *file;

    // Create a file
    file = fopen("writing.txt", "w");

    if (file == NULL)
    {
        perror("Error opening file");
        return (-1);
    }

    // Writing in the file
    fprintf(file, "%s", "Hello world in a file using C!");

    fclose(file);

    return (0);
}