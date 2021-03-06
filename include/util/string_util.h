/*Copyright (c) <2020>, <Huawei Technologies Co., Ltd>
 * All rights reserved.
 * &Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 1. Redistributions of source code must retain the above copyright notice, this list of
 * conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice, this list
 * of conditions and the following disclaimer in the documentation and/or other materials
 * provided with the distribution.
 * 3. Neither the name of the copyright holder nor the names of its contributors may be used
 * to endorse or promote products derived from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 *
 * */

#ifndef INCLUDE_UTIL_STRING_UTIL_H_
#define INCLUDE_UTIL_STRING_UTIL_H_

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
#undef size_t
#ifdef _WIN64
typedef unsigned long long size_t;
#else
typedef unsigned int size_t;
#endif /* _WIN64 */
#endif /* _SIZE_T_DEFINED */

#define SUB_STERING_MAX_LENGTH 	20
#define EVENT_TIME_LENGTH 		16
#define CLIENT_TIME_LENGTH 		10

int StringLength(char *str);
char* StrInStr(const char *_Str, const char *_SubStr);
int String2Int(const char *value);
void* StrMemSet(void *_Dst, int _Val, size_t _Size);
void MemFree(char **str);
char* CombineStrings(int strAmount, char *str1, ...);
void StringMalloc(char **str, int length);
int CopyStrValue(char **dst, const char *src, int length);
char* GetClientTimesStamp(void);
size_t ConstStringLength(const char *_Str);
char* GetEventTimesStamp(void);
int GetSubStrIndex(const char *str, const char *substr);

#endif /* INCLUDE_UTIL_STRING_UTIL_H_ */
