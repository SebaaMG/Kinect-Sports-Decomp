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
extern int fn_82F68CC0();


void fn_82C2C380(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x1d4) <= *(int *)(param_1 + 0x184)) {
    if (*(int *)(param_1 + 0x1cc) == 0) {
      iVar4 = *(int *)(param_1 + 0x100);
      if (*(int *)(param_1 + 0x1c0) != 0) {
        iVar4 = iVar4 << (*(uint *)(param_1 + 0x1c8) & 0x3f);
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x100) >> (*(uint *)(param_1 + 0x1c8) & 0x3f);
    }
    iVar1 = *(int *)(param_1 + 0x1d4) >> 1;
    iVar5 = 0;
    if (*(short *)(param_1 + 0x22) != 0) {
      uVar2 = iVar4 * 3;
      do {
        lVar3 = (((longlong)(int)(((int)uVar2 >> 1) + (uint)((int)uVar2 < 0 && (uVar2 & 1) != 0)) *
                  (longlong)iVar5 - (longlong)iVar1) + (longlong)(iVar4 >> 1) & 0x3fffffffU) * 4 +
                (ulonglong)*(uint *)(param_1 + 0x144);
        fn_82F68CC0(lVar3,((ulonglong)*(uint *)(param_1 + 0x1d4) & 0x3fffffff) * 4 + lVar3,
                     iVar1 << 2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x22));
    }
    *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) - *(int *)(param_1 + 0x1d4);
    *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1d4);
  }
  return;
}

