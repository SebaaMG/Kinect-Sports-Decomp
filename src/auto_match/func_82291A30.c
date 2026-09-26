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
extern int fn_822315A0();
extern int fn_82291F90();
extern int fn_82292100();
extern int fn_82292450();
extern int fn_8229AA08();
extern int fn_822A3D80();
extern int fn_82555A88();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern unsigned int lbl_82193A20;
extern unsigned int lbl_821AA2D0;
extern unsigned int lbl_8326B394;


void fn_82291A30(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined **ppuVar6;
  
  uVar5 = 1;
  *param_1 = &lbl_821AA2D0;
  do {
    uVar2 = fn_8266F6B8();
    fn_82292100(param_1,uVar5,0,0,0xffffffff820e975c,uVar2);
    uVar2 = fn_8266F6B8();
    fn_82291F90(param_1,uVar5,0,0,uVar2);
    uVar5 = uVar5 + 1;
  } while ((uVar5 & 0xffffffff) < 4);
  if (param_1[0x11] != 0) {
    lVar4 = 4;
    ppuVar6 = &lbl_82193A20;
    do {
      if (param_1[0xf] != 0) {
        piVar3 = (int *)fn_82555A88((ulonglong)(uint)param_1[0x11] + 0x98,*ppuVar6);
        if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
          *(undefined4 *)(*piVar3 + 0x19c) = lbl_8326B394;
        }
      }
      lVar4 = lVar4 + -1;
      ppuVar6 = ppuVar6 + 1;
    } while (lVar4 != 0);
  }
  iVar1 = param_1[0x1e];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      fn_822315A0();
    }
    fn_8265CA20(iVar1);
  }
  if (param_1[0x1d] != 0) {
    fn_82292450(param_1[0x1d],1);
  }
  if (param_1[0x1c] != 0) {
    fn_82292450(param_1[0x1c],1);
  }
  if (param_1[0x1b] != 0) {
    fn_82292450(param_1[0x1b],1);
  }
  if (param_1[0x1a] != 0) {
    fn_82292450(param_1[0x1a],1);
  }
  if (param_1[0x19] != 0) {
    fn_82292450(param_1[0x19],1);
  }
  if (param_1[0x18] != 0) {
    fn_82292450(param_1[0x18],1);
  }
  if (param_1[0x17] != 0) {
    fn_82292450(param_1[0x17],1);
  }
  if (param_1[0x16] != 0) {
    fn_82292450(param_1[0x16],1);
  }
  if (param_1[0x15] != 0) {
    fn_82292450(param_1[0x15],1);
  }
  if (param_1[0x14] != 0) {
    fn_82292450(param_1[0x14],1);
  }
  if (param_1[0x13] != 0) {
    fn_82292450(param_1[0x13],1);
  }
  fn_822A3D80(param_1 + 0x12);
  if (param_1[0x10] != 0) {
    fn_822315A0();
  }
  fn_8229AA08(param_1);
  return;
}

