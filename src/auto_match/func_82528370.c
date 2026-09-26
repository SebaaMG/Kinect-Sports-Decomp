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
extern int fn_825279F8();
extern int fn_82528948();
extern int fn_8252A1B0();
extern V16 vectorConditionalSelect();
extern V16 vectorMultiplyAddFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82528370(double param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined1 in_vs32 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs40 [16];
  undefined1 in_vs41 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_00010430;
  undefined4 in_register_00010434;
  undefined4 in_register_00010438;
  undefined4 in_vr67;
  
  fn_8252A1B0(param_2,param_4,0);
  puVar1 = (undefined4 *)(in_r0 + param_3 & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  iVar2 = fn_825279F8(param_2);
  if ((iVar2 == 0) || (iVar2 == 3)) {
    puVar1 = (undefined4 *)(in_r0 + param_2 + 0x70 & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  else {{ V16 _vt0 = vectorMultiplyAddFloatingPoint(in_vs43,in_vs38,in_vs45); memcpy(auVar3, &_vt0, 16); }{ V16 _vt1 = vectorMultiplyAddFloatingPoint(in_vs39,in_vs42,auVar3); memcpy(auVar3, &_vt1, 16); }{ V16 _vt2 = vectorMultiplyAddFloatingPoint(in_vs40,in_vs41,auVar3); memcpy(auVar3, &_vt2, 16); }
    vectorConditionalSelect(auVar3,in_vs32,in_vs44);
    puVar1 = (undefined4 *)(in_r0 + param_2 + 0x70 & 0xfffffff0);
    *puVar1 = in_register_00010430;
    puVar1[1] = in_register_00010434;
    puVar1[2] = in_register_00010438;
    puVar1[3] = in_vr67;
  }
  puVar1 = (undefined4 *)(in_r0 + param_2 + 0x70 & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  *(undefined4 *)(param_2 + 0x170) = 0;
  puVar1 = (undefined4 *)(param_2 + 0x60U & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  fn_82528948(param_2);
  if ((((double)*(float *)(param_2 + 0xa0) != param_1) ||
      ((double)*(float *)(param_2 + 0xa4) != param_1)) ||
     ((double)*(float *)(param_2 + 0xa8) != param_1)) {
    *(float *)(param_2 + 0xa0) = (float)param_1;
    *(undefined4 *)(param_2 + 0x170) = 0;
    *(float *)(param_2 + 0xa4) = (float)param_1;
    *(float *)(param_2 + 0xa8) = (float)param_1;
    fn_82528948(param_2);
  }
  fn_82528948(param_2);
  return;
}

