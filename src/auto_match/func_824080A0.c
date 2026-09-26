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
extern unsigned int *auStack_61;
extern unsigned int *auStack_80;
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_82321480();
extern int fn_82409B50();
extern int fn_8265C9E0();
extern unsigned int iStack_94;
extern unsigned int iStack_98;
extern unsigned int iStack_a0;
extern unsigned int lbl_82002B04;
extern unsigned int lbl_8218E1AC;
extern unsigned int lbl_821B7EC8;
extern unsigned int lbl_821B7EE4;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_84;
extern unsigned int uStack_8c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 *
fn_824080A0(double param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *in_stack_0000005c;
  undefined4 in_stack_00000064;
  int iStack_a0;
  undefined4 *puStack_9c;
  int iStack_98;
  int iStack_94;
  undefined **ppuStack_90;
  undefined4 uStack_8c;
  undefined **ppuStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  int *piStack_70;
  undefined1 auStack_61 [17];
  int *piStack_50;
  
  param_2[3] = param_7;
  param_2[2] = param_3;
  *param_2 = &lbl_821B7EC8;
  param_2[1] = 3;
  param_2[4] = param_6;
  param_2[5] = param_5;
  param_2[0xd] = 1;
  uVar3 = lbl_821CC160;
  param_2[6] = (float)param_1;
  param_2[7] = (float)param_1;
  param_2[8] = param_3;
  param_2[0xc] = uVar3;
  param_2[9] = param_5;
  param_2[10] = param_6;
  uVar1 = lbl_8218E1AC;
  param_2[0xb] = 0;
  param_2[0x10] = param_9;
  param_2[0x11] = uVar1;
  param_2[0xe] = param_4;
  param_2[0xf] = param_8;
  uVar1 = *in_stack_0000005c;
  param_2[0x15] = uVar3;
  param_2[0x12] = uVar1;
  param_2[0x13] = in_stack_00000064;
  param_2[0x14] = 4;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  puStack_9c = param_2;
  piStack_70 = (int *)fn_8265C9E0(0x14);
  if (piStack_70 == (int *)0x0) {
    uStack_84 = 0;
    ppuStack_88 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_88);
  }
  *piStack_70 = (int)&lbl_821B7EE4;
  piStack_70[1] = iStack_a0;
  piStack_70[2] = (int)puStack_9c;
  piStack_70[3] = iStack_98;
  piStack_70[4] = iStack_94;
  lVar4 = (**(code **)(*(int *)param_2[5] + 4))();
  fn_82321480(&iStack_a0,lVar4 + 0x598,auStack_80);
  iVar2 = param_2[0x17];
  param_2[0x17] = puStack_9c;
  param_2[0x16] = fn_82409B50;
  if (iVar2 != 0) {
    fn_822315A0();
  }
  if (piStack_70 != (int *)0x0) {
    (**(code **)(*piStack_70 + 0xc))
              (piStack_70,
               (int)(auStack_80 + -(int)piStack_70) -
               (int)(auStack_80 +
                    (uint)(auStack_80 + -(int)piStack_70 == (undefined1 *)0x0) + -(int)piStack_70 +
                    -1));
    piStack_70 = (int *)0x0;
  }
  puStack_9c = param_2;
  piStack_50 = (int *)fn_8265C9E0(0x14);
  if (piStack_50 != (int *)0x0) {
    *piStack_50 = (int)&lbl_821B7EE4;
    piStack_50[1] = iStack_a0;
    piStack_50[2] = (int)puStack_9c;
    piStack_50[3] = iStack_98;
    piStack_50[4] = iStack_94;
    lVar4 = (**(code **)(*(int *)param_2[5] + 8))();
    fn_82321480(&iStack_a0,lVar4 + 0x598,auStack_61 + 1);
    iVar2 = param_2[0x19];
    param_2[0x19] = puStack_9c;
    param_2[0x18] = fn_82409B50;
    if (iVar2 != 0) {
      fn_822315A0();
    }
    if (piStack_50 != (int *)0x0) {
      (**(code **)(*piStack_50 + 0xc))
                (piStack_50,
                 (int)(auStack_61 + -(int)piStack_50 + 1) -
                 (int)(auStack_61 +
                      (uint)(auStack_61 + -(int)piStack_50 + 1 == (undefined1 *)0x0) +
                      -(int)piStack_50));
    }
    return param_2;
  }
  uStack_8c = 0;
  ppuStack_90 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_90);
}

