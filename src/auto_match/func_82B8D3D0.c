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
extern int fn_82AF4968();
extern int fn_82B8B8A0();


void fn_82B8D3D0(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  do {
    uVar4 = param_3;
    uVar3 = uVar4;
    if ((param_5 & 0xff) == 0) {
      do {
        uVar1 = *(uint *)(((uint)uVar3 & 0xfffffffe) + 0x24);
        if (((uVar1 & 1) != 0) || (uVar3 = ((ulonglong)uVar1 & 0xfffffffe) - 0x28, uVar3 == 0)) {
          cVar2 = '\0';
          goto LAB_82b8d438;
        }
      } while ((uVar3 & 0xffffffff) != (param_2 & 0xffffffff));
      cVar2 = '\x01';
    }
    else {
      cVar2 = fn_82AF4968(uVar4,param_2);
    }
LAB_82b8d438:
    if (cVar2 == '\0') {
      fn_82B8B8A0(param_1,param_2,uVar4,param_4,param_5);
      return;
    }
    param_4 = (ulonglong)((param_4 & 0xff) == 0);
    param_3 = param_2;
    param_2 = uVar4;
  } while( true );
}

