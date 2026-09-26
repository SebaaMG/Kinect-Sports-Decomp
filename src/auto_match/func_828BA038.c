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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_822402F8();
extern int fn_82297428();
extern int fn_82516FD8();
extern int fn_825174B8();
extern int fn_8260D428();
extern int fn_8265CA20();
extern int fn_8287C960();
extern int fn_828BB7B8();
extern unsigned int iStack_64;
extern unsigned int iStack_6c;
extern unsigned int lbl_83159F0C;
extern unsigned int lbl_83159F1C;
extern unsigned int lbl_83159F20;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_828BA038(longlong param_1,int *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_70 [4];
  int iStack_6c;
  int iStack_64;
  uint auStack_60 [4];
  undefined4 uStack_50;
  uint uStack_4c;
  uint auStack_40 [4];
  undefined4 uStack_30;
  uint uStack_2c;
  
  uVar1 = fn_825174B8(auStack_70);
  fn_82516FD8(param_1 + 0x18,uVar1);
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  uVar3 = 0xffffffff83159f0c;
  if (0xf < lbl_83159F20) {
    uVar3 = (ulonglong)lbl_83159F0C;
  }
  iVar2 = fn_8260D428(*param_2 + 0xc,0,*(undefined4 *)(*param_2 + 0x1c),uVar3,lbl_83159F1C);
  if (iVar2 == 0) {
    fn_82297428(auStack_60,0xffffffff820e975c);
    fn_828BB7B8(*param_3,auStack_60);
    uVar1 = fn_8287C960(auStack_40,auStack_60);
    fn_822402F8(param_1 + 0x74,uVar1);
    if (0xf < uStack_2c) {
      fn_8265CA20(auStack_40[0]);
    }
    uStack_30 = 0;
    uStack_2c = 0xf;
    auStack_40[0] = auStack_40[0] & 0xffffff;
    if (7 < uStack_4c) {
      fn_8265CA20(auStack_60[0]);
    }
    uStack_50 = 0;
    auStack_60[0] = auStack_60[0] & 0xffff;
    uStack_4c = 7;
  }
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  if (param_3[1] != 0) {
    fn_822315A0();
  }
  return;
}

