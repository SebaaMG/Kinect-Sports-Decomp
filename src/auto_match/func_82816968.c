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
extern int fn_82311AB8();
extern int fn_8265CA20();
extern int fn_828166A8();
extern int fn_82F622A8();
extern int fn_82F68CC0();
extern int fn_82F69290();
extern unsigned int lbl_821AD03C;


void fn_82816968(uint *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined **appuStack_20 [8];
  
  uVar5 = (int)(param_1[1] - *param_1) >> 5;
  if ((0x7ffffffU - param_2 & 0xffffffff) < (ulonglong)uVar5) {
    fn_82311AB8(appuStack_20,0xffffffff82196fd4);
    appuStack_20[0] = &lbl_821AD03C;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dd9dc);
  }
  uVar3 = (int)uVar5 + param_2;
  uVar5 = (int)(param_1[2] - *param_1) >> 5;
  if ((ulonglong)uVar5 < (uVar3 & 0xffffffff)) {
    uVar2 = 0;
    if ((ulonglong)uVar5 <= (0x7ffffff - (ulonglong)(uVar5 >> 1) & 0xffffffff)) {
      uVar2 = (ulonglong)(uVar5 >> 1) + (longlong)(int)uVar5;
    }
    if ((uVar2 & 0xffffffff) < (uVar3 & 0xffffffff)) {
      uVar2 = uVar3;
    }
    if ((uVar2 & 0xffffffff) < 0x8000000) {
      if ((ulonglong)(uint)((int)(param_1[2] - *param_1) >> 5) < (uVar2 & 0xffffffff)) {
        uVar1 = fn_828166A8(uVar2,0);
        uVar5 = param_1[1];
        uVar3 = uVar1;
        for (uVar6 = (ulonglong)*param_1; (uVar6 & 0xffffffff) != (ulonglong)uVar5;
            uVar6 = uVar6 + 0x20) {
          if ((uVar3 & 0xffffffff) != 0) {
            fn_82F68CC0(uVar3,uVar6,0x20);
          }
          uVar3 = uVar3 + 0x20;
        }
        uVar5 = *param_1;
        iVar4 = param_1[1] - uVar5;
        if (uVar5 != 0) {
          for (; uVar5 != param_1[1]; uVar5 = uVar5 + 0x20) {
          }
          fn_8265CA20();
        }
        uVar5 = (uint)uVar1;
        *param_1 = uVar5;
        param_1[2] = (int)((uVar2 & 0xffffffff) << 5) + uVar5;
        param_1[1] = (iVar4 >> 5) * 0x20 + uVar5;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82196fd4);
  }
  return;
}

