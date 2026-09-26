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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define TBLr 0
extern int fn_82A1E968();
extern int iRam7fc86110;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82647950(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar2 = KfAcquireSpinLock(param_1 + 0x4220);
  *(int *)(param_1 + 0x4178) = *(int *)(param_1 + 0x4178) + 1;
  uVar1 = TBLr;
  *(int *)(param_1 + 0x417c) = (int)uVar1;
  if (*(int *)(param_1 + 0x4214) != *(int *)(param_1 + 0x4218)) {
    do {
      iVar3 = (*(uint *)(param_1 + 0x4214) & 0xf) * 8 + param_1;
      iVar4 = *(int *)(iVar3 + 0x4194);
      if (*(uint *)(param_1 + 0x4178) < *(uint *)(iVar3 + 0x4198)) break;
      *(int *)(param_1 + 0x4190) = *(int *)(param_1 + 0x4190) + 1;
      *(undefined4 *)(param_1 + 0x4184) = *(undefined4 *)(param_1 + 0x417c);
      if (iVar4 == 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x2a94) + 4) = 0;
      }
      else {
        enforceInOrderExecutionIO();
        sync(0);
        iRam7fc86110 = iVar4;
      }
      uVar1 = TBLr;
      *(int *)(param_1 + 0x5c2c) = (int)uVar1;
      iVar4 = *(int *)(param_1 + 0x4214) + 1;
      *(int *)(param_1 + 0x4214) = iVar4;
    } while (iVar4 != *(int *)(param_1 + 0x4218));
  }
  if (*(code **)(param_1 + 0x4174) != (code *)0x0) {
    uStack_2c = *(undefined4 *)(param_1 + 0x4190);
    uStack_30 = *(undefined4 *)(param_1 + 0x4178);
    uStack_28 = 0;
    (**(code **)(param_1 + 0x4174))(&uStack_30);
  }
  fn_82A1E968(&uStack_30);
  *(int *)(param_1 + 0x5584) = (int)(CONCAT44(uStack_30,uStack_2c) >> 10);
  KfReleaseSpinLock(param_1 + 0x4220,uVar2);
  return;
}

