typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82F5E9F8();
extern int fn_82F5EFC0();
extern int fn_82F5F5E8();
extern int fn_82F5FD20();


bool fn_82F60010(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = fn_82F5E9F8();
  if ((((cVar1 != '\0') && (cVar1 = fn_82F5EFC0(param_1,0), cVar1 != '\0')) &&
      (cVar1 = fn_82F5EFC0(param_1,1), cVar1 != '\0')) &&
     ((cVar1 = fn_82F5F5E8(param_1,0), cVar1 != '\0' &&
      (cVar1 = fn_82F5F5E8(param_1,1), cVar1 != '\0')))) {
    cVar1 = fn_82F5FD20(param_1);
    return cVar1 != '\0';
  }
  return false;
}

