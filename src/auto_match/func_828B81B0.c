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
extern int fn_828B6E50();
extern int fn_828B74C8();
extern int fn_828B7568();
extern int fn_828B7B80();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_828B81B0(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uStack_40;
  uint uStack_3c;
  
  iVar1 = (int)param_2 - (int)param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_828b8268:
      if (1 < iVar1) {
        fn_828B7568(param_1,param_2,param_4,0);
      }
      return;
    }
    iVar4 = (int)param_3;
    if (iVar4 < 1) {
      if (0x20 < iVar1) {
        if (1 < iVar1) {
          fn_828B74C8(param_1,param_2,param_4,0,0);
        }
        fn_828B7B80(param_1,param_2,param_4);
        return;
      }
      goto LAB_828b8268;
    }
    fn_828B6E50(&uStack_40,param_1,param_2,param_4);
    param_3 = (longlong)(iVar4 >> 1) + (ulonglong)(iVar4 < 0 && (param_3 & 1) != 0);
    param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0) +
              param_3;
    uVar3 = (ulonglong)uStack_3c;
    uVar2 = (ulonglong)uStack_40;
    if ((int)(uStack_40 - (int)param_1 & 0xfffffff8) < (int)((int)param_2 - uStack_3c & 0xfffffff8))
    {
      fn_828B81B0(param_1,uVar2,param_3,param_4);
      param_1 = uVar3;
      uVar2 = param_2;
    }
    else {
      fn_828B81B0(uVar3,param_2,param_3,param_4);
    }
    iVar1 = (int)uVar2 - (int)param_1;
    param_2 = uVar2;
  } while( true );
}

