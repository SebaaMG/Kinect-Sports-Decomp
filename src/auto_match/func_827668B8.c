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
extern unsigned int lbl_82014C50;


longlong fn_827668B8(int *param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *(byte *)(*(int *)((param_2 >> 10 & 0x3ffffc) + *(int *)(*param_1 + 0xc)) +
                   (param_2 & 0xfff));
  *param_3 = bVar1;
  bVar1 = (&lbl_82014C50)[bVar1 & 0xf];
  for (uVar2 = (ulonglong)bVar1; uVar2 != 0; uVar2 = uVar2 - 1) {
    param_2 = param_2 + 1;
    param_3 = param_3 + 1;
    *param_3 = *(byte *)(*(int *)((param_2 >> 10 & 0x3ffffc) + *(int *)(*param_1 + 0xc)) +
                        (param_2 & 0xfff));
  }
  return (ulonglong)bVar1 + 1;
}

