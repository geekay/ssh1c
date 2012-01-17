#include <stdio.h>
#include <libssh/libssh.h>

enum exitcodes {
	ERROR1	= -1,
	SUCCESS	= 0
};

int main (int argc, char * argv[])
{
	ssh_session my_ssh_ses;
	int verb = SSH_LOG_PROTOCOL;
	int port = 22;

	my_ssh_ses = ssh_new();
	if (my_ssh_ses == NULL)
		return (-1);

	ssh_free(my_ssh_ses);
	return 0;
}
