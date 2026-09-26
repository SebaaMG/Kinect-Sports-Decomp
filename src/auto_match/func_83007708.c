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
extern int fn_82FA5190();
extern int fn_82FF6A78();
extern int fn_82FFF430();
extern int fn_830043E8();
extern int fn_830063D0();
extern int fn_83006A80();
extern int fn_830184C0();
extern unsigned int lbl_8217BF18;
extern unsigned int lbl_8217C940;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E8;
extern unsigned int lbl_832642FC;


void fn_83007708(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  *param_1 = &lbl_8217BF18;
  param_1[7] = &lbl_8217C940;
  *(byte *)((int)param_1 + 0x3d) = *(byte *)((int)param_1 + 0x3d) | 2;
  if (param_1[10] != 0) {
    fn_83006A80();
    fn_82FA5190(lbl_831BC768,param_1[10]);
  }
  if (lbl_832642FC != 0) {
    param_1[0x10] = 0;
    fn_830184C0(lbl_832642FC,param_1);
  }
  if ((param_1[8] != 0) && (iVar1 = *(int *)(param_1[8] + 0x30), iVar1 != 0)) {
    fn_82FF6A78(lbl_832642E8,iVar1,param_1);
  }
  uVar4 = lbl_831BC768;
  puVar2 = (undefined4 *)param_1[9];
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(puVar2,0);
    fn_82FA5190(uVar4,puVar2);
  }
  if (param_1[8] == 0) {
    fn_830063D0(param_1);
  }
  else {
    fn_830043E8();
    fn_830063D0(param_1);
    uVar4 = lbl_831BC768;
    puVar2 = (undefined4 *)param_1[8];
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      fn_82FA5190(uVar4,puVar2);
    }
    param_1[8] = 0;
  }
  if (param_1[0x11] != 0) {
    piVar3 = *(int **)(param_1[0x11] + 4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x68))(piVar3,param_1[3]);
    }
    fn_82FA5190(lbl_831BC768,param_1[0x11]);
  }
  fn_82FFF430(param_1);
  return;
}

