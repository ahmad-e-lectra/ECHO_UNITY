# 0 "test/support/gpio.h"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "test/support/gpio.h"
# 10 "test/support/gpio.h"
# 1 "C:/msys64/ucrt64/lib/gcc/x86_64-w64-mingw32/14.2.0/include/stdint.h" 1 3 4
# 9 "C:/msys64/ucrt64/lib/gcc/x86_64-w64-mingw32/14.2.0/include/stdint.h" 3 4
# 1 "C:/msys64/ucrt64/include/stdint.h" 1 3 4
# 28 "C:/msys64/ucrt64/include/stdint.h" 3 4
# 1 "C:/msys64/ucrt64/include/crtdefs.h" 1 3 4
# 10 "C:/msys64/ucrt64/include/crtdefs.h" 3 4
# 1 "C:/msys64/ucrt64/include/corecrt.h" 1 3 4
# 10 "C:/msys64/ucrt64/include/corecrt.h" 3 4
# 1 "C:/msys64/ucrt64/include/_mingw.h" 1 3 4
# 10 "C:/msys64/ucrt64/include/_mingw.h" 3 4
# 1 "C:/msys64/ucrt64/include/_mingw_mac.h" 1 3 4
# 108 "C:/msys64/ucrt64/include/_mingw_mac.h" 3 4
             
# 117 "C:/msys64/ucrt64/include/_mingw_mac.h" 3 4
             
# 326 "C:/msys64/ucrt64/include/_mingw_mac.h" 3 4
       
# 405 "C:/msys64/ucrt64/include/_mingw_mac.h" 3 4
       
# 11 "C:/msys64/ucrt64/include/_mingw.h" 2 3 4
# 1 "C:/msys64/ucrt64/include/_mingw_secapi.h" 1 3 4
# 12 "C:/msys64/ucrt64/include/_mingw.h" 2 3 4
# 300 "C:/msys64/ucrt64/include/_mingw.h" 3 4
# 1 "C:/msys64/ucrt64/include/vadefs.h" 1 3 4
# 9 "C:/msys64/ucrt64/include/vadefs.h" 3 4
# 1 "C:/msys64/ucrt64/include/_mingw.h" 1 3 4
# 679 "C:/msys64/ucrt64/include/_mingw.h" 3 4
# 1 "C:/msys64/ucrt64/include/sdks/_mingw_ddk.h" 1 3 4
# 680 "C:/msys64/ucrt64/include/_mingw.h" 2 3 4
# 10 "C:/msys64/ucrt64/include/vadefs.h" 2 3 4




#pragma pack(push,_CRT_PACKING)
# 24 "C:/msys64/ucrt64/include/vadefs.h" 3 4
  
# 24 "C:/msys64/ucrt64/include/vadefs.h" 3 4
 typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 103 "C:/msys64/ucrt64/include/vadefs.h" 3 4
#pragma pack(pop)
# 301 "C:/msys64/ucrt64/include/_mingw.h" 2 3 4
# 598 "C:/msys64/ucrt64/include/_mingw.h" 3 4
void __attribute__((__cdecl__)) __debugbreak(void);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void __attribute__((__cdecl__)) __debugbreak(void)
{



  __asm__ __volatile__("int {$}3":);





}
# 619 "C:/msys64/ucrt64/include/_mingw.h" 3 4
void __attribute__((__cdecl__)) __attribute__ ((__noreturn__)) __fastfail(unsigned int code);
extern __inline__ __attribute__((__always_inline__,__gnu_inline__)) void __attribute__((__cdecl__)) __attribute__ ((__noreturn__)) __fastfail(unsigned int code)
{




  __asm__ __volatile__("int {$}0x29"::"c"(code));






  __builtin_unreachable();
}
# 659 "C:/msys64/ucrt64/include/_mingw.h" 3 4
const char *__mingw_get_crt_info (void);
# 11 "C:/msys64/ucrt64/include/corecrt.h" 2 3 4




#pragma pack(push,_CRT_PACKING)
# 35 "C:/msys64/ucrt64/include/corecrt.h" 3 4
__extension__ typedef unsigned long long size_t;
# 45 "C:/msys64/ucrt64/include/corecrt.h" 3 4
__extension__ typedef long long ssize_t;






typedef size_t rsize_t;
# 62 "C:/msys64/ucrt64/include/corecrt.h" 3 4
__extension__ typedef long long intptr_t;
# 75 "C:/msys64/ucrt64/include/corecrt.h" 3 4
__extension__ typedef unsigned long long uintptr_t;
# 88 "C:/msys64/ucrt64/include/corecrt.h" 3 4
__extension__ typedef long long ptrdiff_t;
# 98 "C:/msys64/ucrt64/include/corecrt.h" 3 4
typedef unsigned short wchar_t;







typedef unsigned short wint_t;
typedef unsigned short wctype_t;





typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;
# 138 "C:/msys64/ucrt64/include/corecrt.h" 3 4
typedef __time64_t time_t;
# 430 "C:/msys64/ucrt64/include/corecrt.h" 3 4
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {

  const unsigned short *_locale_pctype;
  int _locale_mb_cur_max;
  unsigned int _locale_lc_codepage;
# 482 "C:/msys64/ucrt64/include/corecrt.h" 3 4
} threadlocinfo;
# 501 "C:/msys64/ucrt64/include/corecrt.h" 3 4
#pragma pack(pop)
# 11 "C:/msys64/ucrt64/include/crtdefs.h" 2 3 4
# 29 "C:/msys64/ucrt64/include/stdint.h" 2 3 4



# 1 "C:/msys64/ucrt64/lib/gcc/x86_64-w64-mingw32/14.2.0/include/stddef.h" 1 3 4
# 1 "C:/msys64/ucrt64/include/stddef.h" 1 3 4
# 18 "C:/msys64/ucrt64/include/stddef.h" 3 4
  __attribute__ ((__dllimport__)) extern int *__attribute__((__cdecl__)) _errno(void);

  errno_t __attribute__((__cdecl__)) _set_errno(int _Value);
  errno_t __attribute__((__cdecl__)) _get_errno(int *_Value);


  __attribute__ ((__dllimport__)) extern unsigned long __attribute__((__cdecl__)) __threadid(void);

  __attribute__ ((__dllimport__)) extern uintptr_t __attribute__((__cdecl__)) __threadhandle(void);
# 2 "C:/msys64/ucrt64/lib/gcc/x86_64-w64-mingw32/14.2.0/include/stddef.h" 2 3 4
# 426 "C:/msys64/ucrt64/lib/gcc/x86_64-w64-mingw32/14.2.0/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 437 "C:/msys64/ucrt64/lib/gcc/x86_64-w64-mingw32/14.2.0/include/stddef.h" 3 4
} max_align_t;
# 33 "C:/msys64/ucrt64/include/stdint.h" 2 3 4


typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned uint32_t;
__extension__ typedef long long int64_t;
__extension__ typedef unsigned long long uint64_t;


typedef signed char int_least8_t;
typedef unsigned char uint_least8_t;
typedef short int_least16_t;
typedef unsigned short uint_least16_t;
typedef int int_least32_t;
typedef unsigned uint_least32_t;
__extension__ typedef long long int_least64_t;
__extension__ typedef unsigned long long uint_least64_t;





typedef signed char int_fast8_t;
typedef unsigned char uint_fast8_t;
typedef short int_fast16_t;
typedef unsigned short uint_fast16_t;
typedef int int_fast32_t;
typedef unsigned int uint_fast32_t;
__extension__ typedef long long int_fast64_t;
__extension__ typedef unsigned long long uint_fast64_t;


__extension__ typedef long long intmax_t;
__extension__ typedef unsigned long long uintmax_t;
# 10 "C:/msys64/ucrt64/lib/gcc/x86_64-w64-mingw32/14.2.0/include/stdint.h" 2 3 4
# 11 "test/support/gpio.h" 2



# 13 "test/support/gpio.h"
void SysCtl_delay(uint32_t count);
void GPIO_writePin(uint32_t pin, uint32_t val);

uint32_t GPIO_readPin(uint32_t pin);
