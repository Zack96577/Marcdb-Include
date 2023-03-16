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

stock marcdb_create(filename[])
{
          if(marcdb_exists(filename)) return 0;
          new File:fn;
          fn = fopen(filename, io_write);
          if(fn)
          {
                    fclose(fn);
                    return 1;
          }
          return 0;
}

stock marcdb_writechar(filename[], char[])
{
          new File:fn;
          fn = fopen(filename, io_write);
          if(fn)
          {
                    fputchar(fn, char, false);
                    fclose(fn);
                    return 1;
          }
          return 0;
}

stock marcdb_writeString(filename[], text[])
{
          new File:fn;
	  fn = open(filename, io_write);
	  if(fn)
	  {
	            fwrite(fn, text[]);
		    fclose(fn);
	            return 1;
	  }
          return 0;
}
