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
extern int fn_8251CC50();
extern int fn_8251E0B8();
extern int fn_82520218();
extern int fn_82520270();
extern int fn_825269D0();
extern int fn_8253D030();
extern int fn_8253D108();
extern int fn_82570738();
extern int fn_8257ECD0();
extern int fn_82596100();
extern int fn_82596240();
extern int fn_825CFDF0();
extern int fn_825F4A28();
extern int fn_82D92950();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern int (*lbl_83265A00)();
extern int (*lbl_83265A08)();
extern unsigned int lbl_8326B4A0;
extern unsigned int lbl_8326C200;
extern unsigned int lbl_8326F968;
extern unsigned int lbl_8326F96C;
extern float lbl_8327F894;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82595950(int param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined8 in_r0;
  undefined4 *puVar4;
  double dVar5;
  undefined1 in_vr0 [16];
  undefined1 in_vr11 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  undefined1 auVar6 [16];
  
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x10);
  if (((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x30) == 0)) &&
     (*(int *)(param_1 + 0x2c) == 0)) {
    puVar4 = (undefined4 *)(param_1 + 0x10);
    do {
      puVar4 = puVar4 + 1;
      fn_82596100(param_1,*puVar4);
    } while (*(int *)(param_1 + 0x24) != 0);
  }
  fn_82520270();
  if (lbl_83265A00 != (code *)0x0) {
    (*lbl_83265A00)(param_1);
  }
  fn_825F4A28(param_1);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      fn_82596240(param_1);
      goto LAB_82595a7c;
    }
    if (uVar1 < 3) {
      if (*(int *)(param_1 + 0x34) == 0) {
        if (*(int *)(param_1 + 0x234) != 0) {
          fn_8253D108(param_1 + 0x1f0,param_1);
        }
        loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
        loadVectorLeftIndexed128(0xffffffff821ca45c,4);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr12,4,3); memcpy(auVar6, &_vt0, 16); }
        vectorRotateLeftImmediateMaskInsert128(in_vr11,in_vr0,4,3);lbl_8326C200 = (vectorRotateLeftImmediateMaskInsert128(in_vr0,auVar6,3,2).lo);
        *(undefined4 *)(param_1 + 0x30) = 0;
        lbl_8326B4A0 = 1;
        fn_825CFDF0(param_1 + 0x2f0,param_1);
        lbl_8326B4A0 = 0;
        fn_8257ECD0(param_1 + 0x7a4);
        fn_8251CC50(*(undefined4 *)(param_1 + 0xc),1);
        *(undefined4 *)(param_1 + 0x34) = 1;
        if (*(int *)(param_1 + 0x234) != 0) {
          iVar2 = *(int *)(param_1 + 0x1f8);
          if (iVar2 != 0) {
            (**(code **)(**(int **)(iVar2 + 0x58) + 0x30))();
            fn_82D92950(iVar2);
          }
        }
        if ((lbl_8326F968 == 0) || (bVar3 = 1, lbl_8326F96C != 0)) {
          bVar3 = 0;
        }
        fn_8253D030((double)((lbl_821CA460 /
                                   (float)(longlong)((int)((-(uint)bVar3 & 0xfffffff6) + 0x3c) >> 1)
                                   ) * *(float *)(param_1 + 0x820)),param_1 + 0x1f0,param_1);
      }
      goto LAB_82595a7c;
    }
    if (uVar1 != 3) {
      if (uVar1 < 5) {
        fn_8251E0B8(param_1 + 0x30c,0);
        fn_825269D0(0xe,param_1);
        iVar2 = *(int *)(param_1 + 0x24);
        if ((iVar2 < 1) || (*(int *)((iVar2 + 4) * 4 + param_1) != 1)) {
          *(undefined4 *)((iVar2 + 5) * 4 + param_1) = 1;
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        }
      }
      goto LAB_82595a7c;
    }
    fn_82520218();
  }
  if (lbl_83265A08 != (code *)0x0) {
    (*lbl_83265A08)(param_1);
  }
LAB_82595a7c:
  dVar5 = (double)lbl_821CC160;
  if ((double)*(float *)(param_1 + 0x838) <= dVar5) {
    dVar5 = (double)(*(float *)(param_1 + 0x820) * lbl_8327F894);
  }
  fn_82570738(dVar5,*(undefined4 *)(param_1 + 0x848));
  return;
}

