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
extern int fn_82C1EE20();
extern int fn_82F691F0();
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8e;
extern unsigned int uStack_90;


undefined8 fn_82C21328(int param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ushort uStack_90;
  ushort uStack_8e;
  ushort *puStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined4 auStack_80 [4];
  undefined1 auStack_70 [112];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  auStack_80[0] = 0;
  uVar5 = param_2 - 0x18;
  uStack_88 = 0;
  puStack_8c = (ushort *)0x0;
  uStack_84 = (undefined4)uVar5;
  uStack_8e = 0;
  uStack_90 = 0;
  uVar4 = (**(code **)(*piVar1 + 0xc))(*piVar1,uVar5);
  if ((int)uVar4 < 0) {
    return uVar4;
  }
  if (0x13 < (uVar5 & 0xffffffff)) {
    uVar4 = fn_82C1EE20(param_1,auStack_70,auStack_80,&uStack_88,&uStack_84);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = fn_82C1E938(param_1,&uStack_8e,auStack_80,&uStack_88,&uStack_84);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    uVar4 = fn_82C1E938(param_1,&uStack_90,auStack_80,&uStack_88,&uStack_84);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
    if (*(short *)(piVar1[1] + 0x32) < 1) {
      uVar4 = fn_82C10AD0(piVar1[0x38],0xb,0xc,&puStack_8c);
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      puStack_8c[0] = 0;
      puStack_8c[1] = 0;
      puStack_8c[2] = 0;
      puStack_8c[3] = 0;
      puStack_8c[4] = 0;
      puStack_8c[5] = 0;
      iVar2 = piVar1[1];
      *(ushort **)(iVar2 + 0x54) = puStack_8c;
      puStack_8c[1] = uStack_90;
      if ((ulonglong)uStack_90 != 0) {
        lVar3 = (ulonglong)uStack_90 << 3;
        uVar4 = fn_82C10AD0(piVar1[0x38],0xb,lVar3,puStack_8c + 2,puStack_8c,iVar2,puStack_8c)
        ;
        if ((int)uVar4 < 0) {
          return uVar4;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(undefined4 *)(puStack_8c + 2),0,lVar3);
      }
      *puStack_8c = uStack_8e;
      if ((ulonglong)uStack_8e != 0) {
        lVar3 = (ulonglong)uStack_8e * 0xc;
        uVar4 = fn_82C10AD0(piVar1[0x38],0xb,lVar3,puStack_8c + 4);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(undefined4 *)(puStack_8c + 4),0,lVar3);
      }
      *(short *)(piVar1[1] + 0x32) = *(short *)(piVar1[1] + 0x32) + 1;
      uVar5 = (uVar5 - uStack_88) - 0x14;
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

