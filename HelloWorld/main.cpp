
#include <ntddk.h>

NTSTATUS CustomDriverEntry(
	_In_ PDRIVER_OBJECT  VinMapperParam1,
	_In_ PUNICODE_STRING VinMapperParam2
)
{
	UNREFERENCED_PARAMETER(VinMapperParam1);
	UNREFERENCED_PARAMETER(VinMapperParam2);
	
	DbgPrintEx(0, 0, "Hello world!");

	return 0;
}