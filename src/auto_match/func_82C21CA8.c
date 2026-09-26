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
extern unsigned int *auStack_7c;
extern int fn_82C10AD0();
extern int fn_82C1EAB8();
extern int fn_82C1EE20();
extern int fn_82F691F0();
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


undefined8 fn_82C21CA8(int param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint auStack_7c [3];
  undefined1 auStack_70 [112];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uStack_80 = 0;
  uVar4 = param_2 - 0x18;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_84 = (undefined4)uVar4;
  auStack_7c[0] = 0;
  uVar2 = (**(code **)(*piVar1 + 0xc))(*piVar1,uVar4);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  if (0x13 < (uVar4 & 0xffffffff)) {
    uVar2 = fn_82C1EE20(param_1,auStack_70,&uStack_80,&uStack_88,&uStack_84);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar2 = fn_82C1EAB8(param_1,auStack_7c,&uStack_80,&uStack_88,&uStack_84);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    uVar3 = (ulonglong)auStack_7c[0];
    *(uint *)(piVar1[1] + 0x70) = auStack_7c[0];
    if (*(short *)(piVar1[1] + 0x30) < 1) {
      if (auStack_7c[0] != 0) {
        uVar2 = fn_82C10AD0(piVar1[0x38],0xb,uVar3 * 0x1c,&uStack_8c);
        if ((int)uVar2 < 0) {
          return uVar2;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uStack_8c,0,uVar3 * 0x1c);
      }
      uVar4 = (uVar4 - uStack_88) - 0x14;
      if (uVar4 == 0) {
        return uVar2;
      }
      uVar2 = (**(code **)(*piVar1 + 0x14))(*piVar1,uVar4);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *(ulonglong *)(piVar1 + 2) = (uVar4 & 0xffffffff) + *(longlong *)(piVar1 + 2);
      return uVar2;
    }
  }
  return 0xffffffff8050000c;
}

