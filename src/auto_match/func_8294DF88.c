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
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_e0;
extern int fn_8294AC48();
extern unsigned int lbl_82005710;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;


undefined8 fn_8294DF88(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 auStack_140 [4];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [16];
  int aiStack_d0 [52];
  
  uStack_124 = 3;
  uVar2 = **(uint **)(param_1 + 0x104);
  auStack_140[0] = 0;
  uVar8 = uVar2 & 0xfffff;
  uStack_130 = 0;
  uStack_12c = 1;
  uStack_128 = 2;
  uVar4 = fn_8294AC48(param_1,*(uint **)(param_1 + 0x104),0xffffffff82036550,auStack_120,
                        auStack_140,auStack_e0,&uStack_130,uVar8);
  bVar1 = (int)uVar4 != 1;
  if (!bVar1) {
    uVar4 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff820365b0,auStack_120,
                          auStack_140,auStack_e0,&uStack_130,uVar8);
  }
  if ((int)uVar4 == 0) {
    uVar6 = 0;
    if ((uVar2 & 0xfffff) != 0) {
      iVar7 = (uVar2 & 0xfffff) << 2;
      piVar5 = aiStack_d0;
      do {
        if ((((*piVar5 != piVar5[4]) ||
             (iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar7) * 4 +
                              *(int *)(param_1 + 0x14)),
             (*(uint *)(*(int *)(*(int *)(iVar3 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
             == 0)) || (*(double *)(iVar3 + 0x20) != lbl_82005710)) || (*(int *)(iVar3 + 8) != -1))
        {
          return 1;
        }
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar6 < uVar8);
    }
    if (bVar1) {
      uVar6 = uVar8 | 0x73800000;
    }
    else {
      uVar6 = uVar8 | 0x73700000;
    }
    **(uint **)(param_1 + 0x104) = uVar6;
    if ((uVar2 & 0xfffff) != 0) {
      iVar7 = 0;
      do {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar7) =
             *(undefined4 *)((int)aiStack_d0 + iVar7);
        iVar7 = iVar7 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar4 = 0;
  }
  return uVar4;
}

