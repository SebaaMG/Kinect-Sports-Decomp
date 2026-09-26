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
extern unsigned int *auStack_60;
extern int fn_82230360();
extern int fn_8265CA20();
extern int fn_8288B460();
extern int fn_8288F180();
extern int fn_8288F1E8();
extern int fn_828B55B0();
extern int fn_828BDE70();
extern int fn_82F622E0();
extern unsigned int lbl_82025A98;
extern unsigned int lbl_82025AA0;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_828CBF18(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint auStack_60 [4];
  undefined4 uStack_50;
  uint uStack_4c;
  
  *param_1 = &lbl_82025AA0;
  param_1[0x14] = &lbl_82025A98;
  piVar6 = param_1 + 0x24;
  uVar7 = 0;
  uVar3 = (int)(param_1[0x25] - param_1[0x24]) >> 2;
  if (uVar3 != 0) {
    iVar8 = 0;
    do {
      iVar1 = *piVar6;
      if ((uint)(param_1[0x25] - iVar1 >> 2) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      puVar2 = *(undefined4 **)(iVar8 + iVar1);
      *(undefined4 *)(iVar8 + iVar1) = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      uVar7 = uVar7 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar7 < uVar3);
  }
  if (((*(char *)(param_1 + 0x23) != '\0') &&
      (uVar4 = fn_8288F1E8(param_1[0x1b],param_1 + 0x20), (uVar4 & 0xffffffff) != 0)) &&
     (cVar5 = fn_8288B460(uVar4,param_1[0x22],1), cVar5 != '\0')) {
    uStack_50 = 0;
    auStack_60[0] = auStack_60[0] & 0xffffff;
    uStack_4c = 0xf;
    fn_82230360(auStack_60,0xffffffff820264a8,0x27);
    fn_8288F180(uVar4,param_1[0x29],auStack_60);
    if (0xf < uStack_4c) {
      fn_8265CA20(auStack_60[0]);
    }
  }
  if (*piVar6 != 0) {
    fn_8265CA20();
  }
  *piVar6 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  fn_828B55B0(param_1 + 0x20);
  fn_828BDE70(param_1);
  return;
}

