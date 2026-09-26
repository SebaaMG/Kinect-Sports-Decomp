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
extern int fn_82D94918();


undefined1 * fn_82D82418(undefined1 *param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_2 + 0x20);
  bVar4 = 0;
  if (iVar2 != 0) {
    uVar1 = *(uint *)(iVar2 + 0x4c);
    iVar7 = 0;
    if (0 < (int)uVar1) {
      do {
        if ((iVar7 != 0) || (*(int *)(**(int **)(iVar2 + 0x48) + 0x10) != 0)) {
          fn_82D94918(param_3,*(undefined4 *)(iVar7 * 4 + *(int *)(iVar2 + 0x48)));
        }
        uVar1 = *(uint *)(iVar2 + 0x4c);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar1);
    }
    bVar4 = (byte)((byte)(-(ulonglong)uVar1 >> 0x18) & ~(byte)(uVar1 >> 0x18)) >> 7;
  }
  iVar2 = *(int *)(param_2 + 0x38);
  piVar5 = *(int **)(param_2 + 0x34);
  if (piVar5 != piVar5 + iVar2) {
    do {
      iVar2 = *piVar5;
      iVar7 = 0;
      if (0 < *(int *)(iVar2 + 0x4c)) {
        iVar6 = 0;
        do {
          fn_82D94918(param_3,*(undefined4 *)(iVar6 + *(int *)(iVar2 + 0x48)));
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar7 < *(int *)(iVar2 + 0x4c));
      }
      iVar2 = *(int *)(param_2 + 0x38);
      piVar5 = piVar5 + 1;
    } while (piVar5 != (int *)(iVar2 * 4 + *(int *)(param_2 + 0x34)));
  }
  if ((0 < iVar2) || (uVar3 = 0, bVar4 != 0)) {
    uVar3 = 1;
  }
  *param_1 = uVar3;
  return param_1;
}

