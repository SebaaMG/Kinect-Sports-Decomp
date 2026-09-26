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
extern int fn_824A1C90();
extern int fn_824FCD30();
extern int fn_8250DA48();
extern int fn_8265C9E0();
extern int fn_827F04B0();
extern int fn_827F0FB8();
extern int fn_827F1148();
extern int fn_827F2038();
extern int fn_827F2D60();
extern int fn_827F2DD0();
extern int fn_827F3070();
extern int fn_827F46E8();
extern int fn_827F4818();
extern int fn_827F5708();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_30;
extern unsigned int uStack_34;


void fn_824FCAC0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar5;
  ulonglong uVar3;
  undefined4 *puVar6;
  undefined8 uVar4;
  double dVar7;
  undefined1 auStack_60 [44];
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x18c) == 0) {
    uVar5 = (**(code **)(**(int **)(iVar1 + 0x8c0) + 0x4c))();
    *(undefined4 *)(iVar1 + 0x18c) = uVar5;
  }
  uVar5 = *(undefined4 *)(iVar1 + 0x18c);
  uVar3 = fn_827F04B0(0x18c);
  if ((uVar3 & 0xffffffff) == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)fn_827F1148(uVar3,uVar5,0);
  }
  puVar2 = (undefined4 *)param_1[1];
  if (puVar6 != puVar2) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    param_1[1] = (int)puVar6;
  }
  uVar3 = fn_827F2038(0x110);
  if ((uVar3 & 0xffffffff) == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)fn_827F3070(uVar3,uVar5);
  }
  puVar2 = (undefined4 *)param_1[2];
  if (puVar6 != puVar2) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    param_1[2] = (int)puVar6;
  }
  uVar3 = fn_827F2038(0x110);
  if ((uVar3 & 0xffffffff) == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)fn_827F3070(uVar3,uVar5);
  }
  puVar2 = (undefined4 *)param_1[3];
  if (puVar6 != puVar2) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    param_1[3] = (int)puVar6;
  }
  fn_827F4818(auStack_60,0,param_1[2],param_1[3]);
  uStack_34 = 1;
  uStack_30 = lbl_8218E8E8;
  uVar3 = fn_827F46E8(0x118);
  if ((uVar3 & 0xffffffff) == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)fn_8250DA48(uVar3,auStack_60);
  }
  puVar2 = (undefined4 *)param_1[4];
  if (puVar6 != puVar2) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    param_1[4] = (int)puVar6;
  }
  fn_827F5708((double)lbl_821CA460,param_1[4]);
  fn_827F0FB8(param_1[1],param_1[2],1);
  fn_827F0FB8(param_1[1],param_1[3],1);
  fn_827F0FB8(param_1[1],param_1[4],1);
  dVar7 = (double)lbl_821CC160;
  fn_827F2DD0(dVar7,uVar5,param_1[1]);
  uVar5 = *(undefined4 *)(*param_1 + 0x8c0);
  uVar3 = fn_8265C9E0(0xe0);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_824A1C90(uVar3,uVar5,param_1[5]);
  }
  fn_827F2D60(dVar7,param_1[3],uVar4);
  fn_824FCD30(param_1);
  return;
}

