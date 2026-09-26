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
extern unsigned int *auStack_b0;
extern int fn_82C10AD0();
extern int fn_82C1E938();
extern int fn_82F691F0();
extern unsigned int uStack_98;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a4;
extern unsigned int uStack_ac;


undefined8 fn_82C23C10(int param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ushort auStack_b0 [2];
  undefined4 uStack_ac;
  ushort *puStack_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uVar4 = param_2 - 0x18;
  uStack_9c = 0;
  uStack_a4 = 0;
  puStack_a8 = (ushort *)0x0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_a0 = (undefined4)uVar4;
  auStack_b0[0] = 0;
  uVar3 = (**(code **)(*piVar1 + 0xc))(*piVar1,uVar4);
  if (-1 < (int)uVar3) {
    if ((uVar4 & 0xffffffff) < 2) {
      uVar3 = 0xffffffff8050000c;
    }
    else {
      uVar3 = fn_82C1E938(param_1,auStack_b0,&uStack_9c,&uStack_a4,&uStack_a0);
      if ((-1 < (int)uVar3) &&
         (uVar3 = fn_82C10AD0(piVar1[0x38],0xb,8,&puStack_a8), -1 < (int)uVar3)) {
        puStack_a8[0] = 0;
        puStack_a8[1] = 0;
        puStack_a8[2] = 0;
        puStack_a8[3] = 0;
        *(ushort **)((*(short *)(piVar1[1] + 0x48) + 0x21) * 4 + piVar1[1]) = puStack_a8;
        *(short *)(piVar1[1] + 0x48) = *(short *)(piVar1[1] + 0x48) + 1;
        *puStack_a8 = auStack_b0[0];
        if ((ulonglong)auStack_b0[0] == 0) {
          uVar4 = (uVar4 - uStack_a4) - 2;
          if ((uVar4 != 0) &&
             (uVar3 = (**(code **)(*piVar1 + 0x14))(*piVar1,uVar4), -1 < (int)uVar3)) {
            *(ulonglong *)(piVar1 + 2) = (uVar4 & 0xffffffff) + *(longlong *)(piVar1 + 2);
          }
        }
        else {
          lVar2 = (ulonglong)auStack_b0[0] << 3;
          uVar3 = fn_82C10AD0(piVar1[0x38],0xb,lVar2,puStack_a8 + 2);
          if (-1 < (int)uVar3) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(*(undefined4 *)(puStack_a8 + 2),0,lVar2);
          }
        }
      }
    }
  }
  return uVar3;
}

