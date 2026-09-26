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
extern int fn_826DAA10();
extern int fn_826DAA60();
extern int fn_826DB220();


void fn_826DACD8(int *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  
  fn_826DB220();
  piVar7 = (int *)*param_1;
  param_4 = piVar7[1] & param_4;
  *piVar7 = *piVar7 + 1;
  iVar1 = *param_1;
  iVar5 = param_4 * 0xc + iVar1;
  iVar2 = *(int *)(iVar5 + 8);
  puVar10 = (uint *)(iVar5 + 8);
  uVar8 = param_4;
  if (iVar2 == -2) {
    *puVar10 = 0xffffffff;
    fn_826DAA10(iVar5 + 0x10,param_3);
  }
  else {
    do {
      uVar8 = *(uint *)(iVar1 + 4) & uVar8 + 1;
      iVar6 = uVar8 * 0xc + iVar1;
      piVar7 = (int *)(iVar6 + 8);
    } while (*piVar7 != -2);
    uVar3 = *(uint *)(iVar5 + 0xc);
    if (uVar3 == param_4) {
      if (piVar7 != (int *)0x0) {
        *piVar7 = iVar2;
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
        fn_826DAA10(iVar6 + 0x10,iVar5 + 0x10);
      }
      fn_826DAA60(iVar5 + 0x10,param_3);
      *puVar10 = uVar8;
    }
    else {
      while (iVar4 = uVar3 * 0xc + iVar1, puVar9 = (uint *)(iVar4 + 8),
            *(uint *)(iVar4 + 8) != param_4) {
        uVar3 = *puVar9;
      }
      if (piVar7 != (int *)0x0) {
        *piVar7 = iVar2;
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
        fn_826DAA10(iVar6 + 0x10,iVar5 + 0x10);
      }
      *puVar9 = uVar8;
      fn_826DAA60(iVar5 + 0x10,param_3);
      *puVar10 = 0xffffffff;
    }
  }
  *(uint *)(iVar5 + 0xc) = param_4;
  return;
}

