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
extern int fn_82823080();
extern int fn_828230A8();
extern int iRam8320a5f4;
extern unsigned int iStack_30;
extern unsigned int lbl_8320A5F0;


undefined8 fn_82819518(int param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  longlong lVar4;
  ulonglong uVar5;
  int iStack_30;
  int aiStack_2c [11];
  
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x14) - param_2;
  if (-1 < lVar4) {
    uVar1 = param_3 & 0xffff;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x10) + param_4;
    if ((uVar1 - 1 & uVar5) != 0) {
      lVar4 = (uVar5 - ((uVar1 + uVar5) - 1 & ~(uVar1 - 1))) + lVar4;
    }
    if (-1 < (int)lVar4) {
      lbl_8320A5F0 = param_1 + -0x10;
      iRam8320a5f4 = (int)lVar4;
      return 1;
    }
  }
  fn_828230A8(param_1,&iStack_30);
  if ((iStack_30 == 0) || (iVar3 = fn_82819518(iStack_30,param_2,param_3,param_4), iVar3 == 0)) {
    fn_82823080(param_1,aiStack_2c);
    if ((aiStack_2c[0] != 0) &&
       (iVar3 = fn_82819518(aiStack_2c[0],param_2,param_3,param_4), iVar3 != 0)) {
      return 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

