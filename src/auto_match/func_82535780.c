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
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_822A8928();
extern int fn_822A8D30();
extern int fn_825363B8();
extern int fn_82536690();
extern int fn_8265C9E0();
extern int fn_828647F0();
extern int fn_82864848();
extern int fn_82864898();
extern int iRam83296bc4;
extern int iRam83296bd4;
extern unsigned int lbl_821C3FEC;
extern unsigned int lbl_821C4014;
extern unsigned int *lbl_8327F864;
extern unsigned int *lbl_8327F868;
extern unsigned int lbl_8327F874;
extern unsigned int lbl_8327F878;
extern unsigned int lbl_83296BC0;
extern unsigned int lbl_83296BD0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_82535780(undefined4 *param_1,undefined8 param_2)

{
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar1;
  undefined4 **ppuVar4;
  undefined4 uVar5;
  undefined4 *puStack_90;
  undefined4 *apuStack_8c [3];
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [80];
  
  (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x3c1,0xffffffff821c3c84);
  fn_82864848(auStack_80);
  iVar2 = fn_822A8928(lbl_8327F878,1,*param_1,auStack_80);
  uVar5 = (undefined4)param_2;
  if (iVar2 < 0) {
    puVar3 = (undefined4 *)fn_8265C9E0(8);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = uVar5;
      *puVar3 = &lbl_821C4014;
    }
    puStack_90 = puVar3;
    uVar1 = fn_828647F0(auStack_50,param_2);
    iVar2 = fn_822A8D30(lbl_8327F874,uVar1);
    if (*(char *)(iVar2 + 0x5c) != '\0') goto LAB_82535850;
    ppuVar4 = &puStack_90;
  }
  else {
    puStack_90 = (undefined4 *)0x0;
    if (((lbl_83296BC0 != iRam83296bc4) || (lbl_83296BD0 != iRam83296bd4)) &&
       (iVar2 = fn_825363B8(lbl_8327F864), iVar2 < 0)) {
      (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x3d9,0xffffffff821c3c40);
    }
    iVar2 = (**(code **)(*lbl_8327F864 + 0x10))(lbl_8327F864,auStack_80,&puStack_90);
    if (iVar2 < 0) {
      iVar2 = (**(code **)(*lbl_8327F864 + 0x14))(lbl_8327F864,&puStack_90);
      if (iVar2 < 0) {
        (**(code **)(*lbl_8327F868 + 8))(lbl_8327F868,0xffffffff821c3b18,0x3ea,0xffffffff821c3cb0);
      }
      puVar3 = (undefined4 *)fn_8265C9E0(8);
      if (puVar3 == (undefined4 *)0x0) {
LAB_8253596c:
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3[1] = uVar5;
        *puVar3 = &lbl_821C4014;
      }
    }
    else {
      puVar3 = (undefined4 *)fn_8265C9E0(0xc);
      if (puVar3 == (undefined4 *)0x0) goto LAB_8253596c;
      puVar3[1] = uVar5;
      *puVar3 = &lbl_821C3FEC;
      puVar3[2] = puStack_90;
    }
    apuStack_8c[0] = puVar3;
    uVar1 = fn_828647F0(auStack_50,param_2);
    iVar2 = fn_822A8D30(lbl_8327F874,uVar1);
    if (*(char *)(iVar2 + 0x5c) != '\0') goto LAB_82535850;
    ppuVar4 = apuStack_8c;
  }
  fn_82536690(iVar2 + 0x24,ppuVar4);
LAB_82535850:
  fn_82864898(auStack_50);
  fn_82864898(auStack_80);
  return puVar3;
}

