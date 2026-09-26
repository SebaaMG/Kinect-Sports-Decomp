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
extern int fn_82230040();
extern int fn_82510438();
extern int fn_8265C9E0();
extern int fn_82F622A8();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821C240C;
extern unsigned int uStack_34;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_82510100(undefined4 *param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined **ppuStack_38;
  undefined4 uStack_34;
  
  param_1[1] = param_2;
  *param_1 = &lbl_821C240C;
  puVar6 = param_1 + 2;
  if (*(int *)(param_3 + 0x10) == 0) {
    param_1[6] = 0;
  }
  else {
    if (*(int *)(param_3 + 0x10) != param_3) {
      puVar6 = (undefined4 *)0x0;
    }
    uVar4 = (**(code **)**(undefined4 **)(param_3 + 0x10))(*(undefined4 **)(param_3 + 0x10),puVar6);
    param_1[6] = uVar4;
  }
  param_1[8] = 0;
  piVar8 = param_1 + 8;
  param_1[10] = 0;
  param_1[9] = 0;
  uVar2 = param_4[1] - *param_4 >> 4;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  if (uVar2 == 0) {
    bVar3 = false;
  }
  else {
    if (0xfffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    iVar5 = 0;
    if (uVar2 != 0) {
      iVar5 = fn_8265C9E0(uVar2 << 4);
      if (iVar5 == 0) {
        uStack_34 = 0;
        ppuStack_38 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
        fn_82230040(&ppuStack_38);
      }
    }
    *piVar8 = iVar5;
    param_1[9] = iVar5;
    bVar3 = true;
    param_1[10] = uVar2 * 0x10 + iVar5;
  }
  if (bVar3) {
    puVar1 = (undefined4 *)param_4[1];
    puVar7 = (undefined4 *)*piVar8;
    for (puVar6 = (undefined4 *)*param_4; puVar6 != puVar1; puVar6 = puVar6 + 4) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar6;
        puVar7[1] = puVar6[1];
        puVar7[2] = puVar6[2];
        puVar7[3] = puVar6[3];
      }
      puVar7 = puVar7 + 4;
    }
    param_1[9] = puVar7;
  }
  fn_82510438(*piVar8,param_1[9],param_1[9] - *piVar8 >> 4,0);
  return param_1;
}

