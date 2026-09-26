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
extern int fn_8265CA20();
extern int fn_828B55B0();
extern int fn_828BDE70();
extern int fn_82F622E0();
extern unsigned int lbl_82026234;
extern unsigned int lbl_82026238;


void fn_828C7850(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  *param_1 = &lbl_82026238;
  param_1[0x14] = &lbl_82026234;
  piVar5 = param_1 + 0x24;
  uVar4 = 0;
  uVar3 = (int)(param_1[0x25] - param_1[0x24]) >> 2;
  if (uVar3 != 0) {
    iVar6 = 0;
    do {
      iVar1 = *piVar5;
      if ((uint)(param_1[0x25] - iVar1 >> 2) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821ae698);
      }
      puVar2 = *(undefined4 **)(iVar6 + iVar1);
      *(undefined4 *)(iVar6 + iVar1) = 0;
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar4 < uVar3);
  }
  if (*piVar5 != 0) {
    fn_8265CA20();
  }
  *piVar5 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  fn_828B55B0(param_1 + 0x20);
  fn_828BDE70(param_1);
  return;
}

