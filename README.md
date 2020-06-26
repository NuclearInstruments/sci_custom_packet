# Usage of FIFO and Custom Packet in SciCompiler

### What is SciCompiler

**SCI(entific) Compiler**  is Windows based software designed to accelerate the firmware implementation for signal processing in scientific instrumentation and is targeted to generate custom applications for nuclear physics world. SCI-Compiler is an  **automatic code generator** that, starting from a graphical block diagram, generates a VHDL peace of code that implements the required function. Moreover, SCI-Compiler is able to generate C libraries and drivers to be used in  **Windows**,  **Linux**  and  **macOS**  for software implementation.

SCI-Compiler uses a prebuilt library set containing macroblocks with complex function. Each macroblock could be imagined as a modular instrument (MCA, Oscilloscope, Digitizer, TDC) that the user could connect with each other.  
Programming with SCI-Compiler is much more similar to implement an experimental setup than developing a software.
***More Info:***
- http://www.scicompiler.cloud
- [https://www.caen.it/products/sci-compiler/](https://www.caen.it/products/sci-compiler/)
	
### Data transfer between acquisition unit FPGA and PC of list of processed data

SciCompiler allows to easy implement FIFO communication to transfer formatted data , like listo of energy, timecode, channels from FPGA to user computer in form of structured packet

There are two way to implement this transfer:
- Using pure FIFO and creating a custom protocol with state machines or arbiters
- Using the Packet generator

We strongly suggest to use packet generator because the tool automatically format data and enqueue it in a FIFO buffer as stream of packets. The structure of the packet can be customized by the user using the Custom Packet tool. Either input channels, timestamp, processed data, constant can be inserted in the packet.

This application note will describe how to implement it in SciCompiler

![enter image description here](https://github.com/NuclearInstruments/sci_custom_packet/raw/master/docs/image_design.png)

[Have a look to the PDF guide to implement step by step the data transfer](https://github.com/NuclearInstruments/sci_custom_packet/raw/master/docs/Usage%20of%20FIFO%20and%20Custom%20Packet%20with%20SciCompiler.pdf)



### Required software
This example has been designed to be compiled with SciCompiler 2020 on R5560 board

 
 
  
