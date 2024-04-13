void	*render_destroy(self)
{
	render_destroy_database(self);
	free(self);
}
