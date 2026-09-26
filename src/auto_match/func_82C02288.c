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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_430;
extern unsigned int *auStack_750;
extern unsigned int *auStack_770;
extern int fn_82C00470();
extern int fn_82C07A18();
extern int fn_82C08958();
extern int fn_82C08BA0();
extern int fn_82F691F0();


ulonglong fn_82C02288(int param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_770 [32];
  undefined1 auStack_750 [800];
  undefined1 auStack_430 [1072];
  
  fn_82C00470(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 500) = 1;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  pcVar1 = *(code **)(**(int **)(param_1 + 0x34) + 0x38);
  uVar4 = ZEXT48(pcVar1);
  uVar2 = (*pcVar1)(*(int **)(param_1 + 0x34),1);
  if (-1 < (int)uVar2) {
    lVar3 = fn_82C08958(param_1 + 0x208,9,*(int *)(param_1 + 0x224) == 0,0xffffffffffffffff,0,
                              uVar4);
    uVar2 = -(ulonglong)(lVar3 != 0) & 0xffffffff8000ffff;
  }
  if (-1 < (int)uVar2) {
    lVar3 = fn_82C07A18(*(undefined4 *)(param_1 + 0x208),auStack_770);
    uVar2 = -(ulonglong)(lVar3 != 0) & 0xffffffff8000ffff;
    if (-1 < (int)uVar2) {
      lVar3 = fn_82C08BA0(*(undefined4 *)(param_1 + 0x208),*(undefined4 *)(param_1 + 0x1fc),
                                auStack_750);
      uVar2 = -(ulonglong)(lVar3 != 0) & 0xffffffff8000ffff;
      if (-1 < (int)uVar2) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_430,0,0x3f8);
      }
    }
  }
  return uVar2;
}

