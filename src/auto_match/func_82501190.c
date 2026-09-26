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
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_8252A1B0();
extern int fn_82F511A8();
extern int fn_82F52188();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_40;
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82501190(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int in_r0;
  int iVar4;
  undefined1 in_vs32 [16];
  undefined1 auVar5 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  undefined4 auStack_38 [2];
  undefined1 auStack_30 [32];
  
  fn_82F52188(auStack_30,*(undefined4 *)(param_1 + 0xb60),2);
  pfVar1 = (float *)(param_1 + 0xf80U & 0xfffffff0);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(auVar5, &_vt0, 16); }
  pfVar2 = (float *)(param_1 + 0x50U & 0xfffffff0);
  fVar11 = *pfVar2 + *pfVar1;
  fVar12 = pfVar2[1] + pfVar1[1];
  fVar13 = pfVar2[2] + pfVar1[2];
  fVar14 = pfVar2[3] + pfVar1[3];
  iVar4 = fn_825279F8(param_1);
  if ((iVar4 == 0) || (iVar4 == 3)) {
    pfVar1 = (float *)(in_r0 + param_1 + 0x70 & 0xfffffff0);
    *pfVar1 = fVar11;
    pfVar1[1] = fVar12;
    pfVar1[2] = fVar13;
    pfVar1[3] = fVar14;
  }
  else {{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs38,in_vs45); memcpy(auVar6, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar6); memcpy(auVar6, &_vt2, 16); }{ V16 _vt3 = vectorMultiplyAddFloatingPoint(in_vs40,in_vs41,auVar6); memcpy(auVar6, &_vt3, 16); }
    vectorConditionalSelect(auVar6,auVar5,in_vs44);
    puVar3 = (undefined4 *)(in_r0 + param_1 + 0x70 & 0xfffffff0);
    *puVar3 = in_register_00010430;
    puVar3[1] = in_register_00010434;
    puVar3[2] = in_register_00010438;
    puVar3[3] = in_vr67;
  }
  puVar3 = (undefined4 *)(in_r0 + param_1 + 0x70 & 0xfffffff0);
  uVar7 = *puVar3;
  uVar8 = puVar3[1];
  uVar9 = puVar3[2];
  uVar10 = puVar3[3];
  *(undefined4 *)(param_1 + 0x170) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x60U & 0xfffffff0);
  *puVar3 = uVar7;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  fn_82528948(param_1);
  fn_82F511A8(*(undefined4 *)(param_1 + 0xb60),&uStack_40,auStack_3c,auStack_38,2);
  uStack_40 = lbl_821CC160;
  auStack_38[0] = lbl_821CC160;
  fn_8252A1B0(param_1,&uStack_40,0);
  return;
}

