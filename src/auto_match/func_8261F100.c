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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_70;
extern unsigned int fStack_6c;
extern unsigned int fStack_7c;
extern int fn_8261EAE8();
extern unsigned int lbl_821917D4;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x8261f1b4) */
/* WARNING: Removing unreachable block (ram,0x8261f1ec) */
/* WARNING: Removing unreachable block (ram,0x8261f250) */
/* WARNING: Removing unreachable block (ram,0x8261f25c) */
/* WARNING: Removing unreachable block (ram,0x8261f288) */
/* WARNING: Removing unreachable block (ram,0x8261f2d8) */

undefined8
fn_8261F100(double param_1,int param_2,undefined8 param_3,undefined8 param_4,float *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 in_r0;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 in_vr0 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 in_vr12 [16];
  undefined1 auVar12 [16];
  undefined1 in_vr13 [16];
  float fStack_7c;
  undefined1 auStack_70 [4];
  float fStack_6c;

  uVar4 = ZEXT48(&stack0x00000000);
  if ((*(int *)(param_2 + 0x90) == 0) || (*(int *)(param_2 + 0x68) == 0)) {
    uVar6 = 0;
  }
  else {
    iVar2 = (int)param_3;
    puVar1 = (undefined4 *)((int)in_r0 + iVar2 & 0xfffffff0);
    uVar9 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    puVar3 = (undefined4 *)((uint)(auStack_70 + (int)in_r0) & 0xfffffff0);
    *puVar3 = *puVar1;
    puVar3[1] = uVar9;
    puVar3[2] = uVar10;
    puVar3[3] = uVar11;
    fStack_6c = (float)((double)fStack_6c + param_1);
    dVar7 = (double)lbl_821917D4;
    iVar5 = fn_8261EAE8(dVar7,param_2,uVar4 - 0x70,param_4,0,uVar4 - 0x80,uVar4 - 0x90,0);
    if (iVar5 == 0) {
      loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
      loadVectorLeftIndexed128(in_r0,param_3);
      loadVectorLeftIndexed128(param_3,8);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr13,4,3); memcpy(auVar12, &_vt0, 16); }
      loadVectorLeftIndexed128(in_r0,uVar4 - 0x90);{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr13,4,3); memcpy(auVar8, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar8,auVar12,3,2); memcpy(auVar8, &_vt2, 16); }
      memcpy((void *)((const void *)((int)in_r0 + (int)(uVar4 - 0x70) & 0xfffffff0)), auVar8, 16);
      uVar6 = fn_8261EAE8(dVar7,param_2,uVar4 - 0x70,uVar4 - 0x70,1,uVar4 - 0x80,0,0,8);
      if ((int)uVar6 != 0) {
        *param_5 = fStack_7c;
        return uVar6;
      }
      uVar6 = 0;
      iVar5 = fn_8261EAE8(dVar7,param_2,param_2);
      if (iVar5 == 0) {
        fStack_7c = (float)((double)*(float *)(iVar2 + 4) - param_1);
      }
      else {
        fStack_7c = *(float *)(iVar2 + 4);
      }
    }
    else {
      uVar6 = 1;
    }
    *param_5 = fStack_7c;
  }
  return uVar6;
}
