#include <libssh/libssh.h>
#include <stdio.h>
int main (int argc, char * argv[])
{
// parametres
	char hostname[15];
	unsigned int portnum;
	char username[15];
	char password[15];
	int verbosity = SSH_LOG_PROTOCOL;

	ssh_session my_ssh;

	printf ("hostname = %s\n", hostname);
	printf ("port number = %d\n", portnum);
	printf ("username = %s\n", username);
	printf ("password = %s\n", password);
	printf ("verbosity = %d\n", verbosity);

	printf("Press any key to connect with these params\n");

// opening session
	my_ssh = ssh_new();
	if (my_ssh == NULL)
		return -1;
	printf ("session opened\n");

// settings
	ssh_options_set(my_ssh, SSH_OPTIONS_HOST, hostname);
	ssh_options_set(my_ssh, SSH_OPTIONS_VERBOSITY, &verbosity);
	ssh_options_set(my_ssh, SSH_OPTIONS_PORT, &port);
//	ssh_options_set(my_ssh, SSH_OPTIONS_HOST, hostname);
//	ssh_options_set(my_ssh, SSH_OPTIONS_HOST, hostname);

// closing session	
	ssh_free(my_ssh);
	printf ("session closed\n");


	return 0;
}

