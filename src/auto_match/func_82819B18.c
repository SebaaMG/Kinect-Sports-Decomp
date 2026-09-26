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


void fn_82819B18(int param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  sVar1 = *(short *)(param_1 + 0x84);
  sVar2 = -1;
  lVar8 = 0;
  while( true ) {
    if (sVar1 == -1) break;
    iVar3 = sVar1 * 0x40 + *(int *)(param_1 + 0x7c);
    lVar5 = (ulonglong)*(uint *)(iVar3 + 0x24) - param_2;
    if (-1 < lVar5) {
      uVar7 = (ulonglong)*(uint *)(iVar3 + 0x20) + param_4;
      if (((param_3 & 0xffff) - 1 & uVar7) != 0) {
        uVar4 = (param_3 & 0xffff) - 1;
        lVar5 = (uVar7 - (uVar4 + uVar7 & ~uVar4)) + lVar5;
      }
      iVar6 = (int)lVar5;
      if ((-1 < iVar6) &&
         (((sVar2 == -1 || (iVar6 < (int)lVar8)) || (((int)lVar8 == iVar6 && (sVar1 < sVar2)))))) {
        lVar8 = lVar5;
        sVar2 = sVar1;
      }
    }
    sVar1 = *(short *)(iVar3 + 0x30);
  }
  return;
}

