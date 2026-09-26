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
extern int fn_82C10AD0();
extern int fn_82C1E938();
extern int fn_82F691F0();
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;


undefined8 fn_82C21A58(int param_1,longlong param_2)

{
  int *piVar1;
  ushort uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ushort auStack_70 [2];
  ushort *puStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  uStack_60 = 0;
  uVar4 = param_2 - 0x18;
  uStack_68 = 0;
  puStack_6c = (ushort *)0x0;
  uStack_64 = (undefined4)uVar4;
  auStack_70[0] = 0;
  uStack_5c = 0;
  auStack_70[1] = 0;
  uVar3 = (**(code **)(*piVar1 + 0xc))(*piVar1,uVar4);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  if (1 < (uVar4 & 0xffffffff)) {
    uVar3 = fn_82C1E938(param_1,auStack_70,&uStack_60,&uStack_68,&uStack_64);
    uVar2 = auStack_70[0];
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if (((*(short *)(piVar1[1] + 0x2e) < 1) &&
        (uVar5 = (ulonglong)auStack_70[0], uVar5 * 6 + 2 <= (uVar4 & 0xffffffff))) && (uVar5 < 0x80)
       ) {
      uVar3 = fn_82C10AD0(piVar1[0x38],0xb,8,&puStack_6c);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      puStack_6c[0] = 0;
      puStack_6c[1] = 0;
      puStack_6c[2] = 0;
      puStack_6c[3] = 0;
      *(ushort **)(piVar1[1] + 0x68) = puStack_6c;
      *puStack_6c = uVar2;
      uVar3 = fn_82C10AD0(piVar1[0x38],0xb,uVar5 << 3,puStack_6c + 2);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(puStack_6c + 2),0,uVar5 << 3);
    }
  }
  return 0xffffffff8050000c;
}

