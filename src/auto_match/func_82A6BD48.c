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


longlong fn_82A6BD48(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  
  iVar3 = 0;
  iVar2 = 0;
  if ((2 < *(int *)(param_1 + 0x3c)) && (*(int *)(param_1 + 0xb0) == 0)) {
    uVar6 = (ulonglong)*(ushort *)(param_1 + 0x22);
    if (*(ushort *)(param_1 + 0x22) != 0) {
      iVar4 = 0;
      do {
        psVar1 = *(short **)(*(int *)(iVar4 + *(int *)(param_1 + 0x140) + 0x1a8) + 8);
        iVar7 = (int)psVar1[-1];
        iVar5 = (int)*psVar1;
        if (*(int *)(param_1 + 0x1bc) == 0) {
          if (*(int *)(param_1 + 0x1c0) != 0) {
            iVar5 = iVar5 << (*(uint *)(param_1 + 0x1c8) & 0x3f);
            iVar7 = iVar7 << (*(uint *)(param_1 + 0x1c8) & 0x3f);
          }
        }
        else {
          iVar5 = iVar5 >> (*(uint *)(param_1 + 0x1c8) & 0x3f);
          iVar7 = iVar7 >> (*(uint *)(param_1 + 0x1c8) & 0x3f);
        }
        if (iVar2 < iVar7) {
          iVar2 = iVar7;
        }
        if (iVar3 < iVar5) {
          iVar3 = iVar5;
        }
        iVar4 = iVar4 + 0x6f0;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar8 = iVar2 + iVar3;
    return (longlong)((int)uVar8 >> 1) + (ulonglong)((int)uVar8 < 0 && (uVar8 & 1) != 0);
  }
  return 0;
}

