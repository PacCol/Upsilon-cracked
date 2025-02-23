/* In the standard MicroPython build system, this file is autogenerated from the
 * reset of the sources and called qstrdefs.preprocessed.h. We're bypassing this
 * step in our build system, so if you need a QSTR just add it below.
 *
 * How to update this file with a new MicroPython release
 * - Get a clean copy of MicroPython
 * - Copy our mpconfigport.h over the "bare-arm" port of MicroPython
 * - "make" the bare-arm port of MicroPython (don't worry if it doesn't finish)
 * - "cat build/genhdr/qstrdefs.preprocessed.h|grep '^Q'|uniq". CAUTION: the
 *   order is important, don't sort.
 * - Insert the result below in the MicroPython QSTRs section
 * - remove "QSTR(urandom)" as we renamed it to random
 * - remove "QSTR(usys)" as we renamed it to sys */

// Global configuration
QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (2))

// MicroPython QSTRs
Q()
Q(*)
Q(_)
Q(/)
Q(%#o)
Q(%#x)
Q({:#b})
Q( )
Q(\n)
Q(maximum recursion depth exceeded)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)
Q(ArithmeticError)
Q(AssertionError)
Q(AttributeError)
Q(BaseException)
Q(EOFError)
Q(Ellipsis)
Q(Exception)
Q(GeneratorExit)
Q(ImportError)
Q(IndentationError)
Q(IndexError)
Q(KeyError)
Q(KeyboardInterrupt)
Q(LookupError)
Q(MemoryError)
Q(NameError)
Q(NoneType)
Q(NotImplementedError)
Q(OSError)
Q(OverflowError)
Q(RuntimeError)
Q(StopIteration)
Q(SyntaxError)
Q(SystemExit)
Q(TypeError)
Q(UnicodeError)
Q(ValueError)
Q(ZeroDivisionError)
Q(_0x0a_)
Q(__abs__)
Q(__add__)
Q(__and__)
Q(__bool__)
Q(__build_class__)
Q(__call__)
Q(__class__)
Q(__contains__)
Q(__delitem__)
Q(__dir__)
Q(__divmod__)
Q(__enter__)
Q(__eq__)
Q(__exit__)
Q(__floordiv__)
Q(__ge__)
Q(__getattr__)
Q(__getitem__)
Q(__gt__)
Q(__hash__)
Q(__iadd__)
Q(__import__)
Q(__init__)
Q(__int__)
Q(__invert__)
Q(__isub__)
Q(__iter__)
Q(__le__)
Q(__len__)
Q(__lshift__)
Q(__lt__)
Q(__main__)
Q(__matmul__)
Q(__mod__)
Q(__module__)
Q(__mul__)
Q(__name__)
Q(__ne__)
Q(__neg__)
Q(__new__)
Q(__next__)
Q(__or__)
Q(__path__)
Q(__pos__)
Q(__pow__)
Q(__qualname__)
Q(__repl_print__)
Q(__repr__)
Q(__reversed__)
Q(__rshift__)
Q(__setitem__)
Q(__str__)
Q(__sub__)
Q(__traceback__)
Q(__truediv__)
Q(__xor__)
Q(_brace_open__colon__hash_b_brace_close_)
Q(_lt_dictcomp_gt_)
Q(_lt_genexpr_gt_)
Q(_lt_lambda_gt_)
Q(_lt_listcomp_gt_)
Q(_lt_module_gt_)
Q(_lt_setcomp_gt_)
Q(_lt_string_gt_)
Q(_percent__hash_o)
Q(_percent__hash_x)
Q(_space_)
Q(_star_)
Q(abs)
Q(acos)
Q(acosh)
Q(add)
Q(all)
Q(any)
Q(append)
Q(args)
Q(asin)
Q(asinh)
Q(atan)
Q(atan2)
Q(atanh)
Q(bin)
Q(bool)
Q(bound_method)
Q(builtins)
Q(bytearray)
Q(bytecode)
Q(bytes)
Q(callable)
Q(ceil)
Q(choice)
Q(chr)
Q(classmethod)
Q(clear)
Q(close)
Q(closure)
Q(cmath)
Q(complex)
Q(const)
Q(copy)
Q(copysign)
Q(cos)
Q(cosh)
Q(count)
Q(default)
Q(degrees)
Q(deleter)
Q(dict)
Q(dict_view)
Q(difference)
Q(difference_update)
Q(dir)
Q(discard)
Q(divmod)
Q(doc)
Q(e)
Q(end)
Q(endswith)
Q(enumerate)
Q(erf)
Q(erfc)
Q(errno)
Q(eval)
Q(exec)
Q(exp)
Q(expm1)
Q(extend)
Q(fabs)
Q(factorial)
Q(filter)
Q(find)
Q(float)
Q(floor)
Q(fmod)
Q(format)
Q(frexp)
Q(from_bytes)
Q(fromkeys)
Q(frozenset)
Q(function)
Q(gamma)
Q(generator)
Q(get)
Q(getattr)
Q(getrandbits)
Q(getter)
Q(globals)
Q(hasattr)
Q(hash)
Q(heap_lock)
Q(heap_unlock)
Q(hex)
Q(id)
Q(imag)
Q(index)
Q(input)
Q(insert)
Q(int)
Q(intersection)
Q(intersection_update)
Q(isalpha)
Q(isdigit)
Q(isdisjoint)
Q(isfinite)
Q(isinf)
Q(isinstance)
Q(islower)
Q(isnan)
Q(isspace)
Q(issubclass)
Q(issubset)
Q(issuperset)
Q(isupper)
Q(items)
Q(iter)
Q(iterator)
Q(join)
Q(kbd_intr)
Q(key)
Q(keys)
Q(ldexp)
Q(len)
Q(lgamma)
Q(list)
Q(little)
Q(locals)
Q(log)
Q(log10)
Q(log2)
Q(lower)
Q(lstrip)
Q(map)
Q(math)
Q(max)
Q(maximum_space_recursion_space_depth_space_exceeded)
Q(micropython)
Q(min)
Q(modf)
Q(module)
Q(next)
Q(object)
Q(oct)
Q(open)
Q(opt_level)
Q(ord)
Q(pend_throw)
Q(phase)
Q(pi)
Q(polar)
Q(pop)
Q(popitem)
Q(pow)
Q(print)
Q(property)
Q(pystack_space_exhausted)
Q(pystack_use)
Q(radians)
Q(randint)
Q(random)
Q(randrange)
Q(range)
Q(real)
Q(rect)
Q(remove)
Q(replace)
Q(repr)
Q(reverse)
Q(reversed)
Q(rfind)
Q(rindex)
Q(round)
Q(rsplit)
Q(rstrip)
Q(seed)
Q(send)
Q(sep)
Q(set)
Q(setattr)
Q(setdefault)
Q(setter)
Q(sin)
Q(sinh)
Q(slice)
Q(sort)
Q(sorted)
Q(split)
Q(sqrt)
Q(start)
Q(startswith)
Q(staticmethod)
Q(step)
Q(stop)
Q(str)
Q(strip)
Q(sum)
Q(super)
Q(symmetric_difference)
Q(symmetric_difference_update)
Q(tan)
Q(tanh)
Q(throw)
Q(to_bytes)
Q(trunc)
Q(tuple)
Q(type)
Q(uniform)
Q(union)
Q(update)
Q(upper)
Q(random)
Q(value)
Q(values)
Q(zip)

  // Ion QSTR
Q(get_keys)
Q(ion)
Q(keydown)
Q(battery)
Q(battery_level)
Q(battery_ischarging)
Q(set_brightness)
Q(get_brightness)
Q(set_led_color)
Q(KEY_LEFT)
Q(KEY_UP)
Q(KEY_DOWN)
Q(KEY_RIGHT)
Q(KEY_OK)
Q(KEY_BACK)
Q(KEY_HOME)
Q(KEY_ONOFF)
Q(KEY_SHIFT)
Q(KEY_ALPHA)
Q(KEY_XNT)
Q(KEY_VAR)
Q(KEY_TOOLBOX)
Q(KEY_BACKSPACE)
Q(KEY_EXP)
Q(KEY_LN)
Q(KEY_LOG)
Q(KEY_IMAGINARY)
Q(KEY_COMMA)
Q(KEY_POWER)
Q(KEY_SINE)
Q(KEY_COSINE)
Q(KEY_TANGENT)
Q(KEY_PI)
Q(KEY_SQRT)
Q(KEY_SQUARE)
Q(KEY_SEVEN)
Q(KEY_EIGHT)
Q(KEY_NINE)
Q(KEY_LEFTPARENTHESIS)
Q(KEY_RIGHTPARENTHESIS)
Q(KEY_FOUR)
Q(KEY_FIVE)
Q(KEY_SIX)
Q(KEY_MULTIPLICATION)
Q(KEY_DIVISION)
Q(KEY_ONE)
Q(KEY_TWO)
Q(KEY_THREE)
Q(KEY_PLUS)
Q(KEY_MINUS)
Q(KEY_ZERO)
Q(KEY_DOT)
Q(KEY_EE)
Q(KEY_ANS)
Q(KEY_EXE)

// Kandinsky QSTRs
Q(kandinsky)
Q(color)
Q(draw_line)
Q(draw_string)
Q(draw_circle)
Q(fill_rect)
Q(fill_circle)
Q(fill_polygon)
Q(get_pixel)
Q(set_pixel)
Q(large_font)
Q(small_font)
Q(wait_vblank)
Q(get_palette)

Q(PrimaryText)
Q(SecondaryText)
Q(AccentText)
Q(Toolbar)
Q(HomeBackground)

// Keys QSTRs
Q(left)
Q(up)
Q(down)
Q(right)
Q(OK)
Q(back)

Q(home)
Q(onOff)
Q(shift)
Q(alpha)
Q(xnt)
Q(var)
Q(toolbox)
Q(backspace)

Q(exp)
Q(ln)
Q(log)
Q(imaginary)
Q(comma)
Q(power)

Q(sin)
Q(cos)
Q(tan)
Q(pi)
Q(sqrt)
Q(square)

Q(7)
Q(8)
Q(9)
Q(()
Q())

Q(4)
Q(5)
Q(6)
Q(*)
Q(/)

Q(1)
Q(2)
Q(3)
Q(+)
Q(-)

Q(0)
Q(.)
Q(EE)
Q(Ans)
Q(EXE)

// Matplotlib QSTRs
Q(arrow)
Q(axis)
Q(bar)
Q(c)
Q(grid)
Q(grid)
Q(head_width)
Q(hist)
Q(plot)
Q(matplotlib)
Q(matplotlib.pyplot)
Q(pyplot)
Q(scatter)
Q(show)
Q(text)

// Turtle QSTRs
Q(turtle)
Q(forward)
Q(fd)
Q(backward)
Q(bk)
Q(back)
Q(right)
Q(rt)
Q(left)
Q(lt)
Q(goto)
Q(setpos)
Q(setposition)
Q(setheading)
Q(seth)
Q(circle)
Q(speed)
Q(position)
Q(pos)
Q(heading)
Q(pendown)
Q(pd)
Q(down)
Q(penup)
Q(pu)
Q(up)
Q(pensize)
Q(width)
Q(isdown)
Q(pencolor)
Q(reset)
Q(showturtle)
Q(st)
Q(hideturtle)
Q(ht)
Q(isvisible)
Q(colormode)

// utime QSTRs
Q(localtime)
Q(mktime)
Q(time)
Q(setlocaltime)
Q(setrtcmode)
Q(sleep)
Q(rtcmode)
Q(monotonic)

// file QSTRs
Q(file)

Q(close)
Q(closed)
Q(flush)
Q(isatty)
Q(readable)
Q(readline)
Q(readlines)
Q(seekable)
Q(tell)
Q(writable)
Q(writelines)

Q(fileno)
Q(seek)
Q(truncate)

Q(write)

Q(read)

Q(name)
Q(mode)

Q(SEEK_SET)
Q(SEEK_CUR)
Q(SEEK_END)

// os QSTRs
Q(os)
Q(uname)
Q(getlogin)
Q(sysname)
Q(nodename)
Q(release)
Q(version)
Q(machine)
Q(username)
Q(rename)
Q(listdir)

#if defined(INCLUDE_ULAB)
// ulab QSTRs
Q(reduced)
Q(qr)
Q(flat)
Q(flatiter)
Q(threshold)
Q(edgeitems)
Q(inplace)
Q(dtype)
Q(order)
Q(C)
Q(shape)
Q(strides)
Q(itemsize)
Q(size)
Q(T)
Q(x)
Q(dx)
Q(fft)
Q(ifft)
Q(a)
Q(v)
Q(linalg)
Q(cholesky)
Q(det)
Q(eig)
Q(inv)
Q(norm)
Q(n)
Q(ddof)
Q(numpy)
Q(ndarray)
Q(array)
Q(frombuffer)
Q(inf)
Q(nan)
Q(uint8)
Q(int8)
Q(uint16)
Q(int16)
Q(set_printoptions)
Q(get_printoptions)
Q(ndinfo)
Q(arange)
Q(compress)
Q(concatenate)
Q(delete)
Q(diag)
Q(empty)
Q(eye)
Q(interp)
Q(trapz)
Q(full)
Q(linspace)
Q(logspace)
Q(ones)
Q(zeros)
Q(clip)
Q(equal)
Q(not_equal)
Q(maximum)
Q(minimum)
Q(where)
Q(convolve)
Q(argmax)
Q(argmin)
Q(argsort)
Q(cross)
Q(diff)
Q(dot)
Q(decimals)
Q(otypes)
Q(solve_triangular)
Q(cho_solve)
Q(trace)
Q(flip)
Q(mean)
Q(median)
Q(roll)
Q(std)
Q(polyfit)
Q(polyval)
Q(arctan2)
Q(around)
Q(vectorize)
Q(xtol)
Q(maxiter)
Q(xatol)
Q(fatol)
Q(tol)
Q(rtol)
Q(scipy)
Q(optimize)
Q(signal)
Q(bisect)
Q(special)
Q(fmin)
Q(newton)
Q(sos)
Q(zi)
Q(spectrogram)
Q(sosfilt)
Q(gammaln)
Q(reshape)
Q(transpose)
Q(byteswap)
Q(flatten)
Q(k)
Q(tobytes)
Q(tolist)
Q(M)
Q(ulab)
Q(num)
Q(endpoint)
Q(__version__)
Q(utils)
Q(retstep)
Q(base)
Q(offset)
Q(out)
Q(from_int16_buffer)
Q(from_uint16_buffer)
Q(from_int32_buffer)
Q(from_uint32_buffer)
#endif

#if MICROPY_PY_SYS
// sys QSTRs
Q(sys)
Q(info)
Q(implementation)
Q(byteorder)
Q(exit)
Q(modules)
Q(print_exception)
Q(version_info)
#endif