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
extern int fn_82964628();
extern unsigned int lbl_82005710;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;


undefined8 fn_8294FC18(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined4 auStack_140 [4];
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 auStack_120 [64];
  undefined4 auStack_e0 [4];
  int aiStack_d0 [52];
  
  uStack_124 = 3;
  uVar2 = **(uint **)(param_1 + 0x104);
  auStack_140[0] = 0;
  uVar9 = uVar2 & 0xfffff;
  uStack_130 = 0;
  uStack_12c = 1;
  uStack_128 = 2;
  uVar3 = fn_8294AC48(param_1,*(uint **)(param_1 + 0x104),0xffffffff82036a90,auStack_120,
                        auStack_140,auStack_e0,&uStack_130,uVar9);
  bVar1 = (int)uVar3 != 1;
  if (!bVar1) {
    uVar3 = fn_8294AC48(param_1,*(undefined4 *)(param_1 + 0x104),0xffffffff82036b10,auStack_120,
                          auStack_140,auStack_e0,&uStack_130,uVar9);
  }
  if ((int)uVar3 == 0) {
    uVar5 = 0;
    if ((uVar2 & 0xfffff) != 0) {
      piVar7 = aiStack_d0;
      do {
        if (((piVar7[-4] != *piVar7) || (*piVar7 != piVar7[4])) || (piVar7[-4] != piVar7[8])) {
          return 1;
        }
        uVar5 = uVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar5 < uVar9);
    }
    if (bVar1) {
      uVar5 = 0x74500000;
    }
    else {
      uVar5 = 0x74400000;
    }
    **(uint **)(param_1 + 0x104) = uVar5 | uVar9;
    iVar4 = fn_82964628(lbl_82005710,param_1,*(undefined4 *)(param_1 + 0x78),0,0);
    if (iVar4 == -1) {
      uVar3 = 0xffffffff8007000e;
    }
    else {
      if ((uVar2 & 0xfffff) != 0) {
        iVar8 = 0;
        iVar6 = (uVar2 & 0xfffff) << 2;
        do {
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar8) =
               *(undefined4 *)((int)auStack_e0 + iVar8);
          iVar8 = iVar8 + 4;
          *(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar6) = iVar4;
          iVar6 = iVar6 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

