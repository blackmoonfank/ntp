/*
   SYNOPSIS
       #include <string.h>

       char *strchr(const char *s, int c);

       char *strrchr(const char *s, int c);

   DESCRIPTION
       The  strchr() function returns a pointer to the first occurrence of the
       character c in the string s.

       The strrchr() function returns a pointer to the last occurrence of  the
       character c in the string s.

       Here  "character"  means "byte" - these functions do not work with wide
       or multi-byte characters.

   RETURN VALUE
       The strchr() and strrchr() functions return a pointer  to  the  matched
       character or NULL if the character is not found.

   CONFORMING TO
       SVID 3, POSIX, BSD 4.3, ISO 9899
*/

char*
strchr( const char *s, int c)
{
    do {
        if ((unsigned)*s == (unsigned)c)
            return s;

    } while (*(++s) != NUL);

    return NULL;
}

char*
strrchr( const char *s, int c)
{
    const char *e = s + strlen(s);

    for (;;) {
        if (--e < s)
            break;

        if ((unsigned)*e == (unsigned)c)
            return e;
    }
    return NULL;
}

/*
 * Local Variables:
 * mode: C
 * c-file-style: "stroustrup"
 * tab-width: 4
 * indent-tabs-mode: nil
 * End:
 * end of compat/strsignal.c */