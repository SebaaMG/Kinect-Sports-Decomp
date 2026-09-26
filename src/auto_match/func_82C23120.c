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
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_82C10AD0();
extern int fn_82C1EAB8();
extern int fn_82C1EC50();
extern int fn_82C1EE20();
extern int fn_82F691F0();
extern unsigned int iStack_78;
extern unsigned int uStack_68;
extern unsigned int uStack_74;
extern unsigned int uStack_7c;


undefined8 fn_82C23120(int param_1,longlong param_2,undefined1 param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 auStack_70 [2];
  ulonglong uStack_68;
  undefined1 auStack_60 [96];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  auStack_70[0] = 0;
  uVar3 = param_2 - 0x18;
  uStack_7c = 0;
  uStack_74 = (undefined4)uVar3;
  lVar4 = 0;
  iStack_78 = 0;
  uStack_68 = 0;
  uVar2 = (**(code **)(*piVar1 + 0xc))(*piVar1,uVar3);
  if ((int)uVar2 < 0) goto LAB_82c2332c;
  if (0xf < (uVar3 & 0xffffffff)) {
    lVar4 = 0x10;
    uVar2 = fn_82C1EE20(param_1,auStack_60,auStack_70,&uStack_7c,&uStack_74);
    if ((int)uVar2 < 0) goto LAB_82c2332c;
    if (0x1f < (uVar3 & 0xffffffff)) {
      lVar4 = 0x20;
      uVar2 = fn_82C1EC50(param_1,&uStack_68,auStack_70,&uStack_7c,&uStack_74);
      if (-1 < (int)uVar2) {
        *(int *)(param_4 + 4) = (int)((uStack_68 & 0xffffffff) / 10000);
        uVar2 = fn_82C1EAB8(param_1,&iStack_78,auStack_70,&uStack_7c,&uStack_74);
        if (-1 < (int)uVar2) {
          *(int *)(param_4 + 8) = iStack_78;
          uVar2 = fn_82C1EAB8(param_1,&iStack_78,auStack_70,&uStack_7c,&uStack_74);
          if (-1 < (int)uVar2) {
            *param_4 = param_3;
            *(int *)(param_4 + 0xc) = iStack_78;
            if (iStack_78 != 0) {
              uVar2 = fn_82C10AD0(piVar1[0x38],0xb,iStack_78 << 3,param_4 + 0x10);
              if (-1 < (int)uVar2) {
                    /* WARNING: Subroutine does not return */
                fn_82F691F0(*(undefined4 *)(param_4 + 0x10),0,*(int *)(param_4 + 0xc) << 3);
              }
            }
          }
        }
      }
      goto LAB_82c2332c;
    }
  }
  uVar2 = 0xffffffff8050000c;
LAB_82c2332c:
  do {
    uVar5 = (uVar3 - uStack_7c) - lVar4;
    if (uVar5 == 0) {
      return uVar2;
    }
    uVar2 = (**(code **)(*piVar1 + 0x14))(*piVar1,uVar5);
  } while ((int)uVar2 < 0);
  *(ulonglong *)(piVar1 + 2) = (uVar5 & 0xffffffff) + *(longlong *)(piVar1 + 2);
  return uVar2;
}

