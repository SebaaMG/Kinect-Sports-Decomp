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


undefined8 fn_82766450(int *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(*(int *)((param_2 >> 10 & 0x3ffffc) + *(int *)(*param_1 + 0xc)) +
                   (param_2 & 0xfff));
  uVar2 = (int)(char)bVar1 >> 1;
  if ((bVar1 & 1) == 0) {
    *param_3 = uVar2;
    return 1;
  }
  *param_3 = (int)*(char *)(*(int *)((param_2 + 1 >> 10 & 0x3ffffc) + *(int *)(*param_1 + 0xc)) +
                           (param_2 + 1 & 0xfff)) << 7 | uVar2 & 0x7f;
  return 2;
}

