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
extern unsigned int *auStack_110;
extern unsigned int *auStack_140;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern unsigned int fStack_12c;
extern unsigned int fStack_138;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_82864898();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_828663F0();
extern int fn_82868378();
extern int fn_828685D8();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_82872558();
extern int fn_82878C60();
extern int fn_8287B4E0();
extern int fn_82FE6688();
extern int fn_82FE8520();
extern unsigned int uStack_130;
extern unsigned int uStack_134;


undefined8 fn_8287AE08(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar5;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar6;
  int *piVar7;
  short sVar8;
  undefined4 *puVar9;
  undefined4 auStack_140 [2];
  float fStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  float fStack_12c;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  iVar1 = (param_2[1] - *param_2) / 0xc;
  if (iVar1 < 1) {
    fn_82865170();
    piVar7 = (int *)fn_828663F0();
    (**(code **)(*piVar7 + 0xc))(piVar7,0xffffffff82022c48,0x232,0xffffffff82022c00);
  }
  else {
    sVar8 = 0;
    fn_828685D8();
    puVar5 = (undefined4 *)fn_82872558();
    for (puVar9 = (undefined4 *)*param_2; puVar9 != (undefined4 *)param_2[1]; puVar9 = puVar9 + 3) {
      fStack_138 = -(float)puVar9[2];
      auStack_140[0] = *puVar9;
      fStack_12c = -(float)param_3[2];
      uStack_134 = *param_3;
      uStack_130 = param_3[1];
      fn_8287B4E0(puVar5,auStack_140);
      sVar8 = sVar8 + 1;
    }
    uVar2 = fn_82878C60(param_1 + 1);
    if (iVar1 == 1) {
      uVar2 = fn_82FE8520(uVar2,*puVar5,0xffffffffffffffff);
      if ((int)uVar2 == 1) {
        return 0x20130000;
      }
      uVar3 = (**(code **)(*param_1 + 0x44))(auStack_140,param_1);
      fn_828648B8(auStack_b0,uVar3);
      uVar3 = fn_82240378(auStack_90,auStack_b0);
      uVar3 = fn_8286A3D8(uVar3,0,0xffffffff82022bb0,0x1e);
      uVar3 = fn_8223DFF0(uVar3,0xffffffff82022ba8,4);
      fn_82240378(auStack_d0,uVar3);
      fn_82230300(auStack_90,1,0);
      fn_82230300(auStack_b0,1,0);
      fn_82864898(auStack_140);
      uVar3 = fn_8223B688(auStack_140,auStack_d0);
      uVar4 = fn_82868378();
      fn_8286DA10(uVar4,uVar3,uVar2);
      puVar6 = auStack_d0;
    }
    else {
      uVar2 = fn_82FE6688(uVar2,*puVar5,sVar8,2);
      if ((int)uVar2 == 1) {
        return 0x20130000;
      }
      uVar3 = (**(code **)(*param_1 + 0x44))(auStack_140,param_1);
      fn_828648B8(auStack_110,uVar3);
      uVar3 = fn_82240378(auStack_70,auStack_110);
      uVar3 = fn_8286A3D8(uVar3,0,0xffffffff82022bd8,0x27);
      uVar3 = fn_8223DFF0(uVar3,0xffffffff82022bd0,4);
      fn_82240378(auStack_f0,uVar3);
      fn_82230300(auStack_70,1,0);
      fn_82230300(auStack_110,1,0);
      fn_82864898(auStack_140);
      uVar3 = fn_8223B688(auStack_140,auStack_f0);
      uVar4 = fn_82868378();
      fn_8286DA10(uVar4,uVar3,uVar2);
      puVar6 = auStack_f0;
    }
    fn_82230300(puVar6,1,0);
  }
  return 0x20130000;
}

