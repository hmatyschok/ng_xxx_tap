# $FreeBSD: releng/11.1/sys/modules/vte/Makefile 319182 2017-05-30 04:11:12Z ngie $

.PATH: ${SRCTOP}/sys/dev/vte

KMOD=	if_vte
SRCS=	if_vte.c device_if.h bus_if.h pci_if.h miibus_if.h
SRCS+= 	opt_netgraph.h

opt_netgraph.h:
	echo "#define NETGRAPH 1" > ${.TARGET}

.include <bsd.kmod.mk>
