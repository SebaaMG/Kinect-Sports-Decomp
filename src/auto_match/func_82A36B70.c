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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_50;
extern int fn_82A36AE8();
extern int fn_82A396F0();


undefined8
fn_82A36B70(int param_1,longlong param_2,undefined4 *param_3,char *param_4,uint param_5)

{
  undefined2 uVar1;
  longlong lVar2;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint auStack_50 [20];
  undefined4 uVar3;
  
  lVar2 = 0;
  uVar3 = 0;
  iVar5 = param_5 - 5;
  if (param_5 < 6) {
    iVar5 = 0;
  }
  if ((*(uint *)(param_1 + 8) & 1) == 0) {
    fn_82A36AE8();
  }
  while (iVar5 != 0) {
    auStack_50[0] = 0;
    if (*param_4 == -1) {
      uVar1 = *(undefined2 *)(param_4 + 1);
      uVar6 = (uint)*(ushort *)(param_4 + 3);
      param_4 = param_4 + 5;
      uVar4 = iVar5 - 5U;
      if (uVar6 < iVar5 - 5U) {
        uVar4 = uVar6;
      }
    }
    else {
      uVar6 = (uint)CONCAT11(*param_4,param_4[1]);
      uVar1 = 0x8000;
      param_4 = param_4 + 2;
      uVar4 = iVar5 - 2;
    }
    fn_82A396F0(param_1 + 0x14,uVar1,param_4,uVar6,param_2,uVar1,auStack_50);
    param_4 = param_4 + uVar6;
    param_2 = (ulonglong)auStack_50[0] + param_2;
    lVar2 = (ulonglong)auStack_50[0] + lVar2;
    uVar3 = (undefined4)lVar2;
    iVar5 = uVar4 - uVar6;
  }
  *param_3 = uVar3;
  return 0;
}

