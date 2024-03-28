/*
 * The following are specially called from the uaccess assembly stubs.
 */
EXPORT_SYMBOL(__copy_user);
EXPORT_SYMBOL(__do_clear_user);
EXPORT_SYMBOL(__strncpy_from_user);
EXPORT_SYMBOL(__strnlen_user);

/* 
 * SMP-specific symbols.
 */

#ifdef CONFIG_SMP
EXPORT_SYMBOL(_atomic_dec_and_lock);
#endif /* CONFIG_SMP */

/*
 * The following are special because they're not called
 * explicitly (the C compiler or assembler generates them in
 * response to division operations).  Fortunately, their
 * interface isn't gonna change any time soon now, so it's OK
 * to leave it out of version control.
 */
# undef memcpy
# undef memset
EXPORT_SYMBOL(__divl);
EXPORT_SYMBOL(__divlu);
EXPORT_SYMBOL(__divq);
EXPORT_SYMBOL(__divqu);
EXPORT_SYMBOL(__reml);
EXPORT_SYMBOL(__remlu);
EXPORT_SYMBOL(__remq);
EXPORT_SYMBOL(__remqu);
EXPORT_SYMBOL(memcpy);
EXPORT_SYMBOL(memset);
EXPORT_SYMBOL(memchr);
