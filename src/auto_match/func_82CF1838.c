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
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CFC050();
extern unsigned int lbl_82002AE0;


undefined1 *
fn_82CF1838(undefined1 *param_1,int *param_2,longlong param_3,longlong param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  
  iVar7 = (int)(param_4 - param_3);
  if ((int)((param_2[5] & 0x3fffffffU) - param_2[4]) < iVar7) {
    *param_1 = 0;
  }
  else {
    piVar8 = (int *)(*(int *)(param_5 + 0x18) * 0xc + *param_2);
    iVar4 = fn_82CE5410();
    if (piVar8[1] == (piVar8[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
      fn_82CE63B0(*(undefined4 *)(iVar4 + 0x10),piVar8,0x24);
    }
    puVar5 = (undefined4 *)(piVar8[1] * 0x24 + *piVar8);
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[2] = 1;
      puVar5[1] = 0;
      *puVar5 = "Unknown Heading";
      uVar3 = lbl_82002AE0;
      puVar5[3] = 0;
      puVar5[4] = uVar3;
      puVar5[6] = 0;
      puVar5[5] = uVar3;
      puVar5[7] = 0;
      puVar5[8] = 0;
    }
    iVar4 = piVar8[1];
    puVar5 = (undefined4 *)(param_5 + -4);
    lVar9 = 9;
    piVar8[1] = iVar4 + 1;
    iVar4 = iVar4 * 0x24 + *piVar8;
    puVar6 = (undefined4 *)(iVar4 + -4);
    do {
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar5;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    iVar1 = param_2[4];
    *(int *)(iVar4 + 0x20) = iVar1 + iVar7;
    *(int *)(iVar4 + 0x1c) = iVar1;
    uVar2 = param_2[4];
    param_2[4] = uVar2 + iVar7;
    fn_82CFC050((ulonglong)(uint)param_2[3] + (ulonglong)uVar2,param_3,param_4 - param_3);
    *param_1 = 1;
  }
  return param_1;
}

