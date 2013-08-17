/* 
Copyright (c) 2013, The Linux Foundation. All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/*!
	@file
	ipa_nat_logi.h

	@brief
	This file implements the IPAM log functionality.

	@Author
	

*/

#ifndef IPA_NAT_LOGI_H
#define IPA_NAT_LOGI_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdio.h>
#include <string.h>
#include <syslog.h>

#define PERROR(fmt)   printf("%s:%d %s()", __FILE__, __LINE__, __FUNCTION__);\
                      perror(fmt);

#define IPAERR(fmt, ...) syslog(LOG_ERR, "ERROR: %s:%d %s() " fmt, __FILE__,  __LINE__, __FUNCTION__, ##__VA_ARGS__);\
										     printf("ERR: %s:%d %s() " fmt, __FILE__,  __LINE__, __FUNCTION__, ##__VA_ARGS__);

#ifdef DEBUG
#define IPADBG(fmt, ...) syslog(LOG_DEBUG, "%s:%d %s() " fmt, __FILE__,  __LINE__, __FUNCTION__, ##__VA_ARGS__);\
	                       printf("%s:%d %s() " fmt, __FILE__,  __LINE__, __FUNCTION__, ##__VA_ARGS__);

#define IPADUMP(fmt, ...) syslog(LOG_DEBUG, fmt, ##__VA_ARGS__);\
                          printf(fmt, ##__VA_ARGS__);

#else
#define IPADBG(fmt, ...)
#define IPADUMP(fmt, ...)
#endif


#ifdef __cplusplus
}
#endif

#endif /* IPA_NAT_LOGI_H */