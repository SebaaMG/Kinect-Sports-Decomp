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
extern unsigned int lbl_821AAD20;
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_83022530(double param_1,double param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int in_r0;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 in_vs32 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 in_vs63 [16];
  undefined4 in_register_00010050;
  undefined4 in_register_00010054;
  undefined4 in_register_00010058;
  undefined4 in_vr5;
  undefined4 in_register_00010060;
  undefined4 in_register_00010064;
  undefined4 in_register_00010068;
  undefined4 in_vr6;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_register_00010090;
  undefined4 in_register_00010094;
  undefined4 in_register_00010098;
  undefined4 in_vr9;
  undefined4 in_register_000100a0;
  undefined4 uVar10;
  undefined4 in_register_000100a4;
  undefined4 uVar11;
  undefined4 in_register_000100a8;
  undefined4 uVar12;
  undefined4 in_vr10;
  undefined4 uVar13;
  
  uVar2 = (uint)*(ushort *)(param_3 + 8) * 4 + param_4;
  if (param_2 == (double)lbl_821AAD20) {
    if (param_1 != (double)lbl_821AAD20) {
      iVar4 = param_5 + 0x30;
      iVar5 = param_4 + 0x20;
      do {
        vectorMultiplyAddFloatingPoint(in_vs45,in_vs32,in_vs44);
        vectorMultiplyAddFloatingPoint(in_vs45,in_vs32,in_vs44);
        puVar1 = (undefined4 *)(iVar4 - 0x20U & 0xfffffff0);
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar9 = puVar1[3];
        puVar1 = (undefined4 *)(iVar5 - 0x10U & 0xfffffff0);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        uVar12 = puVar1[2];
        uVar13 = puVar1[3];{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs45,in_vs32,in_vs40); memcpy(in_vs40, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs44,in_vs32,in_vs43); memcpy(in_vs45, &_vt1, 16); }
        puVar1 = (undefined4 *)((param_5 - param_4) + iVar5 & 0xfffffff0);
        *puVar1 = in_register_000100a0;
        puVar1[1] = in_register_000100a4;
        puVar1[2] = in_register_000100a8;
        puVar1[3] = in_vr10;
        uVar3 = iVar5 + 0x20;
        puVar1 = (undefined4 *)(iVar4 - 0x30U & 0xfffffff0);
        *puVar1 = in_register_00010090;
        puVar1[1] = in_register_00010094;
        puVar1[2] = in_register_00010098;
        puVar1[3] = in_vr9;
        puVar1 = (undefined4 *)(iVar4 - 0x20U & 0xfffffff0);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        puVar1 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        puVar1[2] = uVar12;
        puVar1[3] = uVar13;
        iVar4 = iVar4 + 0x40;
        iVar5 = iVar5 + 0x40;
      } while (uVar3 < uVar2);
      return;
    }
  }
  else {
    iVar4 = param_5 + 0x30;
    altv207_13(in_vs32,in_vs63);
    iVar5 = param_4 + 0x20;
    do {
      vectorMultiplyAddFloatingPoint(in_vs42,in_vs45,in_vs41);
      vectorMultiplyAddFloatingPoint(in_vs42,in_vs44,in_vs41);
      puVar1 = (undefined4 *)(iVar4 - 0x20U & 0xfffffff0);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar1 = (undefined4 *)(iVar5 - 0x10U & 0xfffffff0);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs42,in_vs32,in_vs39); memcpy(in_vs39, &_vt2, 16); }{ V16 _vt3 = vectorMultiplyAddFloatingPoint(in_vs41,in_vs43,in_vs40); memcpy(in_vs42, &_vt3, 16); }
      puVar1 = (undefined4 *)(iVar5 + (param_5 - param_4) & 0xfffffff0);
      *puVar1 = in_register_00010050;
      puVar1[1] = in_register_00010054;
      puVar1[2] = in_register_00010058;
      puVar1[3] = in_vr5;
      uVar3 = iVar5 + 0x20;
      puVar1 = (undefined4 *)(iVar4 - 0x30U & 0xfffffff0);
      *puVar1 = in_register_00010060;
      puVar1[1] = in_register_00010064;
      puVar1[2] = in_register_00010068;
      puVar1[3] = in_vr6;
      puVar1 = (undefined4 *)(iVar4 - 0x20U & 0xfffffff0);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      puVar1 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      iVar4 = iVar4 + 0x40;
      iVar5 = iVar5 + 0x40;
    } while (uVar3 < uVar2);
  }
  return;
}

