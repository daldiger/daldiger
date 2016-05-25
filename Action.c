Action()
{
	web_set_sockets_option("SSL_CIPHER_LIST", "RC4-MD4");
	
	return 0;
}
