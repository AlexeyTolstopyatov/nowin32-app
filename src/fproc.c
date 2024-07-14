#include "fproc.h"

int fcatch(char path[])
{
	/*All information about -- header files + markdown documentation*/
	FILE *rat = fopen(path, "rb+");
	

	/*IF FILE returns NULL*/
	if (rat == 0)
	{
		return -1; /* READ ERROR */
	}
	
	unsigned long buffer = FF_SIGNATURE;

	fseek(rat, PE_SIGNATURE, 0);
	fwrite(&buffer, sizeof(buffer), 1, rat);

	fclose(rat);

	return 0;
}
/*
* TODO: pcatch()
* Process hunter. Catches the process from memory -> rewrite magic bytes. -> returns bytes.
*/
