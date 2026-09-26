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
extern int fn_8265CA20();
extern int fn_828B3E88();
extern int fn_828D4ED0();
extern int fn_828E2308();
extern int fn_82F622A8();


void fn_828E2360(int *param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 & 0xffffffff) < 0x924924a) {
    if ((ulonglong)(uint)((param_1[2] - *param_1) / 0x1c) < (param_2 & 0xffffffff)) {
      uVar2 = fn_828D4ED0(param_1 + 3,param_2);
      fn_828E2308(*param_1,param_1[1],uVar2,param_1 + 3);
      iVar4 = *param_1;
      iVar1 = param_1[1];
      iVar3 = iVar1 - iVar4;
      if (iVar4 != 0) {
        for (; iVar4 != iVar1; iVar4 = iVar4 + 0x1c) {
          fn_828B3E88(iVar4 + 4);
          fn_8265CA20(*(undefined4 *)(iVar4 + 4));
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        fn_8265CA20(*param_1);
      }
      iVar4 = (int)uVar2;
      *param_1 = iVar4;
      param_1[2] = (int)param_2 * 0x1c + iVar4;
      param_1[1] = (iVar3 / 0x1c) * 0x1c + iVar4;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F622A8(0xffffffff82196fd4);
}

