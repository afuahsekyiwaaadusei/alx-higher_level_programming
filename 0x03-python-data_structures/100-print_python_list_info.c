#include <Python.h>
#include <stdio.h>

/**
 * print_python_list_info - prints some basic info about Python lists.
 * @p: list object
 */
void print_python_list_info(PyObject *p)
{
	PyListObject *lst = (PyListObject*)(p);
	Py_ssize_t allocated_slots = lst->allocated;

	printf("Number of allocated slots: %zd\n", allocated_slots)

}
