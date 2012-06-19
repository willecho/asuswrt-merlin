#ifndef __LIBRPC_NDR_NDR_COMPRESSION_H__
#define __LIBRPC_NDR_NDR_COMPRESSION_H__

#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2) PRINTF_ATTRIBUTE(a1, a2)
/* This file was automatically generated by mkproto.pl. DO NOT EDIT */

/* this file contains prototypes for functions that are private 
 * to this subsystem or library. These functions should not be 
 * used outside this particular subsystem! */


/* The following definitions come from librpc/ndr/ndr_compression.c  */

enum ndr_err_code ndr_pull_compression_start(struct ndr_pull *subndr,
				    struct ndr_pull **_comndr,
				    enum ndr_compression_alg compression_alg,
				    ssize_t decompressed_len);
enum ndr_err_code ndr_pull_compression_end(struct ndr_pull *subndr,
				  struct ndr_pull *comndr,
				  enum ndr_compression_alg compression_alg,
				  ssize_t decompressed_len);
enum ndr_err_code ndr_push_compression_start(struct ndr_push *subndr,
				    struct ndr_push **_uncomndr,
				    enum ndr_compression_alg compression_alg,
				    ssize_t decompressed_len);
enum ndr_err_code ndr_push_compression_end(struct ndr_push *subndr,
				  struct ndr_push *uncomndr,
				  enum ndr_compression_alg compression_alg,
				  ssize_t decompressed_len);
#undef _PRINTF_ATTRIBUTE
#define _PRINTF_ATTRIBUTE(a1, a2)

#endif /* __LIBRPC_NDR_NDR_COMPRESSION_H__ */
