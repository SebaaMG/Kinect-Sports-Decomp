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
extern unsigned int *auStack_70;
extern int fn_8306E7E8();
extern int fn_8306E850();
extern int fn_8306E860();
extern int fn_8306ECA8();
extern int fn_8306ED30();
extern int fn_8306ED38();
extern int fn_83075D30();
extern int fn_83075D50();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E60;


void fn_83075790(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 in_vs32 [16];
  undefined1 in_vs35 [16];
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 in_register_000103f0;
  undefined4 in_register_000103f4;
  undefined4 in_register_000103f8;
  undefined4 in_vr63;
  undefined1 auStack_70 [112];
  
  iVar1 = *(int *)(param_1 + 0x520);
  iVar6 = *(int *)(param_1 + 0x524) * 0x290 + param_1;
  uVar3 = fn_83075D50(param_2);
  *(undefined8 *)(iVar6 + 0x280) = uVar3;
  lVar5 = 0;
  iVar7 = iVar6 + 0x140;
  dVar9 = (double)lbl_82002AE0;
  dVar10 = (double)lbl_82186E60;
  do {
    fn_83075D30(auStack_70,param_2,lVar5);
    altv207_13(in_vs32,in_vs35);
    puVar2 = (undefined4 *)(iVar7 - 0x140U & 0xfffffff0);
    *puVar2 = in_register_000103f0;
    puVar2[1] = in_register_000103f4;
    puVar2[2] = in_register_000103f8;
    puVar2[3] = in_vr63;
    if (*(int *)(param_1 + 0x528) < 1) {
      fn_8306ECA8();
    }
    else {
      uVar3 = fn_8306E860(*(undefined8 *)(iVar6 + 0x280),
                           *(undefined8 *)(iVar1 * 0x290 + param_1 + 0x280));
      dVar8 = (double)fn_8306E7E8(uVar3,dVar10);
      dVar8 = (double)(float)(dVar9 / dVar8);
      puVar2 = (undefined4 *)(iVar7 - 0x140U & 0xfffffff0);
      in_register_00010010 = *puVar2;
      in_register_00010014 = puVar2[1];
      in_register_00010018 = puVar2[2];
      in_vr1 = puVar2[3];
      fn_8306ED30();
      puVar2 = (undefined4 *)((int)in_r0 + iVar7 & 0xfffffff0);
      *puVar2 = in_register_00010010;
      puVar2[1] = in_register_00010014;
      puVar2[2] = in_register_00010018;
      puVar2[3] = in_vr1;
      fn_8306ED38(dVar8);
    }
    lVar5 = lVar5 + 1;
    puVar2 = (undefined4 *)((int)in_r0 + iVar7 & 0xfffffff0);
    *puVar2 = in_register_00010010;
    puVar2[1] = in_register_00010014;
    puVar2[2] = in_register_00010018;
    puVar2[3] = in_vr1;
    iVar7 = iVar7 + 0x10;
  } while ((int)lVar5 < 0x14);
  iVar1 = *(int *)(param_1 + 0x524);
  lVar5 = (ulonglong)*(uint *)(param_1 + 0x528) + 1;
  *(int *)(param_1 + 0x524) = 1 - iVar1;
  *(int *)(param_1 + 0x528) = (int)lVar5;
  *(int *)(param_1 + 0x520) = iVar1;
  uVar4 = fn_8306E850(lVar5,2);
  *(undefined4 *)(param_1 + 0x528) = uVar4;
  return;
}

