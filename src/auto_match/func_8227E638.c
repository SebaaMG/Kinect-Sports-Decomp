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
extern int fn_8227F578();
extern int fn_8227F728();


void fn_8227E638(int param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  ulonglong uVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  
  puVar11 = *(uint **)(param_1 + 0xc);
  bVar7 = false;
  while ((puVar11 != *(uint **)(param_1 + 0x10) && (!bVar7))) {
    uVar8 = (ulonglong)*puVar11;
    if (*(int *)(*puVar11 + 0x14) == param_2) {
      iVar5 = fn_8227F728(uVar8);
      if (iVar5 == 0) {
        uVar2 = ((undefined4 *)param_3)[1];
        uVar3 = *param_4;
        uVar4 = param_4[1];
        iVar5 = (int)uVar8;
        *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)param_3;
        *(undefined4 *)(iVar5 + 0x20) = uVar2;
        *(undefined4 *)(iVar5 + 0x24) = uVar3;
        *(undefined4 *)(iVar5 + 0x28) = uVar4;
        fn_8227F578(uVar8);
        *(undefined4 *)(param_1 + 0x3c) = 1;
      }
      bVar7 = true;
    }
    puVar11 = puVar11 + 1;
  }
  uVar10 = 0;
  if (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 3 != 0) {
    iVar5 = 0;
    do {
      if (bVar7) {
        return;
      }
      piVar9 = (int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if (*piVar9 == 0) {
        uVar1 = piVar9[1];
        uVar8 = (ulonglong)uVar1;
        if ((uVar8 != 0) && (*(int *)(uVar1 + 0x14) == param_2)) {
          iVar6 = fn_8227F728(uVar8);
          if (iVar6 == 0) {
            uVar2 = ((undefined4 *)param_3)[1];
            uVar3 = *param_4;
            uVar4 = param_4[1];
            iVar6 = (int)uVar8;
            *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)param_3;
            *(undefined4 *)(iVar6 + 0x20) = uVar2;
            *(undefined4 *)(iVar6 + 0x24) = uVar3;
            *(undefined4 *)(iVar6 + 0x28) = uVar4;
            fn_8227F578(uVar8);
            *(undefined4 *)(param_1 + 0x3c) = 1;
          }
          bVar7 = true;
        }
      }
      uVar10 = uVar10 + 1;
      iVar5 = iVar5 + 8;
    } while (uVar10 < (uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 3));
  }
  return;
}

