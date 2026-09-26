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
extern unsigned int *auStack_90;
extern int fn_822A8928();
extern int fn_822A8D30();
extern int fn_825363B8();
extern int fn_82536690();
extern int fn_8265C9E0();
extern int fn_828647F0();
extern int fn_82864848();
extern int fn_82864898();
extern unsigned int lbl_821C3FEC;
extern unsigned int lbl_821C4014;
extern unsigned int *lbl_8327F864;
extern unsigned int *lbl_8327F868;
extern unsigned int lbl_8327F874;
extern unsigned int lbl_8327F878;


undefined4 * fn_82535298(undefined4 *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar1;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 *puStack_a0;
  undefined4 *apuStack_9c [3];
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [96];
  
  fn_82864848(auStack_90);
  iVar2 = fn_822A8928(lbl_8327F878,1,*param_1,auStack_90);
  if (iVar2 < 0) {
    puVar3 = (undefined4 *)fn_8265C9E0(8);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = (int)param_2;
      *puVar3 = &lbl_821C4014;
    }
    puStack_a0 = puVar3;
    uVar1 = fn_828647F0(auStack_60,param_2);
    iVar2 = fn_822A8D30(lbl_8327F874,uVar1);
    if (*(char *)(iVar2 + 0x5c) != '\0') goto LAB_82535340;
    ppuVar5 = &puStack_a0;
  }
  else {
    if (((*param_3 != param_3[1]) || (*param_4 != param_4[1])) &&
       (iVar2 = fn_825363B8(lbl_8327F864,param_3,param_4), iVar2 < 0)) {
      (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x290,0xffffffff821c3c40);
    }
    puVar3 = (undefined4 *)0x0;
    puStack_a0 = (undefined4 *)0x0;
    iVar2 = (**(code **)(*lbl_8327F864 + 0x10))(lbl_8327F864,auStack_90,&puStack_a0);
    if (iVar2 < 0) {
      iVar2 = (**(code **)(*lbl_8327F864 + 0x14))(lbl_8327F864,&puStack_a0);
      if (iVar2 < 0) {
        (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x2a6,0xffffffff821c3c64);
      }
      puVar4 = (undefined4 *)fn_8265C9E0(8);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = &lbl_821C4014;
        puVar3 = puVar4;
LAB_8253547c:
        puVar3[1] = (int)param_2;
      }
    }
    else {
      puVar4 = (undefined4 *)fn_8265C9E0(0xc);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = &lbl_821C3FEC;
        puVar4[2] = puStack_a0;
        puVar3 = puVar4;
        goto LAB_8253547c;
      }
    }
    apuStack_9c[0] = puVar3;
    uVar1 = fn_828647F0(auStack_60,param_2);
    iVar2 = fn_822A8D30(lbl_8327F874,uVar1);
    if (*(char *)(iVar2 + 0x5c) != '\0') goto LAB_82535340;
    ppuVar5 = apuStack_9c;
  }
  fn_82536690(iVar2 + 0x24,ppuVar5);
LAB_82535340:
  fn_82864898(auStack_60);
  fn_82864898(auStack_90);
  return puVar3;
}

