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
extern int fn_82357010();
extern int fn_8243E150();


void fn_8243E1C0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar9;
  longlong lVar8;
  byte in_xer_so;
  
  if (param_3 == 0) {
    uVar7 = 0;
    if ((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x5c != 0) {
      lVar8 = 0;
      do {
        fn_82357010(param_1 + 4,lVar8 + (ulonglong)*(uint *)(param_2 + 4));
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x5c;
      } while (uVar7 < (uint)((int)(*(int *)(param_2 + 8) - *(uint *)(param_2 + 4)) / 0x5c));
    }
  }
  else if (param_3 == 1) {
    uVar7 = 0;
    if ((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x5c != 0) {
      iVar9 = 0;
      do {
        iVar2 = *(int *)(param_1 + 4);
        uVar4 = 0;
        piVar3 = (int *)(iVar9 + *(int *)(param_2 + 4));
        uVar1 = (*(int *)(param_1 + 8) - iVar2) / 0x5c;
        if (uVar1 != 0) {
          iVar5 = 0;
          do {
            iVar6 = iVar5 + iVar2;
            if (*(int *)(iVar5 + iVar2) == *piVar3) goto LAB_8243e318;
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 0x5c;
          } while ((bool)((byte)((uVar4 < uVar1) << 3 | in_xer_so) >> 3));
        }
        iVar6 = 0;
LAB_8243e318:
        if (iVar6 == 0) {
          fn_8243E150(param_1,piVar3,0);
        }
        else {
          *(int *)(iVar6 + 0x44) = piVar3[0x11] + *(int *)(iVar6 + 0x44);
        }
        uVar7 = uVar7 + 1;
        iVar9 = iVar9 + 0x5c;
      } while (uVar7 < (uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x5c));
    }
  }
  else if (param_3 < 3) {
    uVar7 = 0;
    if ((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x5c != 0) {
      iVar9 = 0;
      do {
        iVar2 = *(int *)(param_1 + 4);
        uVar4 = 0;
        piVar3 = (int *)(iVar9 + *(int *)(param_2 + 4));
        uVar1 = (*(int *)(param_1 + 8) - iVar2) / 0x5c;
        if (uVar1 != 0) {
          iVar5 = 0;
          do {
            iVar6 = iVar5 + iVar2;
            if (*(int *)(iVar5 + iVar2) == *piVar3) goto LAB_8243e258;
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 0x5c;
          } while ((bool)((byte)((uVar4 < uVar1) << 3 | in_xer_so) >> 3));
        }
        iVar6 = 0;
LAB_8243e258:
        if (iVar6 == 0) {
          fn_8243E150(param_1,piVar3,0);
        }
        else {
          *(int *)(iVar6 + 0x44) = piVar3[0x11] + *(int *)(iVar6 + 0x44);
        }
        uVar7 = uVar7 + 1;
        iVar9 = iVar9 + 0x5c;
      } while (uVar7 < (uint)((*(int *)(param_2 + 8) - *(int *)(param_2 + 4)) / 0x5c));
    }
  }
  return;
}

