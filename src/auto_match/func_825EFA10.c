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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int fStack_68;
extern int fn_82544528();
extern int fn_825C7348();
extern int fn_825EF630();
extern int fn_826231D8();
extern int fn_82623338();
extern int fn_82631578();
extern int fn_82631920();
extern int fn_82637B30();
extern int fn_82637C50();
extern int fn_82637CE0();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_82639EA8();
extern int fn_8263CBB0();
extern int fn_82F68CC0();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831C1CEC;
extern unsigned int lbl_8327F930;
extern unsigned int lbl_8327FA74;
extern unsigned int lbl_83282270;
extern unsigned int stack0x00000000;
extern unsigned int uStack_94;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825EFA10(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 in_r0;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 in_vr0 [16];
  undefined1 auVar9 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  undefined1 auVar10 [16];
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_68;

  uVar6 = ZEXT48(&stack0x00000000);
  piVar2 = *(int **)((*(uint *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 5) * 4 + param_1);
  iVar1 = *piVar2;
  fn_82F68CC0(uVar6 - 0x90,*(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 4) + 0x90,0x40);
  fn_825C7348(3);
  uVar7 = fn_825C7348(2);
  fn_826231D8(piVar2,uVar7);
  fn_82639EA8(iVar1,((ulonglong)*(uint *)(param_1 + 8) & 0x7fffff) * 0x200 +
                          (ulonglong)*(uint *)(param_1 + 4) + 0x174);
  *(undefined4 *)(iVar1 + 0x2f14) = 1;
  *(uint *)(iVar1 + 0x2934) =
       (-(uint)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(uint *)(iVar1 + 0x2934) & 0xfffffffd;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xfffffffb;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
  uVar7 = fn_82637B30(iVar1,1);
  uVar7 = fn_82637C50(uVar7,8);
  uVar7 = fn_82637CE0(uVar7,0);
  *(undefined4 *)(iVar1 + 0x2ed8) = lbl_831C1CEC;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x80000;
  fn_82631920(uVar7,lbl_8327F930);
  *(undefined4 *)(iVar1 + 0x2f04) = 7;
  *(uint *)(iVar1 + 0x28dc) =
       -(uint)(*(int *)(iVar1 + 0x3148) != 0) & 7 | *(uint *)(iVar1 + 0x28dc) & 0xfffffff0;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
  *(undefined4 *)(iVar1 + 0x2f18) = 1;
  *(uint *)(iVar1 + 0x2934) =
       *(uint *)(iVar1 + 0x2934) & 0xfffffffe | -(uint)(*(int *)(iVar1 + 0x3158) != 0) & 1;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
  *(undefined1 *)(iVar1 + 0x2902) = 0x42;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x10000000;
  *(undefined1 *)(iVar1 + 0x2903) = 2;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x10000000;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xffffc7ff;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xfffff8ff | 0x200;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xfffe3fff;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x800;
  *(uint *)(iVar1 + 0x2948) = *(uint *)(iVar1 + 0x2948) & 0xfffffff8 | 6;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x40;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xffffff8f | 0x30;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
  fn_82631578(iVar1,lbl_8327FA74);
  fStack_68 = fStack_68 + lbl_821CA460;
  uStack_a0 = CONCAT44(fStack_68,(((U64)(uStack_a0) >> 32) & 0xFFFFFFFF));
  loadVectorLeftIndexed128(in_r0,uVar6 - 0xa0);
  loadVectorLeftIndexed128(in_r0,uVar6 - 0xac);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar10, &_vt0, 16); }
  loadVectorLeftIndexed128(in_r0,uVar6 - 0xb0);
  loadVectorLeftIndexed128(in_r0,uVar6 - 0x54);{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr12,4,3); memcpy(auVar9, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar10,auVar9,3,2); memcpy(auVar9, &_vt2, 16); }
  memcpy((void *)((const void *)((int)&uStack_a0 + (int)in_r0 & 0xfffffff0)), auVar9, 16);
  *(float *)(iVar1 + 0x1790) = fStack_68;
  *(undefined4 *)(iVar1 + 0x1794) = (((U64)(uStack_a0) >> 32) & 0xFFFFFFFF);
  *(undefined4 *)(iVar1 + 0x1798) = uStack_98;
  *(undefined4 *)(iVar1 + 0x179c) = uStack_94;
  *(ulonglong *)(iVar1 + 8) = *(ulonglong *)(iVar1 + 8) | 0x8000000000000000;
  uVar7 = fn_82544528();
  fn_8263CBB0(iVar1,0,uVar7,0x80000000);
  uVar7 = fn_82639380(iVar1,0,0);
  uVar7 = fn_82639528(uVar7,0);
  *(uint *)(iVar1 + 0x480) = *(uint *)(iVar1 + 0x480) & 0xffffe3ff | 0x800;
  *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x80000000;
  *(uint *)(iVar1 + 0x480) = *(uint *)(iVar1 + 0x480) & 0xffff1fff | 0x4000;
  *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x80000000;
  fn_8263CBB0(uVar7,1,(&lbl_83282270)
                            [*(int *)(*(int *)(param_1 + 8) * 4 + *(int *)(param_1 + 0xc))],
                    0x40000000);
  *(uint *)(iVar1 + 0x4ac) = *(uint *)(iVar1 + 0x4ac) & 0xfffffffc;
  *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x40000000;
  uVar7 = fn_82639380(iVar1,1,0);
  fn_82639528(uVar7,1);
  fVar5 = lbl_821CC160;
  *(uint *)(iVar1 + 0x498) = *(uint *)(iVar1 + 0x498) & 0xffffe3ff | 0x1800;
  *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x40000000;
  *(uint *)(iVar1 + 0x498) = *(uint *)(iVar1 + 0x498) & 0xffff1fff | 0xc000;
  *(ulonglong *)(iVar1 + 0x18) = *(ulonglong *)(iVar1 + 0x18) | 0x40000000;
  iVar8 = *(int *)(param_1 + 8) * 0x200 + *(int *)(param_1 + 4);
  uStack_a0 = (ulonglong)*(uint *)(iVar8 + 0x178);
  fVar4 = (float)uStack_a0;
  fVar3 = fVar5;
  if (*(int *)(param_1 + 8) == 1) {
    uStack_a0 = (ulonglong)*(uint *)(iVar8 + 0x174);
    fVar3 = -(float)uStack_a0;
  }
  *(float *)(iVar1 + 0x1780) = -fVar4;
  *(float *)(iVar1 + 0x1784) = fVar5;
  *(float *)(iVar1 + 0x1788) = fVar5;
  *(float *)(iVar1 + 0x178c) = fVar3;
  *(ulonglong *)(iVar1 + 8) = *(ulonglong *)(iVar1 + 8) | 0x8000000000000000;
  fn_825EF630(param_1,iVar1);
  *(undefined4 *)(iVar1 + 0x2f18) = 0;
  *(uint *)(iVar1 + 0x2934) = *(uint *)(iVar1 + 0x2934) & 0xfffffffe;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x20800;
  uVar7 = fn_82637B30(iVar1,0);
  *(undefined4 *)(iVar1 + 0x2f04) = 0xf;
  *(uint *)(iVar1 + 0x28dc) =
       *(uint *)(iVar1 + 0x28dc) & 0xfffffff0 | -(uint)(*(int *)(iVar1 + 0x3148) != 0) & 0xf;
  *(ulonglong *)(iVar1 + 0x10) = *(ulonglong *)(iVar1 + 0x10) | 0x2000000000;
  uVar7 = fn_82637C50(uVar7,6);
  fn_82637CE0(uVar7,7);
  fn_82623338(piVar2);
  return;
}
