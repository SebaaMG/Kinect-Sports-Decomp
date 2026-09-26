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
extern int fn_8267BE38();
extern int fn_8277C9C8();
extern int fn_8277CAA0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_58;


void fn_8277E1A8(int param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (uVar1 <= param_2) {
    if (*(uint *)(param_1 + 0x2c) <= param_2) {
      iStack_60 = 0;
      iStack_5c = 0;
      uStack_58 = 0;
      fn_8277CAA0(&iStack_60,*(undefined4 *)(param_1 + 0x28),0);
      iVar3 = iStack_60;
      piVar9 = (int *)(param_1 + 0x24);
      uVar6 = 0;
      iVar8 = iStack_5c;
      if (*(int *)(param_1 + 0x28) != 0) {
        do {
          puVar5 = (undefined1 *)(iVar8 + iStack_60);
          iVar8 = iVar8 + 1;
          puVar4 = (undefined1 *)(*piVar9 + uVar6);
          uVar6 = uVar6 + 1;
          *puVar5 = *puVar4;
        } while (uVar6 < *(uint *)(param_1 + 0x28));
      }
      fn_8277C9C8(piVar9,param_2 + 1,0x20);
      iVar7 = 0;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        iVar2 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        puVar4 = (undefined1 *)(iVar3 + iVar7);
        iVar7 = iVar7 + 1;
        *(undefined1 *)(*piVar9 + iVar2) = *puVar4;
      }
      fn_8267BE38(iVar3);
    }
    if (*(uint *)(param_1 + 0x28) <= param_2) {
      iVar8 = (param_2 - *(uint *)(param_1 + 0x28)) + 1;
      do {
        iVar3 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        *(undefined1 *)(*(int *)(param_1 + 0x24) + iVar3) = 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0x24) + param_2) = param_3;
  if ((uVar1 == 0) && (param_2 != 0)) {
    **(undefined1 **)(param_1 + 0x24) = 0;
  }
  return;
}

