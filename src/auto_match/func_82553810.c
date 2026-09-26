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
extern unsigned int lbl_821954E8;


longlong fn_82553810(double param_1,double param_2,int param_3,undefined8 param_4,
                      undefined8 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_00010020;
  undefined4 in_register_00010024;
  undefined4 in_register_00010028;
  undefined4 in_vr2;
  undefined4 in_register_00010450;
  undefined4 in_register_00010454;
  undefined4 in_register_00010458;
  undefined4 in_vr69;
  
  if (*(int *)(param_3 + 0x4660) < 0x50) {
    puVar1 = (undefined4 *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x420U & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    puVar1 = (undefined4 *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x430U & 0xfffffff0);
    *puVar1 = in_register_00010020;
    puVar1[1] = in_register_00010024;
    puVar1[2] = in_register_00010028;
    puVar1[3] = in_vr2;
    uVar6 = lbl_821954E8;
    lVar3 = 0;
    *(float *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4b4) = (float)param_1;
    piVar4 = (int *)(param_3 + 0x4520);
    *(float *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4b0) = (float)param_2;
    puVar1 = (undefined4 *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x450U & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    *(undefined4 *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4bc) = 0xffffffff;
    puVar1 = (undefined4 *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x470U & 0xfffffff0);
    *puVar1 = in_register_00010020;
    puVar1[1] = in_register_00010024;
    puVar1[2] = in_register_00010028;
    puVar1[3] = in_vr2;
    *(undefined4 *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4c8) = param_6;
    *(uint *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4cc) = (uint)LZCOUNT(param_6) >> 5;
    *(undefined4 *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4b8) = uVar6;
    puVar1 = (undefined4 *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x440U & 0xfffffff0);
    *puVar1 = in_register_00010450;
    puVar1[1] = in_register_00010454;
    puVar1[2] = in_register_00010458;
    puVar1[3] = in_vr69;
    iVar5 = *(int *)(param_3 + 0x4660) * 0xd0 + param_3;
    puVar1 = (undefined4 *)(iVar5 + 0x440U & 0xfffffff0);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    puVar2 = (undefined4 *)(iVar5 + 0x460U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
    puVar2[3] = uVar8;
    *(undefined4 *)(*(int *)(param_3 + 0x4660) * 0xd0 + param_3 + 0x4c0) = 0;
    *(undefined4 *)((*(int *)(param_3 + 0x4660) + 6) * 0xd0 + param_3) = 1;
    iVar5 = *(int *)(param_3 + 0x4520);
    while (iVar5 != *(int *)(param_3 + 0x4660)) {
      piVar4 = piVar4 + 1;
      lVar3 = lVar3 + 1;
      iVar5 = *piVar4;
    }
    *(int *)(param_3 + 0x4660) = *(int *)(param_3 + 0x4660) + 1;
  }
  else {
    lVar3 = -1;
  }
  return lVar3;
}

