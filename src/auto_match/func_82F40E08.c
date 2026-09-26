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
extern int fn_82F66FE0();


undefined8 fn_82F40E08(undefined8 param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = *param_2;
  if (((sVar1 != 0) && (sVar1 != -0x101)) && (sVar1 != -2)) {
    do {
      iVar2 = fn_82F66FE0(*param_2);
      if (iVar2 == 0) break;
      param_2 = param_2 + 1;
    } while (*param_2 != 0);
    if (*param_2 == 0) {
      return 0;
    }
  }
  return 1;
}

