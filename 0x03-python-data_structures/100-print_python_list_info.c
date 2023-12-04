#include <Python.h>

/**
 * print_python_list_info - Prints basic info about Python lists.
 * @p: A PyObject list.
 */
void print_python_list_info(PyObject *p)
{
    int size, i;
    PyObject *obj;

    if (!PyList_Check(p))
    {
        fprintf(stderr, "Invalid argument. Not a Python list.\n");
        return;
    }

    size = Py_SIZE(p);

    printf("[*] Size of the Python List = %d\n", size);

    printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

    for (i = 0; i < size; i++)
    {
        obj = PyList_GetItem(p, i);

        if (obj == NULL)
        {
            fprintf(stderr, "Error getting item at index %d.\n", i);
            continue;
        }

        printf("Element %d: %s\n", i, Py_TYPE(obj)->tp_name);
    }
}
