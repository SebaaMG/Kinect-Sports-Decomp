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
extern int fn_82CE5410();
extern int fn_82CE7870();
extern int fn_82CE8158();
extern int fn_82CE8160();
extern int fn_82CE8318();
extern int fn_82CE8338();
extern int fn_82CE8350();
extern int fn_82CE96B0();
extern int fn_82CE9E40();
extern int fn_82CEFBD0();
extern unsigned int lbl_8323B220;


int fn_82CE93F8(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 auStack_40 [16];
  
  fn_82CEFBD0(param_1,0);
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  fn_82CE7870(auStack_40);
  *(undefined4 *)(param_1 + 0x60) = auStack_40[0];
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0x80000000;
  KeTlsSetValue(lbl_8323B220,0);
  iVar3 = fn_82CE5410();
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x160);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    puVar5 = (undefined4 *)(iVar3 + 0x28);
    lVar6 = 0xf;
    do {
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5 = puVar5 + 5;
      *puVar5 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(int *)(param_1 + 0x1c) = iVar3;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0x20) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x1c) = 0;
  fn_82CE9E40(param_1 + 0x5c,param_2);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  lVar6 = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  do {
    fn_82CE96B0((ulonglong)*(uint *)(param_1 + 0x1c) + lVar6 + 0x2c,0x80);
    lVar6 = lVar6 + 0x14;
  } while ((int)lVar6 < 300);
  uVar4 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18) = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar3 = 0;
    puVar5 = (undefined4 *)(param_1 + 0xd4);
    do {
      puVar5[2] = 0;
      puVar5[1] = 0;
      puVar5[3] = fn_82CE8158;
      uVar2 = uVar4 & 0x3f;
      puVar5 = puVar5 + 4;
      *puVar5 = fn_82CE8160;
      uVar4 = uVar4 + 1;
      *(undefined2 *)(*(int *)(param_1 + 0x1c) + iVar3) = 0;
      iVar3 = iVar3 + 2;
      *(uint *)(*(int *)(param_1 + 0x1c) + 0x18) =
           1 << uVar2 | *(uint *)(*(int *)(param_1 + 0x1c) + 0x18);
    } while ((int)uVar4 < *(int *)(param_1 + 0x28));
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(code **)(param_1 + 0x20) = fn_82CE8318;
  *(code **)(param_1 + 0x24) = fn_82CE8338;
  fn_82CE8350(param_1);
  return param_1;
}

