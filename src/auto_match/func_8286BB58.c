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
extern int fn_8286B5F8();
extern int fn_8286B670();
extern int fn_8286B778();
extern int fn_8286B7E0();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8286BB58(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar4;
  ulonglong uVar3;
  ulonglong uVar5;
  uint uStack_40;
  uint uStack_3c;
  
  lVar1 = param_2 - param_1;
  iVar4 = (int)lVar1 / 0x1c;
  uVar5 = param_2;
  if (0x20 < iVar4) {
    do {
      iVar2 = (int)param_3;
      param_2 = uVar5;
      if (iVar2 < 1) break;
      fn_8286B7E0(&uStack_40,param_1,uVar5);
      param_3 = (longlong)(iVar2 >> 1) + (ulonglong)(iVar2 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar3 = (ulonglong)uStack_3c;
      param_2 = (ulonglong)uStack_40;
      if ((int)(uStack_40 - (int)param_1) / 0x1c < (int)((int)uVar5 - uStack_3c) / 0x1c) {
        fn_8286BB58(param_1,param_2,param_3);
        param_1 = uVar3;
        param_2 = uVar5;
      }
      else {
        fn_8286BB58(uVar3,uVar5,param_3);
      }
      lVar1 = param_2 - param_1;
      iVar4 = (int)lVar1 / 0x1c;
      uVar5 = param_2;
    } while (0x20 < iVar4);
    if (0x20 < iVar4) {
      if (iVar4 < 2) {
        return;
      }
      fn_8286B5F8(param_1,param_2,0,0);
      while (1 < iVar4) {
        fn_8286B778(param_1,param_2,0);
        lVar1 = lVar1 + -0x1c;
        param_2 = param_2 - 0x1c;
        iVar4 = (int)lVar1 / 0x1c;
      }
      return;
    }
  }
  if (1 < iVar4) {
    fn_8286B670(param_1,param_2,0);
  }
  return;
}

