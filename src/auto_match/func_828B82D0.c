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
extern unsigned int *auStack_48;
extern int fn_82231540();
extern int fn_8265CA20();
extern int fn_8289E800();
extern int fn_8289F1E8();
extern int fn_828B6DD0();
extern int fn_82F63CA0();
extern unsigned int lbl_820252A8;
extern unsigned int uStack_50;


void fn_828B82D0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined1 uStack_50;
  undefined4 *puStack_4c;
  undefined4 auStack_48 [18];
  
  piVar5 = param_1 + 1;
  *param_1 = &lbl_820252A8;
  iVar1 = param_1[2];
  if (param_1[1] != iVar1) {
    uVar3 = fn_828B6DD0(iVar1,iVar1,param_1[1],uStack_50);
    fn_82231540(uVar3,param_1[2],param_1 + 4,uStack_50);
    param_1[2] = (int)uVar3;
  }
  puVar4 = (undefined4 *)param_1[10];
  piVar6 = param_1 + 10;
  if (puVar4 != (undefined4 *)param_1[0xb]) {
    do {
      *(undefined4 *)*puVar4 = 0;
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (puVar4 != (undefined4 *)param_1[0xb]);
  }
  iVar1 = *piVar6;
  if (iVar1 != param_1[0xb]) {
    fn_82F63CA0(iVar1,param_1[0xb],0);
    param_1[0xb] = iVar1;
  }
  uVar2 = param_1[5];
  puStack_4c = param_1;
  fn_8289F1E8(auStack_48,(ulonglong)uVar2 + 0x1c0,&puStack_4c);
  fn_8289E800(&puStack_4c,(ulonglong)uVar2 + 0x1c0,auStack_48[0]);
  if (*piVar6 != 0) {
    fn_8265CA20();
  }
  param_1[0xc] = 0;
  *piVar6 = 0;
  param_1[0xb] = 0;
  if (*piVar5 != 0) {
    fn_82231540(*piVar5,param_1[2],param_1 + 4,uStack_50);
    fn_8265CA20(*piVar5);
  }
  *piVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

