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
extern unsigned int *auStack_80;
extern int fn_82C10AD0();
extern int fn_82C1E938();
extern int fn_82F691F0();
extern unsigned int uStack_74;
extern unsigned int uStack_7c;


undefined8 fn_82C20F00(int param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ushort auStack_80 [2];
  uint uStack_7c;
  ushort *puStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [28];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar5 = param_2 - 0x18;
  auStack_70[0] = 0;
  uStack_7c = 0;
  puStack_78 = (ushort *)0x0;
  uStack_74 = (undefined4)uVar5;
  auStack_80[0] = 0;
  uVar4 = (**(code **)(*piVar1 + 0xc))(*piVar1,uVar5);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  if (1 < (uVar5 & 0xffffffff)) {
    uVar4 = fn_82C1E938(param_1,auStack_80,auStack_70,&uStack_7c,&uStack_74);
    uVar3 = auStack_80[0];
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    if (*(short *)(piVar1[1] + 0x3a) < 1) {
      uVar6 = (ulonglong)auStack_80[0];
      if (uVar6 != 0) {
        uVar4 = fn_82C10AD0(piVar1[0x38],0xb,8,&puStack_78);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        lVar2 = uVar6 << 4;
        puStack_78[0] = 0;
        puStack_78[1] = 0;
        puStack_78[2] = 0;
        puStack_78[3] = 0;
        *(ushort **)(piVar1[1] + 0x50) = puStack_78;
        *puStack_78 = uVar3;
        uVar4 = fn_82C10AD0(piVar1[0x38],0xb,lVar2,puStack_78 + 2);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(undefined4 *)(puStack_78 + 2),0,lVar2);
      }
      uVar5 = (uVar5 - uStack_7c) - 2;
      if (uVar5 == 0) {
        return uVar4;
      }
      uVar4 = (**(code **)(*piVar1 + 0x14))(*piVar1,uVar5);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      *(ulonglong *)(piVar1 + 2) = (uVar5 & 0xffffffff) + *(longlong *)(piVar1 + 2);
      return uVar4;
    }
  }
  return 0xffffffff8050000c;
}

