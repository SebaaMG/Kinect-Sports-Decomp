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
extern int fn_82F534D8();
extern int fn_8306ED70();
extern int fn_83075D30();
extern int fn_83075D80();
extern int fn_830760D0();
extern int fn_83076E58();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_83076F10(undefined8 param_1,char param_2)

{
  undefined4 *puVar1;
  undefined8 in_r0;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 in_register_00010010;
  undefined4 in_register_00010014;
  undefined4 in_register_00010018;
  undefined4 in_vr1;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_60 [96];
  
  uVar2 = 0;
  do {
    fn_83075D30(auStack_60,param_1,uVar2);
    uVar9 = in_vr1;
    uVar8 = in_register_00010018;
    uVar7 = in_register_00010014;
    uVar6 = in_register_00010010;
    fn_830760D0();
    puVar1 = (undefined4 *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010010;
    puVar1[1] = in_register_00010014;
    puVar1[2] = in_register_00010018;
    puVar1[3] = in_vr1;
    in_vr1 = uVar9;
    in_register_00010018 = uVar8;
    in_register_00010014 = uVar7;
    in_register_00010010 = uVar6;
    fn_83075D80(param_1,uVar2);
    uVar2 = uVar2 + 1;
  } while ((uVar2 & 0xffffffff) < 0x14);
  if (param_2 != '\0') {
    uVar2 = 0;
    dVar3 = (double)lbl_821AAD20;
    dVar5 = (double)lbl_82002AE0;
    dVar4 = (double)lbl_8200133C;
    do {
      fn_83075D30(auStack_60,param_1,uVar2);
      fn_82F534D8(dVar4,dVar5,dVar5,dVar3);
      puVar1 = (undefined4 *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
      uVar9 = *puVar1;
      uVar8 = puVar1[1];
      uVar7 = puVar1[2];
      uVar6 = puVar1[3];
      fn_8306ED70();
      puVar1 = (undefined4 *)((uint)(auStack_60 + (int)in_r0) & 0xfffffff0);
      *puVar1 = uVar9;
      puVar1[1] = uVar8;
      puVar1[2] = uVar7;
      puVar1[3] = uVar6;
      fn_83075D80(param_1,uVar2);
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < 0x14);
    fn_83076E58(param_1,8,4);
    fn_83076E58(param_1,9,5);
    fn_83076E58(param_1,10,6);
    fn_83076E58(param_1,0xb,7);
    fn_83076E58(param_1,0x10,0xc);
    fn_83076E58(param_1,0x11,0xd);
    fn_83076E58(param_1,0x12,0xe);
    fn_83076E58(param_1,0x13,0xf);
  }
  return;
}

