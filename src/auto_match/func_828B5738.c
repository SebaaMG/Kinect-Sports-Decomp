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


undefined8 fn_828B5738(short *param_1,short *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  if ((*(char *)((int)param_1 + 7) != *(char *)((int)param_2 + 7)) ||
     (bVar1 = true, *param_1 != *param_2)) {
    bVar1 = false;
  }
  if ((!bVar1) || (bVar1 = true, param_1[1] != param_2[1])) {
    bVar1 = false;
  }
  if ((!bVar1) || (uVar2 = 1, param_1[2] != param_2[2])) {
    uVar2 = 0;
  }
  return uVar2;
}

