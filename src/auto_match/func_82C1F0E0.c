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
extern unsigned int *auStack_68;
extern unsigned int *auStack_80;
extern int fn_82C107F8();
extern int fn_82C1EAB8();
extern int fn_82C1EC50();
extern int fn_82C1EE20();
extern int fn_82F6B030();
extern unsigned int lbl_820ED314;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82C1F0E0(int param_1,longlong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  uint auStack_80 [4];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  auStack_80[2] = 0;
  auStack_80[0] = 0;
  auStack_80[1] = 0x50;
  uVar4 = (**(code **)(*piVar1 + 0xc))(*piVar1,0x50);
  if (-1 < (int)uVar4) {
    if ((*(short *)(piVar1[1] + 0x2a) < 1) && (0x4f < (param_2 - 0x18U & 0xffffffff))) {
      uVar4 = fn_82C1EE20(param_1,&uStack_50,auStack_80 + 2,auStack_80,auStack_80 + 1);
      if (((((((-1 < (int)uVar4) &&
              (uVar4 = fn_82C1EC50(param_1,&uStack_50,auStack_80 + 2,auStack_80,auStack_80 + 1),
              -1 < (int)uVar4)) &&
             (uVar4 = fn_82C1EC50(param_1,&uStack_50,auStack_80 + 2,auStack_80,auStack_80 + 1),
             -1 < (int)uVar4)) &&
            ((uVar4 = fn_82C1EC50(param_1,auStack_68,auStack_80 + 2,auStack_80,auStack_80 + 1),
             -1 < (int)uVar4 &&
             (uVar4 = fn_82C1EC50(param_1,&uStack_60,auStack_80 + 2,auStack_80,auStack_80 + 1),
             -1 < (int)uVar4)))) &&
           ((uVar4 = fn_82C1EC50(param_1,&uStack_58,auStack_80 + 2,auStack_80,auStack_80 + 1),
            -1 < (int)uVar4 &&
            ((uVar4 = fn_82C1EC50(param_1,&uStack_50,auStack_80 + 2,auStack_80,auStack_80 + 1),
             -1 < (int)uVar4 &&
             (uVar4 = fn_82C1EAB8(param_1,&uStack_6c,auStack_80 + 2,auStack_80,auStack_80 + 1),
             -1 < (int)uVar4)))))) &&
          (uVar4 = fn_82C1EAB8(param_1,&uStack_70,auStack_80 + 2,auStack_80,auStack_80 + 1),
          -1 < (int)uVar4)) &&
         ((uVar4 = fn_82C1EAB8(param_1,auStack_80 + 3,auStack_80 + 2,auStack_80,auStack_80 + 1),
          -1 < (int)uVar4 &&
          (uVar4 = fn_82C1EAB8(param_1,&uStack_70,auStack_80 + 2,auStack_80,auStack_80 + 1),
          -1 < (int)uVar4)))) {
        *(uint *)(piVar1[1] + 8) = auStack_80[3];
        *(undefined4 *)(piVar1[1] + 0xc) = uStack_64;
        dVar6 = (double)fn_82F6B030(uStack_60 >> 0x20);
        uVar2 = uStack_58;
        dVar7 = (double)lbl_820ED314;
        uVar5 = uStack_58 >> 0x20;
        uStack_58 = (ulonglong)((double)(float)dVar6 * dVar7);
        *(int *)(piVar1[1] + 0x10) = (((U64)(uStack_58) >> 32) & 0xFFFFFFFF) + (int)((uStack_60 & 0xffffffff) / 10000);
        dVar6 = (double)fn_82F6B030(uVar5);
        uVar3 = (((U64)(uStack_50) >> 32) & 0xFFFFFFFF);
        uStack_50 = (longlong)((double)(float)dVar6 * dVar7);
        *(int *)(piVar1[1] + 0x18) = (((U64)(uStack_50) >> 32) & 0xFFFFFFFF) + (int)((uVar2 & 0xffffffff) / 10000);
        *(undefined4 *)(piVar1[1] + 0x14) = uVar3;
        *(undefined4 *)(piVar1[1] + 0x1c) = uStack_70;
        *(undefined4 *)(piVar1[1] + 0x20) = uStack_6c;
        *(short *)(piVar1[1] + 0x2a) = *(short *)(piVar1[1] + 0x2a) + 1;
        uVar5 = ((param_2 - 0x18U) - (ulonglong)auStack_80[0]) - 0x50;
        uVar4 = fn_82C107F8(piVar1[0x38],6,0xb0040,auStack_80[3]);
        if ((-1 < (int)uVar4) &&
           (((uVar5 & 0xffffffff) != 0 &&
            (uVar4 = (**(code **)(*piVar1 + 0x14))(*piVar1,uVar5), -1 < (int)uVar4)))) {
          *(ulonglong *)(piVar1 + 2) = (uVar5 & 0xffffffff) + *(longlong *)(piVar1 + 2);
        }
      }
    }
    else {
      uVar4 = 0xffffffff8050000c;
    }
  }
  return uVar4;
}

