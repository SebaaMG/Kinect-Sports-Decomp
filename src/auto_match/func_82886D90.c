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
extern int fn_82886CB0();
extern unsigned int lbl_83212A1C;
extern unsigned int lbl_83212A24;


void fn_82886D90(int *param_1,undefined4 *param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar8 = (ulonglong)lbl_83212A24;
  piVar6 = param_1;
  if (0 < (int)lbl_83212A24) {
    do {
      puVar2 = (undefined4 *)*piVar6;
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[2] = *puVar2;
      }
      uVar8 = uVar8 - 1;
      piVar6 = piVar6 + 1;
    } while (uVar8 != 0);
  }
  piVar6 = (int *)*param_2;
  do {
    if (piVar6 == (int *)0x0) {
      fn_82886CB0(param_1,param_3);
      return;
    }
    iVar5 = (**(code **)(*piVar6 + 4))(piVar6);
    if ((0 < *(int *)(iVar5 * 4 + lbl_83212A1C)) && (*(char *)(piVar6 + 9) != '\0')) {
      uVar1 = *(ushort *)((int)piVar6 + 0x26);
      uVar9 = (uint)uVar1;
      iVar5 = (**(code **)(*piVar6 + 4))(piVar6);
      piVar3 = (int *)param_1[iVar5];
      uVar4 = 1 << (*(uint *)(iVar5 * 4 + lbl_83212A1C) & 0x3f);
      uVar7 = *piVar3 - (uVar4 >> 1);
      if (uVar4 < uVar7) {
        uVar7 = uVar7 + uVar4;
      }
      if (uVar7 < (uint)piVar3[2]) {
        if (uVar7 <= uVar9) {
LAB_82886e84:
          if (uVar9 < (uint)piVar3[2]) goto LAB_82886e8c;
        }
      }
      else {
        if (uVar9 < uVar7) goto LAB_82886e84;
LAB_82886e8c:
        piVar3[2] = (uint)uVar1;
      }
    }
    piVar6 = (int *)piVar6[0xc];
  } while( true );
}

