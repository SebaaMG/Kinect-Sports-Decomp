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


void fn_825737F0(int *param_1)

{
  short sVar1;
  undefined4 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar4 = (ulonglong)*(ushort *)(param_1 + 1) - 1;
  if (-1 < (longlong)uVar4) {
    lVar3 = (uVar4 & 0x3fffffff) << 2;
    do {
      if ((*(int *)((int)lVar3 + *param_1) == 0) &&
         (sVar1 = *(short *)(param_1 + 1), *(ushort *)(param_1 + 1) = sVar1 - 1U, uVar5 = uVar4,
         lVar6 = lVar3, (int)uVar4 < (int)(uint)(ushort)(sVar1 - 1U))) {
        do {
          uVar5 = uVar5 + 1;
          puVar2 = (undefined4 *)((int)lVar6 + *param_1);
          *puVar2 = puVar2[1];
          lVar6 = lVar6 + 4;
        } while ((int)uVar5 < (int)(uint)*(ushort *)(param_1 + 1));
      }
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (longlong)uVar4);
    return;
  }
  return;
}

