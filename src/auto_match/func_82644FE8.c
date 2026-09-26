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
extern int fn_82643B08();
extern int fn_82643C30();
extern int fn_82644040();
extern int fn_82644568();
extern int fn_82F68CC0();


void fn_82644FE8(int param_1,longlong param_2,ulonglong param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 0x3460) == 0) {
    if (*(int *)(param_1 + 0x2b04) != 0) {
      lVar5 = fn_82644040(param_1,(param_3 & 0x7fffffff) * 2 + 2,4);
      lVar4 = (param_3 & 0x1fffffff) * 8;
      fn_82F68CC0(lVar5 + 4,param_2,lVar4);
      lVar4 = lVar4 + lVar5;
      *(undefined4 *)((int)lVar4 + 4) = 0xc0000000;
      uVar2 = KfAcquireSpinLock(param_1 + 0x2b08);
      bVar1 = *(int *)(param_1 + 0x2b04) != 0;
      if (bVar1) {
        fn_82643C30(param_1 + 0x3500,lVar5,lVar4 + 8);
      }
      KfReleaseSpinLock(param_1 + 0x2b08,uVar2);
      if (bVar1) {
        return;
      }
    }
    fn_82644568(param_1,param_2,param_3);
  }
  else {
    uVar6 = (param_3 & 0x7fffffff) << 1;
    while( true ) {
      uVar3 = (ulonglong)(uint)(*(int *)(param_1 + 0x3510) - *(int *)(param_1 + 0x350c) >> 2) &
              0xfffffffe;
      if ((uVar6 & 0xffffffff) < uVar3) {
        uVar3 = uVar6;
      }
      lVar5 = (uVar3 & 0x3fffffff) * 4;
      fn_82F68CC0(*(int *)(param_1 + 0x350c),param_2,lVar5);
      uVar6 = uVar6 - uVar3;
      param_2 = lVar5 + param_2;
      *(int *)(param_1 + 0x350c) = (int)lVar5 + *(int *)(param_1 + 0x350c);
      if (uVar6 == 0) break;
      fn_82643B08(param_1 + 0x3500);
    }
  }
  return;
}

