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
extern int fn_822315A0();
extern int fn_82397FE0();
extern int fn_82398048();
extern int fn_823AD920();
extern int fn_82522588();
extern int fn_8265C9E0();
extern unsigned int iStack_6c;
extern unsigned int lbl_82191FB0;
extern unsigned int lbl_82192530;
extern unsigned int lbl_82192544;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


undefined8 fn_82398BD8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 in_r0;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 in_vr0 [16];
  undefined1 in_vr12 [16];
  undefined1 auVar9 [16];
  undefined1 in_vr13 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_70 [4];
  int iStack_6c;
  
  bVar8 = false;
  if (*(int *)(param_1 + 0x178) == 2) {
    bVar8 = *(int *)(*(int *)(param_1 + 0x2e0) + 0x68) != 0;
  }
  lVar3 = fn_8265C9E0(0x2e0);
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2e4);
    iVar2 = *(int *)(param_1 + 0x178);
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
    loadVectorLeftIndexed128(0xffffffff82192730,4);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr13,4,3); memcpy(auVar10, &_vt0, 16); }{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr0,4,3); memcpy(auVar9, &_vt1, 16); }
    vectorRotateLeftImmediateMaskInsert128(auVar10,auVar9,3,2);
    iVar4 = fn_82397FE0(param_1,0);
    if (((iVar4 == 0) || (iVar4 = fn_82397FE0(param_1,1), iVar4 == 0)) &&
       ((iVar4 = fn_82398048(param_1,0), iVar4 == 0 ||
        (iVar4 = fn_82398048(param_1,1), iVar4 == 0)))) {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
    uVar6 = fn_823AD920((double)*(float *)(iVar1 + 0x14),(double)lbl_82192530,
                              (double)lbl_82191FB0,(double)lbl_82192544,lVar3,param_1 + 0x180,
                              *(undefined4 *)(param_1 + 0x174),bVar8,uVar6,iVar2 == 1,iVar2 == 2);
  }
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x30);
  *(int *)(param_1 + 0x87c) = *(int *)(param_1 + 0x87c) + 1;
  if (uVar7 != *(uint *)(param_1 + 0x34)) {
    do {
      piVar5 = (int *)fn_82522588(auStack_70,uVar7);
      *(int *)(*piVar5 + 0x2d8) = (int)uVar6;
      if (iStack_6c != 0) {
        fn_822315A0();
      }
      uVar7 = uVar7 + 8;
    } while ((uVar7 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x34));
  }
  return uVar6;
}

