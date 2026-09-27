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
extern unsigned int *auStack_50;
extern int fn_82563578();
extern int fn_82563688();
extern int fn_827F2360();
extern int fn_827F4038();
extern int fn_82F63108();
extern unsigned int lbl_8218E690;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_8255F250(double param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 in_r0;
  longlong lVar7;
  ushort *puVar8;
  undefined1 in_vr0 [16];
  undefined1 auVar9 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  undefined1 auVar10 [16];
  struct { undefined4 first; undefined4 second; } stack_pair_60;

  undefined4 uStack_58;
  undefined1 auStack_50 [80];

  if (*(int *)(param_2 + 0x114) != 0) {
    if ((((*(int *)(param_2 + 0x164) != 0) && (*(int *)(param_2 + 0x180) == 0)) &&
        (*(int *)(param_2 + 0x16c) != 0)) && (*(int *)(param_2 + 0x110) != 0)) {
      fn_82563578(*(int *)(param_2 + 0x110),*(undefined4 *)(param_2 + 0x17c),
                        *(int *)(param_2 + 0x164),*(undefined4 *)(param_2 + 0x170),
                        *(undefined4 *)(param_2 + 0x178));
    }
    *(float *)(param_2 + 0x188) = (float)((double)*(float *)(param_2 + 0x188) + param_1);
    *(int *)(param_2 + 0x180) = *(int *)(param_2 + 0x180) + 1;
  }
  fn_827F2360((double)(float)((double)(longlong)(1 - *(int *)(param_2 + 0x118)) * param_1),
                    param_2);
  if ((*(int *)(param_2 + 0x1a0) != 0) &&
     (lVar7 = fn_827F4038(param_2), (*(byte *)((int)lVar7 + 0x1c) & 0x70) != 0)) {
    iVar2 = *(int *)(param_2 + 0x1a0);
    loadVectorLeftIndexed128(in_r0,lVar7 + 0x14);
    loadVectorLeftIndexed128(in_r0,lVar7 + 0x10);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar10, &_vt0, 16); }
    loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
    loadVectorLeftIndexed128(in_r0,lVar7 + 0x18);{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr12,4,3); memcpy(auVar9, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar10,auVar9,3,2); memcpy(auVar9, &_vt2, 16); }
    memcpy((void *)((const void *)((uint)(auStack_50 + (int)in_r0) & 0xfffffff0)), auVar9, 16);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(code **)(**(int **)(param_2 + 0x1a0) + 4))(&stack_pair_60.first,*(int **)(param_2 + 0x1a0),auStack_50)
    ;
    *(undefined4 *)(lVar7 + 0x10) = stack_pair_60.first;
    *(undefined4 *)(lVar7 + 0x14) = stack_pair_60.second;
    *(undefined4 *)(lVar7 + 0x18) = uStack_58;
  }
  puVar8 = *(ushort **)(param_2 + 0x164);
  if (((puVar8 != (ushort *)0x0) && (*(int *)(param_2 + 0x16c) != 0)) &&
     ((*(int *)(param_2 + 0x118) == 0 && (iVar2 = *(int *)(param_2 + 0x110), iVar2 != 0)))) {
    iVar3 = *(int *)(param_2 + 0x170);
    uVar4 = *(undefined4 *)(param_2 + 0x178);
    uVar5 = *(undefined4 *)(param_2 + 0x17c);
    if (iVar3 != 0) {
      uVar1 = puVar8[6];
      while (uVar6 = (uint)uVar1, uVar6 != 0) {
        if ((0x31 < uVar6) || (*(uint *)(&lbl_8218E690 + uVar6 * 0xc) == (uint)*puVar8)) {
          fn_82563688(iVar2,uVar5,puVar8,iVar3,uVar4);
        }
        puVar8 = (ushort *)((uint)*puVar8 + (int)puVar8);
        uVar1 = puVar8[6];
      }
    }
  }
  return;
}
