#include <Python.h>
#include <stdio.h>
#include <string.h>

/**
  *print_python_bytes- print some basic info about Python bytes objects.
  *@p: object
  */
void print_python_bytes(PyObject *p)
{
	Py_ssize_t len, i;
	char * buffer;
	PyObject * obj;
	PyBytesObject * byte_obj;
	
	if (PyBytes_Check(p))
	{	PyBytes_AsStringAndSize(p, &buffer, &len);	
		printf("[.] bytes object info\n");
		printf("  size: %zd\n", len);
		printf("  trying string: %s\n", buffer);
		obj = PyBytes_FromObject(p);
		byte_obj = (PyBytesObject*)obj;
		if (len <= 10)
		{
			printf("  first %zd bytes: ", len + 1);
			for(i = 0; i <= len; i++)
				printf("%02x ", (unsigned char)byte_obj->ob_sval[i]);
			printf("\n");
		}
		else
		{
			printf("  first 6 bytes: ");
			for (i = 0; i < 10; i++)
				printf("%02x ", (unsigned char)byte_obj->ob_sval[i]);
			printf("\n");
		}
	}
	else
	{
		printf("[.] bytes object info\n");
		printf(" [ERROR] Invalid Bytes Object\n");
	}	
}

/**
 *print_python_list - print some basic info about Python list objects
 *@p: object
 */
void print_python_list(PyObject *p)
{
	Py_ssize_t size = PyList_Size(p), i;
	Py_ssize_t alloc = ((PyListObject *)p)->allocated;
	const char * name;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %zd\n", size);
	printf("[*] Allocated = %zd\n", alloc);
	for (i = 0; i < size; i++)
	{
		name = ((PyListObject *)p)->ob_item[i]->ob_type->tp_name;
		if (!(strcmp(name, "bytes")))
		{
			printf("Element %zd: %s\n", i, name);
			print_python_bytes(((PyListObject *)p)->ob_item[i]);
		}
		else
			printf("Element %zd: %s\n", i, name);
	} 
}
