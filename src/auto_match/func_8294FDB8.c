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
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8294AC48();
extern int fn_82963FA8();
extern int fn_82964628();
extern unsigned int lbl_82005710;
extern unsigned int lbl_8200E890;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;


undefined8 fn_8294FDB8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  double dVar8;
  undefined4 auStack_150 [4];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [16];
  undefined4 auStack_e0 [4];
  int aiStack_d0 [52];
  
  uStack_138 = 2;
  auStack_150[0] = 0;
  uStack_140 = 0;
  uStack_13c = 1;
  uStack_134 = 3;
  if ((**(uint **)(param_1 + 0x104) & 0xfffff) == 1) {
    uVar5 = fn_8294AC48(param_1,*(uint **)(param_1 + 0x104),0xffffffff82036850,auStack_130,
                          auStack_150,auStack_f0,&uStack_140,1);
    if ((((int)uVar5 == 1) &&
        (uVar5 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff820368b0,
                               auStack_130,auStack_150,auStack_f0,&uStack_140,1), (int)uVar5 == 1))
       && (uVar5 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82036910,
                                 auStack_130,auStack_150,auStack_f0,&uStack_140,1), (int)uVar5 == 1)
       ) {
      uVar5 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82036970,auStack_130,
                            auStack_150,auStack_f0,&uStack_140,1);
    }
    if ((int)uVar5 == 0) {
      uVar7 = 4;
      do {
        iVar1 = *(int *)(*(int *)(uVar7 + *(int *)(*(int *)(param_1 + 0x104) + 8)) * 4 +
                        *(int *)(param_1 + 0x14));
        if ((((*(uint *)(*(int *)(*(int *)(iVar1 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
              == 0) || (*(double *)(iVar1 + 0x20) != lbl_82005710)) || (*(int *)(iVar1 + 8) != -1))
        goto LAB_8294fe04;
        uVar7 = uVar7 + 4;
      } while (uVar7 < 8);
      bVar4 = false;
      iVar1 = *(int *)(aiStack_d0[0] * 4 + *(int *)(param_1 + 0x14));
      if ((*(int *)(iVar1 + 8) == -1) &&
         ((*(uint *)(*(int *)(*(int *)(iVar1 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) != 0
         )) {
        bVar4 = true;
      }
      uVar7 = 0;
      dVar8 = lbl_8200E890;
      do {
        iVar1 = *(int *)((int)aiStack_d0 + uVar7);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + uVar7) =
             *(undefined4 *)((int)auStack_e0 + uVar7);
        iVar2 = *(int *)(iVar1 * 4 + *(int *)(param_1 + 0x14));
        iVar6 = fn_82964628(*(undefined8 *)(iVar2 + 0x20),param_1,*(undefined4 *)(iVar2 + 4),
                                  *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10));
        if (iVar6 == -1) {
          return 0xffffffff8007000e;
        }
        iVar3 = *(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14));
        fn_82963FA8(iVar3,iVar2);
        if (bVar4) {
          *(double *)(iVar3 + 0x20) = *(double *)(iVar3 + 0x20) * dVar8;
        }
        else {
          if (*(int *)(iVar3 + 0x38) == -1) {
            *(int *)(iVar3 + 0x38) = iVar1;
          }
          *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) ^ 0x80000;
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x104) + 8) + uVar7;
        uVar7 = uVar7 + 4;
        *(int *)(iVar1 + 4) = iVar6;
      } while (uVar7 < 4);
      uVar5 = 0;
    }
  }
  else {
LAB_8294fe04:
    uVar5 = 1;
  }
  return uVar5;
}

