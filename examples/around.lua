truncateto = 8

function around_read(fname, d, buf, size)
   io.stderr:write(string.format("Doing an around read with %s(%d, %x, %d).\n", fname, d, buf, size))
   if size > truncateto
   then
      io.stderr:write(string.format("Truncating read of %d to %d\n", size, truncateto))
      size = truncateto
   end
   rv = labrea.invoke(fname, d, buf, size)
   io.stderr:write(string.format("...and returning %d bytes read\n", rv))
   return rv
end

function around_lseek(f, fd, offset, whence)
   io.stderr:write(string.format("Doing a seek on %d of %d from %d\n", fd, offset, whence))
   rv = labrea.invoke(f, fd, offset, whence)
   io.stderr:write(string.format("...returned %d\n", rv))
   return rv
end
