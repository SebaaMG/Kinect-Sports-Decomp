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
#define TBLr 0
extern unsigned int *auStack_50;
extern unsigned int *auStack_94;
extern unsigned int *auStack_e4;
extern int fn_82CE5410();
extern int fn_82DFD920();
extern int fn_82DFE480();
extern unsigned int iStack_9c;
extern unsigned int iStack_ec;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_98;
extern unsigned int uStack_e8;


void fn_82DFE6F8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 *puStack_f0;
  int iStack_ec;
  uint uStack_e8;
  undefined1 auStack_e4 [68];
  undefined1 *puStack_a0;
  int iStack_9c;
  uint uStack_98;
  undefined1 auStack_94 [68];
  undefined1 auStack_50 [80];
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "TtDoVehicle";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  puStack_a0 = auStack_94;
  puStack_f0 = auStack_e4;
  uStack_98 = 0x80000010;
  iStack_9c = (int)*(char *)(*(int *)(param_1 + 0x1c) + 0x20);
  uStack_e8 = 0x80000010;
  iStack_ec = (int)*(char *)(*(int *)(param_1 + 0x1c) + 0x20);
  fn_82DFE480(param_1,param_2,param_3,auStack_50,&puStack_a0,&puStack_f0);
  fn_82DFD920(param_1,param_2,auStack_50,&puStack_a0,&puStack_f0);
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  iVar3 = fn_82CE5410();
  iStack_ec = 0;
  if ((uStack_e8 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),puStack_f0,uStack_e8 & 0x3fffffff,4);
  }
  puStack_f0 = (undefined1 *)0x0;
  uStack_e8 = 0x80000000;
  iVar3 = fn_82CE5410();
  iStack_9c = 0;
  if ((uStack_98 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),puStack_a0,uStack_98 & 0x3fffffff,4);
  }
  return;
}

