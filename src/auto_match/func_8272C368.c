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
extern int fn_8267BE38();
extern int fn_8267BED0();
extern int fn_826BD620();
extern unsigned int stack0x00000000;


void fn_8272C368(int *param_1,undefined8 param_2,ulonglong param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  ushort uVar3;
  longlong lVar4;
  
  uVar3 = *(ushort *)(param_1 + 0x32);
  uVar1 = uVar3 >> 1 & 1;
  if (((param_3 & 0xff) == 0) || (uVar1 != 0)) {
    if (((param_3 & 0xff) != 0) || (uVar1 == 0)) goto LAB_8272c3b8;
    uVar3 = uVar3 & 0xfffd;
  }
  else {
    uVar3 = uVar3 | 2;
  }
  *(ushort *)(param_1 + 0x32) = uVar3;
LAB_8272c3b8:
  uVar2 = thunk_FUN_82f64ce0(param_2);
  if ((uVar2 & 0xffffffff) < 0x100) {
    lVar4 = ZEXT48(&stack0x00000000) - 0x130;
  }
  else {
    lVar4 = fn_8267BED0(param_1,uVar2 * 5 + 1,0);
  }
  fn_826BD620(lVar4,param_2,0xffffffffffffffff);
  (**(code **)(*param_1 + 0x1ac))(param_1,lVar4,param_3,1);
  if (0xff < (uVar2 & 0xffffffff)) {
    fn_8267BE38(lVar4);
  }
  return;
}

