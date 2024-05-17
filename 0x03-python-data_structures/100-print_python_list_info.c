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
	Py_ssize_t size = PyList_Size(p);
	PyObject ** item = lst->ob_item;
	struct _typeobject *type = Py_TYPE(p);
	Py_ssize_t i;

	printf("[*] Size of the Python List =  %zd\n", size);
	printf("[*] Allocated = %zd\n", allocated_slots);
	for (i = 0; i < size; i++)
	{
		type = Py_TYPE(item[i]);		
		printf("Element %zd: %s\n", i, type->tp_name);
	}
}
