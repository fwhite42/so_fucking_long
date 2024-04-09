void	*memory_alloc(size_t size, char *flags)
{
	void	*chunk;
	
	chunk = alloc(size);
	if (ft_strchr(flags, "v"))
		ft_printf("Malloc-ed buffer of size %p at %p\n", chunk, size);
	if (chunk == NULL)
		error_fatal(0,0);
	if (ft_strchr(flags, "z"))
		ft_bzero(chunk, size);
	return chunk;
}
