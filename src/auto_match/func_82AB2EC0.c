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
extern int fn_82AB14E0();
extern int fn_82AB1948();


void fn_82AB2EC0(int param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar4;
  ulonglong uVar3;
  uint uVar5;
  int iVar6;
  
  bVar2 = true;
  fn_82AB1948();
  iVar6 = -1;
  uVar5 = 0xffffffff;
  do {
    uVar5 = uVar5 + 1;
    if (((int)uVar5 >> 1) + (uint)((int)uVar5 < 0 && (uVar5 & 1) != 0) == iVar6) {
      return;
    }
    iVar4 = fn_82AB14E0(param_2,0x2d,4);
    switch(iVar4 + -1) {
    case 0:
    case 1:
      iVar4 = fn_82AB14E0(param_2,1,0xc);
      if (iVar6 == -1) {
        iVar6 = iVar4;
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
      bVar2 = false;
      break;
    case 6:
    case 7:
    case 8:
    case 10:
      uVar3 = fn_82AB14E0(param_2,1,0xd);
      uVar1 = (uint)((uVar3 & 0xffffffff) >> 3) & 0x1ffffffc;
      *(uint *)(uVar1 + param_1 + 0x10) =
           1 << ((uint)uVar3 & 0x1f) | *(uint *)(uVar1 + param_1 + 0x10);
    }
    param_2 = param_2 + 6;
  } while (bVar2);
  return;
}

