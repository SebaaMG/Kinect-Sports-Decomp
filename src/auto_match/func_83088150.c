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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82CE5410();
extern int fn_83088020();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_83088150(undefined8 param_1,int *param_2,int param_3,longlong param_4,undefined8 param_5,
                  longlong param_6,longlong param_7)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar8 [16];
  undefined4 in_register_00010000;
  undefined4 in_ACC;
  undefined4 in_register_00010008;
  undefined4 in_vr0;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "TtRayCastGroup";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  uVar9 = *puVar1;
  uVar10 = puVar1[1];
  uVar11 = puVar1[2];
  uVar12 = puVar1[3];{ V16 _vt0 = vectorMinimumFloatingPoint(in_vs45,in_vs44); memcpy(auVar7, &_vt0, 16); }{ V16 _vt1 = vectorMaximumFloatingPoint(in_vs45,in_vs44); memcpy(auVar8, &_vt1, 16); }
  puVar1 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010000;
  puVar1[1] = in_ACC;
  puVar1[2] = in_register_00010008;
  puVar1[3] = in_vr0;
  puVar1 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar1 = uVar9;
  puVar1[1] = uVar10;
  puVar1[2] = uVar11;
  puVar1[3] = uVar12;
  if (-1 < param_4 + -2) {
    lVar6 = param_4 + -1;
    do {{ V16 _vt2 = vectorMinimumFloatingPoint(auVar7,in_vs44); memcpy(auVar7, &_vt2, 16); }{ V16 _vt3 = vectorMaximumFloatingPoint(auVar8,in_vs44); memcpy(auVar8, &_vt3, 16); }{ V16 _vt4 = vectorMinimumFloatingPoint(auVar7,in_vs42); memcpy(auVar7, &_vt4, 16); }{ V16 _vt5 = vectorMaximumFloatingPoint(auVar8,in_vs42); memcpy(auVar8, &_vt5, 16); }
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar1 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar1 = uVar9;
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    puVar1[3] = uVar12;
    puVar1 = (undefined4 *)((uint)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010000;
    puVar1[1] = in_ACC;
    puVar1[2] = in_register_00010008;
    puVar1[3] = in_vr0;
  }
  iVar4 = (**(code **)(*param_2 + 0x60))(param_2);
  piVar5 = (int *)fn_82CE5410();
  iVar3 = *piVar5;
  *piVar5 = (iVar4 + 0x7fU & 0xffffff80) + iVar3;
  (**(code **)(*param_2 + 0x68))(param_2,auStack_80,iVar3);
  while (param_4 = param_4 + -1, -1 < param_4) {
    fn_83088020(param_1,param_2,param_3,param_5,iVar3,param_6);
    param_3 = param_3 + 0x30;
    param_6 = param_6 + param_7;
  }
  piVar5 = (int *)fn_82CE5410();
  *piVar5 = iVar3;
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

