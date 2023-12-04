#include <stdlib.h>
#include <stdio.h>
#include <Python.h>
#include <stderr.h>
/**
 * print_python_list_info - Prints some basic info about Python lists.
 * @p: A PyObject list.
 */
void print_python_list_info(PyObject *p)
{
	int size, alloc, i;
	PyObject *obj;

	if (!PyList_Check(p))
    {
        fprintf(stderr, "Invalid argument. Not a Python list.\n");
        return (0);
    }

	size = Py_SIZE(p);
	alloc = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", alloc);

	for (i = 0; i < size; i++)
	{
		printf("Element %d: ", i);

		obj = PyList_GetItem(p, i);

		if (obj == NULL)
        {
            fprintf(stderr, "Error getting item at index %d.\n", i);
            continue (0);
        }

		printf("%s\n", Py_TYPE(obj)->tp_name);
	}
}
