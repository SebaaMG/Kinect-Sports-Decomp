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
extern int fn_8278BF48();
extern int fn_8278DEC0();


void fn_8278C290(int *param_1,undefined8 param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  
  fn_8278DEC0();
  piVar4 = (int *)*param_1;
  param_4 = piVar4[1] & param_4;
  *piVar4 = *piVar4 + 1;
  iVar1 = *param_1;
  iVar5 = param_4 * 0xc + iVar1;
  iVar2 = *(int *)(iVar5 + 8);
  puVar9 = (uint *)(iVar5 + 8);
  uVar8 = param_4;
  if (iVar2 == -2) {
    *puVar9 = 0xffffffff;
    iVar1 = *param_3;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
    *(int *)(iVar5 + 0x10) = *param_3;
  }
  else {
    do {
      uVar8 = *(uint *)(iVar1 + 4) & uVar8 + 1;
      iVar6 = uVar8 * 0xc + iVar1;
      piVar4 = (int *)(iVar6 + 8);
    } while (*(int *)(iVar6 + 8) != -2);
    uVar3 = *(uint *)(iVar5 + 0xc);
    if (uVar3 == param_4) {
      if (piVar4 != (int *)0x0) {
        *piVar4 = iVar2;
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
        iVar1 = *(int *)(iVar5 + 0x10);
        if (iVar1 != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
      }
      fn_8278BF48(iVar5 + 0x10,param_3);
      *puVar9 = uVar8;
    }
    else {
      while (puVar7 = (uint *)(uVar3 * 0xc + iVar1 + 8), *puVar7 != param_4) {
        uVar3 = *puVar7;
      }
      if (piVar4 != (int *)0x0) {
        *piVar4 = iVar2;
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
        iVar1 = *(int *)(iVar5 + 0x10);
        if (iVar1 != 0) {
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
        *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
      }
      *puVar7 = uVar8;
      fn_8278BF48(iVar5 + 0x10,param_3);
      *puVar9 = 0xffffffff;
    }
  }
  *(uint *)(iVar5 + 0xc) = param_4;
  return;
}

