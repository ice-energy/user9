+++
title        = "Wall-Mounted Desktop"
date         = 2018-05-26T12:19:00
tags         = ["zoneminder","Ubuntu"]
categories   = ["Systems/Solutions"]
description  = "Because every Mad (Computer) Scientist needs their Hardware Wall-Mounted"
draft        = false
banner       = "/user9/img/cover_wallmounted.jpg"
+++






Because every Mad (Computer) Scientist needs their Hardware Wall-Mounted!

---

I put together this computer largely from spare parts and Amazon points from my Amex.
So barely cost anything, and I thought it would be perfect as a server for 
[Zoneminder](https://zoneminder.com/).

This was built with the intention of putting it in an enclosure.   It started out sitting
on my bookshelf, where I used some half-inch standoffs to raise it up.   Here's a pic:

{{< figure src="../img/ontheshelf.jpg" alt="pic1a" >}}

It sat there a few weeks. &nbsp; I looked at a few enclosures, almost threw down on one. &nbsp;  **Then inspiration stuck!**

> right side brain:   Oh Man, That would look **FRIGGIN** awesome up on the wall

> left side brain:    The cables could be arranged so nice and neatly

Both sides agree! and that's what I call Win, Win!!     ;-)

What follows is a list of parts, along with links, pics, and a small amount of commentary.

 &nbsp; &nbsp; And Oh Yeah, That's little brother *Raspberry Pi* next door **(Pi 3 Model B V1.2)**.<br>
 &nbsp; &nbsp; It's running *Ubuntu Core Server 14.04.5 LTS*.    Mainly used as a test platform.

JR

---

# Motherboard

**DQ77KB**  &nbsp; &nbsp; Link here: [dq77kb](https://www.amazon.com/Intel-DQ77KB-Mini-ITX-BLKDQ77KB-1-Pack/dp/B00GJ5H0XK/ref=sr_1_1?ie=UTF8&qid=1527289293&sr=8-1&keywords=dq77kb&dpID=51WruYmhyUL&preST=_SX300_QL70_&dpSrc=srch)

{{< figure src="../img/dq77kb.jpg" alt="pic2" >}}

I worked a year at Intel in the *Digital Signage Lab*, and we used these boards to put systems together.
Everything you need in a very tight package.

---

# CPU

**Intel Core i7-3770K**  &nbsp; &nbsp; Link here: [i7-3770K](https://www.amazon.com/Intel-i7-3770K-Quad-Core-Processor-Cache/dp/B007SZ0EOW)

{{< figure src="../img/i73770K.jpg" alt="pic3" >}}

Quad Core, 8 CPU's.  3.5Ghz.   Folks, this chip is the *Real Deal*.  Get a big(ger) power supply!!  (See below)

The 3770S part is really the ideal part for the board, but the 'K' will still work fine.   My 'K' worked out-of-the
box on the MotherBoard, but then I *upgraded the firmware*.   Don't do that.

> Newer firmware on the DQ77KB will reject the K.  I had to Downgrade the firmware.

---

# Fan

**Thermaltake Engine 27**  &nbsp; &nbsp; Link here: [engine27](https://www.amazon.com/Thermaltake-Engine-Low-Profile-Cooling-CL-P032-CA06SL/dp/B01MCT9V18)

{{< figure src="../img/engine27.jpg" alt="pic4" >}}

This fan is super quiet, and it looks *friggin' awesome*.
A bit pricey, but worth it.

---

# Dram

**Kingston 16Gb Ram**  &nbsp;  Need two 8Gb parts. &nbsp;  Link here:  [Kingston 8Gb](https://www.amazon.com/gp/product/B0089JIDUI/ref=oh_aui_detailpage_o04_s00?ie=UTF8&psc=1)

{{< figure src="../img/dram.jpg" alt="pic5" >}}

This is the max ram for this MotherBoard.  Some of the newer MiniITX's will allow 32Gb.

---

# Disk

**Intel SSD 800Gb** &nbsp; &nbsp; Link here: [SSD Drive](https://www.amazon.com/Intel-S3700-Internal-Solid-State/dp/B00APLB6G6)

{{< figure src="../img/ssdDrive.jpg" alt="pic6" >}}

Holy Cow, Pricey!!  This was a gift from my time at the Signage Lab.   Thank you Ed!!

---

# Power Supply

**19v 180W Dell Power Supply** &nbsp; &nbsp; Link here: [Power Supply](https://www.amazon.com/gp/product/B07D4F2L86/ref=oh_aui_detailpage_o00_s00?ie=UTF8&psc=1)


{{< figure src="../img/powersupply.jpg" alt="pic7" >}}

I got the biggest one I could find.  The key is the Barrel.
The spec for the Barrel is `7.4 * 5.0`.

According to the User Manual, the MotherBoard can handle 12amps, while this power supply
can put out a max of only 9.23amps.   So yeah, the MotherBoard will be fine!

---

# Sata Power Cable

**RaidMax RC-044-O** &nbsp; &nbsp; Link here:  [SataPowerCable](https://www.frys.com/product/9050437?source=google&gclid=EAIaIQobChMIjr6xppqi2wIVBA5pCh36jwUqEAYYASABEgIpqvD_BwE)

{{< figure src="../img/sataPowerCable.jpg" alt="pic8" >}}

I found this cable off-the-shelf at my local Fry's in Phoenix. (about $6)
Looks like they've been discontinued, but you can still get them at Fry's.
I cut my cable down to size to fit the distance between board connector and SSD.
I really like the looks of this cable, and especially like its flexibility.

---

# Sata Data Cable

**Sata Data Cable** &nbsp; &nbsp;  Link here: [SataDataCable](https://www.amazon.com/gp/product/B01KU95BJ0/ref=oh_aui_detailpage_o03_s00?ie=UTF8&psc=1)

{{< figure src="../img/sataDataCable.jpg" alt="pic9" >}}

5 inch cable is about just right for my setup, and maybe I'll need more than 1.

---

# Bluetooth Adapter

**Plugable USB Bluetooth 4.0** &nbsp; &nbsp; Link here:  [bluetooth](https://www.amazon.com/gp/product/B009ZIILLI/ref=oh_aui_detailpage_o01_s00?ie=UTF8&psc=1)

{{< figure src="../img/bluetooth.jpg" alt="picA" >}}

Works great with both my Logitech keyboard (K810), and my Logitech Mouse (MX Master)

---

<br>
<br>

{{< figure src="../img/Wallmounted_825.jpg" alt="picEnd" >}}

<br>
<br>


---


