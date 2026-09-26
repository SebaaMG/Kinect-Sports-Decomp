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
extern unsigned int lbl_8315D344;
extern unsigned int lbl_83219CE0;
extern unsigned int lbl_83219CE8;
extern unsigned int *lbl_83219CEC;
extern unsigned int lbl_83219D00;


undefined8 fn_82A2D0C8(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int in_r13;
  
  iVar1 = *(int *)(in_r13 + 0x100);
  if (lbl_83219D00 == 0) {
    *(byte *)(*(int *)(param_2 + 0x50) + 3) = *(byte *)(*(int *)(param_2 + 0x50) + 3) | 1;
    if (iVar1 == lbl_83219CE0) {
      (*(code *)(&lbl_8315D344)[**(byte **)(param_2 + 0x50)])
                (*(undefined4 *)(param_1 + 0x18),param_2);
    }
    else {
      uVar2 = KfAcquireSpinLock(0xffffffff83219ce4);
      *(undefined **)(param_2 + 0x30) = &lbl_83219CE8;
      *(int **)(param_2 + 0x34) = lbl_83219CEC;
      *lbl_83219CEC = param_2 + 0x30;
      lbl_83219CEC = (int *)(param_2 + 0x30);
      KfReleaseSpinLock(0xffffffff83219ce4,uVar2);
      KeSetEvent(0xffffffff83219cf0,1,0);
    }
    uVar2 = 0x103;
  }
  else {
    uVar2 = 0xffffffffc000026e;
  }
  return uVar2;
}

