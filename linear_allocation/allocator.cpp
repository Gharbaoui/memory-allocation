//http://blog.marcinchwedczuk.pl/how-to-check-if-a-number-is-a-power-of-two
class	Allocator
{
	public:
		void	*allocate(size_t size) noexcept
		{
			void	*ptr;

			ptr = NULL;
			if (arena_offset + size <= arena_lenght)
				ptr = arena + size;
			bzero(ptr, size);
			return ptr;
		}
	private:
		bool	is_power_of_two(uintptr_t val)
		{
			return (val & (val - 1));
		}
	private:
		unsigned char	*arena;
		size_t			arena_lenght;
		size_t			arena_offset;
};
