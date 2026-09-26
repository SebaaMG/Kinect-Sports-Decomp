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
extern unsigned int *auStack_40;
extern int fn_82E4FE40();
extern int fn_82E569B0();
extern int fn_82E583E0();
extern int fn_82E5AF48();
extern int fn_82E5AFB0();
extern int fn_82F3E1E0();
extern unsigned int lbl_82154D80;
extern unsigned int lbl_82154D88;
extern unsigned int lbl_8215FDD0;


void fn_82E5B118(undefined4 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  int *piVar4;
  uint auStack_40 [16];
  
  *param_1 = &lbl_82154D88;
  param_1[1] = &lbl_8215FDD0;
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 8))();
    param_1[0x22] = 0;
  }
  uVar2 = 0;
  if (param_1[0x3d] != 0) {
    do {
      lVar1 = fn_82E5AF48(param_1 + 0x23,uVar2,auStack_40);
      uVar3 = -(uint)(lVar1 != 0) & auStack_40[0];
      if (uVar3 != 0) {
        if (*(int *)(uVar3 + 0x18) != 0) {
          fn_82E4FE40();
        }
        *(undefined4 *)(uVar3 + 0x18) = 0;
        fn_82E4FE40(uVar3);
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (ulonglong)(uint)param_1[0x3d]);
  }
  uVar2 = 0;
  if (param_1[0x58] != 0) {
    do {
      lVar1 = fn_82E5AFB0(param_1 + 0x3e,uVar2,auStack_40);
      piVar4 = (int *)(-(uint)(lVar1 != 0) & auStack_40[0]);
      if (piVar4 != (int *)0x0) {
        if (*piVar4 != 0) {
          fn_82E4FE40();
        }
        *piVar4 = 0;
        fn_82E4FE40(piVar4);
      }
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < (ulonglong)(uint)param_1[0x58]);
  }
  fn_82F3E1E0(param_1 + 1);
  param_1[0x3e] = &lbl_82154D80;
  if (param_1[0x3f] == 0) {
    fn_82E569B0(param_1 + 0x3e,0);
  }
  param_1[0x23] = &lbl_82154D80;
  if (param_1[0x24] == 0) {
    fn_82E569B0(param_1 + 0x23,0);
  }
  fn_82E583E0(param_1);
  return;
}

