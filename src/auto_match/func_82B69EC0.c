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
extern int fn_8233D780();
extern int fn_823AA458();
extern int fn_823ABB00();
extern int fn_8240B280();
extern int fn_82AB15D0();
extern int fn_82B69D10();
extern int fn_82B69D70();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_82B69EC0(undefined8 param_1,undefined4 param_2)

{
  int iVar2;
  ulonglong uVar1;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  fn_823AA458();
  iVar2 = fn_82BA02A8();
  uVar1 = fn_82BA02A8(param_1);
  if (iVar2 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d923c,0xffffffff820d91b0,0x54);
  }
  if ((uVar1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9230,0xffffffff820d91b0,0x55);
  }
  fn_823AA458(param_1);
  piVar3 = (int *)fn_8233D780();
  fn_823AA458(param_1);
  piVar4 = (int *)fn_8240B280();
  fn_823AA458(param_1);
  iVar5 = fn_823ABB00();
  if (piVar3 == (int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9224,0xffffffff820d91b0,0x5a);
  }
  if (piVar4 == (int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9214,0xffffffff820d91b0,0x5b);
  }
  if (iVar5 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d8f04,0xffffffff820d91b0,0x5c);
  }
  puVar6 = (undefined4 *)(**(code **)(iVar2 + 0x14))(*(undefined4 *)(iVar2 + 0x10),0x1bc);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = (int)param_1;
    puVar6[1] = param_2;
    fn_82F68CC0(puVar6 + 0x29,iVar2,0x48);
    fn_82F68CC0(puVar6 + 0x3b,uVar1,0x20);
    fn_82F68CC0(puVar6 + 0x11,piVar3,0x18);
    fn_82F68CC0(puVar6 + 0x17,piVar4,0x48);
    uVar7 = fn_82B69D10(puVar6,*piVar3 << 2);
    puVar6[2] = uVar7;
    uVar7 = fn_82B69D10(puVar6,((ulonglong)(uint)piVar3[2] + 0x1f & 0xffffffff) >> 3 & 0x1ffffffc)
    ;
    puVar6[3] = uVar7;
    uVar7 = fn_82B69D10(puVar6,*piVar4 << 4);
    puVar6[5] = uVar7;
    uVar7 = fn_82B69D10(puVar6,piVar4[3] << 4);
    puVar6[6] = uVar7;
    uVar7 = fn_82B69D10(puVar6,((ulonglong)(uint)piVar4[0xc] + 0x1f & 0xffffffff) >> 3 &
                                 0x1ffffffc);
    puVar6[0xb] = uVar7;
    uVar7 = fn_82B69D10(puVar6,((ulonglong)(uint)piVar4[0xf] + 0x1f & 0xffffffff) >> 3 &
                                 0x1ffffffc);
    puVar6[0xe] = uVar7;
    uVar7 = fn_82B69D10(puVar6,piVar4[1] << 2);
    puVar6[7] = uVar7;
    uVar7 = fn_82B69D10(puVar6,piVar4[4] << 2);
    puVar6[8] = uVar7;
    uVar7 = fn_82B69D10(puVar6,((ulonglong)(uint)piVar4[0xd] + 0x1f & 0xffffffff) >> 3 &
                                 0x1ffffffc);
    puVar6[0xc] = uVar7;
    uVar7 = fn_82B69D10(puVar6,((ulonglong)(uint)piVar4[0x10] + 0x1f & 0xffffffff) >> 3 &
                                 0x1ffffffc);
    puVar6[0xf] = uVar7;
    uVar7 = fn_82B69D10(puVar6,((ulonglong)(uint)piVar4[2] + 0x1f & 0xffffffff) >> 3 & 0x1ffffffc)
    ;
    puVar6[9] = uVar7;
    uVar7 = fn_82B69D10(puVar6,((ulonglong)(uint)piVar4[5] + 0x1f & 0xffffffff) >> 3 & 0x1ffffffc)
    ;
    puVar6[10] = uVar7;
    uVar7 = fn_82B69D10(puVar6,((ulonglong)(uint)piVar4[0xe] + 0x1f & 0xffffffff) >> 3 &
                                 0x1ffffffc);
    puVar6[0xd] = uVar7;
    iVar2 = fn_82B69D10(puVar6,((ulonglong)(uint)piVar4[0x11] + 0x1f & 0xffffffff) >> 3 &
                                 0x1ffffffc);
    puVar6[0x10] = iVar2;
    if (((((puVar6[2] != 0) && (puVar6[3] != 0)) && (puVar6[5] != 0)) &&
        ((((puVar6[6] != 0 && (puVar6[7] != 0)) &&
          ((puVar6[8] != 0 && ((puVar6[9] != 0 && (puVar6[10] != 0)))))) && (puVar6[0xb] != 0)))) &&
       ((((puVar6[0xe] != 0 && (puVar6[0xc] != 0)) && (puVar6[0xf] != 0)) &&
        ((puVar6[0xd] != 0 && (iVar2 != 0)))))) {
      puVar6[4] = puVar6[4] | 3;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(puVar6[3],0xff,((ulonglong)(uint)piVar3[2] + 0x1f & 0xffffffff) >> 3 & 0x1ffffffc
                  );
    }
    fn_82B69D70(puVar6);
  }
  return 0;
}

