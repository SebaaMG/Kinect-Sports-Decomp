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


undefined8 fn_827C2C28(int param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  iVar7 = *(int *)(param_1 + 0x188);
  uVar9 = 0;
  if ((*(char *)(param_1 + 200) == '\0') || (*(int *)(param_1 + 0x8c) == 0)) {
LAB_827c2d60:
    uVar9 = 0;
  }
  else {
    if (*(int *)(iVar7 + 0x70) == 0) {
      uVar3 = (*(code *)**(undefined4 **)(param_1 + 4))
                        (param_1,1,(ulonglong)*(uint *)(param_1 + 0x24) * 0x18);
      *(undefined4 *)(iVar7 + 0x70) = uVar3;
    }
    iVar4 = 0;
    iVar7 = *(int *)(iVar7 + 0x70);
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar6 = 0;
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0xc4) + 0x4c);
      do {
        psVar1 = (short *)*puVar5;
        if (((((psVar1 == (short *)0x0) || (*psVar1 == 0)) || (psVar1[1] == 0)) ||
            ((psVar1[8] == 0 || (psVar1[0x10] == 0)))) ||
           ((psVar1[9] == 0 ||
            ((psVar1[2] == 0 || (piVar8 = (int *)(iVar6 + *(int *)(param_1 + 0x8c)), *piVar8 < 0))))
           )) goto LAB_827c2d60;
        iVar2 = iVar7 - (int)piVar8;
        lVar10 = 5;
        do {
          piVar8 = piVar8 + 1;
          *(int *)(iVar2 + (int)piVar8) = *piVar8;
          if (*piVar8 != 0) {
            uVar9 = 1;
          }
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 0x18;
        iVar6 = iVar6 + 0x100;
        puVar5 = puVar5 + 0x15;
      } while (iVar4 < *(int *)(param_1 + 0x24));
    }
  }
  return uVar9;
}

