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
extern unsigned int lbl_8209AB20;
extern unsigned int lbl_82132D10;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorMultiplyAddFloatingPoint();
extern V16 vectorNegativeMultiplySubtractFloatingPoint();
extern V16 vectorReciprocalEstimateFloatingPoint();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8308AEC8(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  undefined1 auVar4 [16];
  undefined1 in_vs38 [16];
  undefined1 in_vs39 [16];
  undefined1 in_vs42 [16];
  undefined1 in_vs43 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 in_register_00010050;
  undefined4 in_register_00010054;
  undefined4 in_register_00010058;
  undefined4 in_vr5;
  float in_register_00010080;
  float in_register_00010084;
  float in_register_00010088;
  float in_vr8;
  undefined4 in_register_000100c0;
  undefined4 in_register_000100c4;
  undefined4 in_register_000100c8;
  undefined4 in_vr12;
  
  iVar2 = (int)in_r0;
  pfVar1 = (float *)((uint)(&lbl_8209AB20 + iVar2) & 0xfffffff0);
  fVar6 = *pfVar1;
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  puVar3 = (undefined4 *)(iVar2 + param_2 & 0xfffffff0);
  *puVar3 = in_register_000100c0;
  puVar3[1] = in_register_000100c4;
  puVar3[2] = in_register_000100c8;
  puVar3[3] = in_vr12;
  vectorRotateLeftImmediateMaskInsert128
            (*(undefined1 (*) [16])(param_1 + 0x60U & 0xfffffff0),
             *(undefined1 (*) [16])((uint)(&lbl_82132D10 + iVar2) & 0xfffffff0),1,0);
  loadVectorLeftIndexed128(in_r0,0xffffffff82187980);{ V16 _vt0 = vectorReciprocalEstimateFloatingPoint(in_vs42); memcpy(auVar4, &_vt0, 16); }{ V16 _vt1 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,in_vs42,in_vs43); memcpy(auVar5, &_vt1, 16); }
  vectorMultiplyAddFloatingPoint(auVar5,auVar4,auVar4);
  pfVar1 = (float *)(iVar2 + param_3 & 0xfffffff0);
  *pfVar1 = fVar6 * in_register_00010080;
  pfVar1[1] = fVar7 * in_register_00010084;
  pfVar1[2] = fVar8 * in_register_00010088;
  pfVar1[3] = fVar9 * in_vr8;
  vectorAddFloatingPoint(in_vs39,in_vs38);
  puVar3 = (undefined4 *)(iVar2 + param_3 & 0xfffffff0);
  *puVar3 = in_register_00010050;
  puVar3[1] = in_register_00010054;
  puVar3[2] = in_register_00010058;
  puVar3[3] = in_vr5;
  return;
}

