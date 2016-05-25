Action()
{
	web_set_sockets_option("SSL_CIPHER_LIST", "RC4-MD5");
	
	return 0;
}
