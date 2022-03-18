#if defined _marcdb_included
	#endinput
#endif

#if !defined _samp_included
	#tryinclude <a_samp>
	#if !defined _samp_included
		#error could not locate a_samp.inc file
	#endif
#endif

/* Marco Database System Include */

stock marcdb_remove(filename[])
{
         return fremove(filename);
}

stock marcdb_exists(filename[])
{
          return fexist(filename);
}
