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
extern unsigned int *auStack_80;
extern int fn_82C10AD0();
extern int fn_82C1E938();
extern int fn_82F691F0();
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


undefined8 fn_82C221D8(int param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ushort auStack_80 [2];
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ushort *apuStack_70 [28];
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar5 = param_2 - 0x18;
  apuStack_70[0] = (ushort *)0x0;
  uStack_74 = 0;
  uStack_7c = 0;
  uStack_78 = (undefined4)uVar5;
  auStack_80[0] = 0;
  uVar4 = (**(code **)(*piVar1 + 0xc))(*piVar1,uVar5);
  if (-1 < (int)uVar4) {
    if ((*(short *)(piVar1[1] + 0x36) < 1) && (1 < (uVar5 & 0xffffffff))) {
      uVar4 = fn_82C1E938(param_1,auStack_80,&uStack_74,&uStack_7c,&uStack_78);
      uVar3 = auStack_80[0];
      if (-1 < (int)uVar4) {
        uVar6 = (ulonglong)auStack_80[0];
        if (uVar6 == 0) {
          uVar5 = (uVar5 - uStack_7c) - 2;
          if ((uVar5 != 0) &&
             (uVar4 = (**(code **)(*piVar1 + 0x14))(*piVar1,uVar5), -1 < (int)uVar4)) {
            *(ulonglong *)(piVar1 + 2) = (uVar5 & 0xffffffff) + *(longlong *)(piVar1 + 2);
          }
        }
        else {
          uVar4 = fn_82C10AD0(piVar1[0x38],0xb,8,apuStack_70);
          if (-1 < (int)uVar4) {
            apuStack_70[0][0] = 0;
            apuStack_70[0][1] = 0;
            apuStack_70[0][2] = 0;
            apuStack_70[0][3] = 0;
            lVar2 = uVar6 * 0x14;
            *(ushort **)(piVar1[1] + 0x60) = apuStack_70[0];
            *apuStack_70[0] = uVar3;
            uVar4 = fn_82C10AD0(piVar1[0x38],0xb,lVar2,apuStack_70[0] + 2);
            if (-1 < (int)uVar4) {
                    /* WARNING: Subroutine does not return */
              fn_82F691F0(*(undefined4 *)(apuStack_70[0] + 2),0,lVar2);
            }
          }
        }
      }
    }
    else {
      uVar4 = 0xffffffff8050000c;
    }
  }
  return uVar4;
}

