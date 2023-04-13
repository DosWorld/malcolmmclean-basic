# MiniBasic By Malcolm Mclean

MiniBasic is designed as a simple programming language, based on BASIC.
If you already know BASIC then you are well on your way to learning
MiniBasic, if you don't then MiniBasic is one of the simplest programming
languages to learn.

MiniBasic programs are written in ASCII script. They are then interpreted
by the computer. This is in contrast to most "serious" languages, which are
compiled, that is, translated into machine instructions and then run.
Interpreted languages are slower than compiled languages, but they have several
advantages. One major one is that they are portable a MiniBasic script will
run on any computer that has a MiniBasic interpreter installed.
Another advantage, especially for beginners, is that errors are much easier
to identify. Finally, MiniBasic is not really intended as a standalone program,
except for teaching purposes. It is meant for incorporation into other
products, where the user is expected to provide functions in a general-purpose
programming language. An example might be a desk calculator which can be
extended to provide user-defined functions like the Fibonnaci series, or an
adventure game for which the user can design his own levels.
For technical reasons, this is much easier to implement as an interpreted
rather than a compiled language.

One design goal of MiniBasic was that it should be easy to learn. Millions
of people already know some BASIC from school or through having a microcomputer
in the 1980s. The second design goal was that it should be easy to implement.
The interpreter is written in portable ANSI C, and is freely available. It is
in a single, reasonable-length source, and is available for incorporation into
user programs.

The final goal is that the interpreter should be what is technically known as
"Turing equivalent". This means that it is possible to implement any algorithm
in MiniBasic. This required one major extension to common Basic the ability
to redimension arrays.

It is impossible to implement graphics commands in portable ANSI C, so sound,
graphics, and mice are not supported in MiniBasic. Interaction with the user
in the standalone model is via the console.
However, where MiniBasic is incorporated into another program, generally there
will not be direct interaction with the user. The caller will create temporary
files for input and output, fill an input stream, and pass it to the
user-defined MiniBasic function for processing.

# License

You can do virtually anything you like with this code, including incorporating
it into your own programs, or modifying as the basis for a scripting language
of your own. It would be nice to be acknowledged but I don't insist on it - you
can pretend that you created the program on your own if it makes your boss
happy.

The only thing you can't do is restrict my rights in the program in any way.
So any derivative works or enhancements I can use as I see fit.

