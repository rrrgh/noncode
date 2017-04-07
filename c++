C++14 thread tutorial
/usr/bin/time xecutbl

Note to self: Possible topics for a hypothetical second episode:
– Thread-local variables
– Memory order declarations
– What the standard says about memory interactions between threads
– What the standard guarantees about when variable changes are committed into RAM
– Clustering
– CPU affinity

Cameras used: Canon EOS 1200D, Canon PowerShot SX110IS
Lens: Tokina AT-X PRO 11-16mm F2.8 DX
Programming footage in: DOSBox
Resampling with: ffmpeg
Video editing in: kdenlive
Audio editing in: audacity & kdenlive
Muxing in: mkvmerge
Production dates: 2015-12-03 through 2016-01-22
Desktop computer is: Raspberry Pi
Secret code: OwjQkUo9Bgk
Compilers used: GCC 5.3.1
Robot is: Nao V4

I want to write a benchmarking tool that creates 2000 ENet connections. Is creating 2000 threads a good idea?
ENet's code structure is more like UDP than TCP http://enet.bespin.org
>Such a high amount of threads as 2000 already creates quite a remarkable overhead I believe. Task switches are not exactly cheap. It is better to use event-based programming and systemcalls like epoll(). More information: http://man7.org/linux/man-pages/man7/epoll.7.html
Or even better: libevent (http://libevent.org/), which works also on that Microsoft thing some have heard about.
What are the pros and cons of ENet versus SCTP?
>Been searching for an answer for quite a while so thank you! Two pros for ENet: has cross-platform abstractions and bindings in various languages. I don't know how either of them work internally so that's all I can tell.

libevent – an event notification library
http://libevent.org/

How cout is printing one line per thread? or how to do the samething using printf?
>In this program, Line() is a function that sets the cursor to a particular line using relative cursor movements only. (Or to be more precise, it generates escape codes, which, when outputted on screen, tell the terminal to move the cursor in such manner, assuming the terminal understands these escape codes.) Each thread, when printing, always begins their print with a call to Line(). That's how they each print to their own dedicated lines.


https://www.youtube.com/watch?v=_z-RS0rXg9s
