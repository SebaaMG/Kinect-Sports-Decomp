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
extern int fn_8267B890();
extern int fn_826A6A38();
extern int fn_826F33F0();
extern int fn_82759498();
extern int fn_827597E0();
extern int fn_8275B020();
extern unsigned int lbl_8200D4C0;
extern unsigned int stack0x00000000;


void fn_8275B958(int param_1,int param_2,undefined8 param_3)

{
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar1;
  byte *pbVar2;
  undefined4 uVar6;
  byte abStack_50 [80];
  
  uVar3 = fn_826A6A38(param_2);
  *(undefined2 *)(param_1 + 4) = uVar3;
  uVar4 = 0;
  if ((int)param_3 == 0x53) {
    uVar4 = fn_826A6A38(param_2);
    *(ushort *)(param_1 + 0x10) = uVar4;
    if ((uVar4 & 0x20) != 0) {
      uVar5 = fn_826A6A38(param_2);
      *(float *)(param_1 + 0x14) = (float)uVar5 * lbl_8200D4C0;
    }
  }
  if ((uVar4 & 8) == 0) {
    fn_826F33F0(param_2,param_1 + 8,param_3);
    return;
  }
  fn_827597E0(&stack0x00000000 + -0x50);
  iVar1 = fn_8267B890(*(undefined4 *)(*(int *)(param_2 + 0x20) + 0x1c),0x28,0);
  if (iVar1 == 0) {
    pbVar2 = (byte *)0x0;
  }
  else {
    pbVar2 = (byte *)fn_827597E0();
  }
  *(byte **)(param_1 + 0xc) = pbVar2;
  if (pbVar2 == (byte *)0x0) {
    pbVar2 = &stack0x00000000 + -0x50;
  }
  fn_8275B020(pbVar2,param_2,param_3);
  if (*pbVar2 == 0) {
    uVar6 = *(undefined4 *)(pbVar2 + 4);
  }
  else {
    if ((((*pbVar2 & 0x10) == 0) || (iVar1 = *(int *)(pbVar2 + 4), iVar1 == 0)) ||
       (*(short *)(iVar1 + 10) == 0)) goto LAB_8275ba68;
    uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0xc) + 4);
  }
  *(undefined4 *)(param_1 + 8) = uVar6;
LAB_8275ba68:
  fn_82759498(&stack0x00000000 + -0x50);
  return;
}

