#include <Python.h>
#include <stdio.h>

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
	
	PyBytes_AsStringAndSize(p, &buffer, &len);	
	printf("[.] bytes object info\n");
	printf("size: %zd\n", len);
	printf("trying string: %s\n", buffer);
	obj = PyBytes_FromObject(p);
	byte_obj = (PyBytesObject*)obj;
	if (len <= 10)
	{
		printf("first %zd bytes: ", len);
		for(i = 0; i < len; i++)
			printf("%02x ", (unsigned char)byte_obj->ob_sval[i]);
		printf("\n");
	}
	else
	{
		printf("first 10 bytes: ");
		for (i = 0; i < 10; i++)
			printf("%02x ", (unsigned char)byte_obj->ob_sval[i]);
		printf("\n");
	}
		
}
