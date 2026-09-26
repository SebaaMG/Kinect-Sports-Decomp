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
extern int fn_82AEB338();
extern int fn_82AF4968();
extern int fn_82B8D3D0();


void fn_82B8D488(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = fn_82AEB338(param_2);
  if (cVar2 != '\0') {
    uVar3 = param_3;
    if ((param_4 & 0xff) == 0) {
      do {
        uVar1 = *(uint *)(((uint)uVar3 & 0xfffffffe) + 0x24);
        if (((uVar1 & 1) != 0) || (uVar3 = ((ulonglong)uVar1 & 0xfffffffe) - 0x28, uVar3 == 0)) {
          cVar2 = '\0';
          goto LAB_82b8d4f8;
        }
      } while ((uVar3 & 0xffffffff) != (param_2 & 0xffffffff));
      cVar2 = '\x01';
    }
    else {
      cVar2 = fn_82AF4968(param_3,param_2);
    }
LAB_82b8d4f8:
    if (cVar2 == '\0') {
      fn_82B8D3D0(param_1,param_2,param_3,1,param_4);
    }
  }
  return;
}

