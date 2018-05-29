---
title: "CDC3_Host"
date: 2018-05-23T15:52:28-07:00
draft: false
thumbnail: "/user9/img/cover_CDC3Host.jpg"
tags:
  - "zmq"
  - "linux"
categories:
  - "Development"
description: "This document describes the architecture of the
*CDC3 Host Interface*, where the platform for execution is a Linux box.
'Interface' is a physical USB connection between the Linux box and the
CDC3 Control Processor"
menu: main
---

**Quick Summary**  This document describes the architecture of the
*CDC3 Host Interface*, where the platform for execution is a Linux box.
'Interface' is a physical USB connection between the Linux box and the
CDC3 Control Processor.

The Host Interface implements a fairly standard
packet exchange mechanism, where data packets of size LESS THAN 256
are exchanged with the CDC3 Processor.

---

# serial_recv Module

The serial_recv Module accepts input packets from the CDC3 Processor,
and then routes them forward to other modules to do the actual work
that is requested.

From a programming perspective, input coming from USB is a simple byte
stream.   *serial_recv* takes this byte input stream and makes data packets
out of them.   The incoming byte stream looks like this:

```
        0xAA       Start of Packet
        0x57       Start of Packet
        Cmd        Cmd Byte
        Len        Len of Data only, 254 bytes max
        tag        a sequnce number
        csum       checksum
        data[0]
        ..
        ..
        data[len-1]
```

*serial_recv* will very slightly modify this input packet to produce a packet
that will be forwarded on.    Here is the version of the packet that is
forwarded on:


```
        Cmd        Cmd Byte
        Len        Len of Data only, 254 bytes max
        data[0]
        ..
        ..
        data[len-1]
```

There are 2 destinations for the packets which have been received.
The *Cmd* field is used to determine the packet destination.

- 1.  Packet_Handler:     data log packets, request type packets
- 2.  Response_Handler:   response to host query





