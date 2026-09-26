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
extern int fn_8282EBF8();
extern int fn_8282EC60();
extern int fn_8282EE40();
extern int fn_8282F098();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8282F108(ulonglong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uStack_40;
  uint uStack_3c;
  
  iVar1 = (int)param_2 - (int)param_1 >> 2;
  uVar4 = param_2;
  if (0x20 < iVar1) {
    do {
      iVar3 = (int)param_3;
      param_2 = uVar4;
      if (iVar3 < 1) break;
      fn_8282EE40(&uStack_40,param_1,uVar4,param_4);
      param_3 = (longlong)(iVar3 >> 1) + (ulonglong)(iVar3 < 0 && (param_3 & 1) != 0);
      param_3 = (longlong)((int)param_3 >> 1) + (ulonglong)((int)param_3 < 0 && (param_3 & 1) != 0)
                + param_3;
      uVar2 = (ulonglong)uStack_3c;
      param_2 = (ulonglong)uStack_40;
      if ((int)(uStack_40 - (int)param_1 & 0xfffffffc) < (int)((int)uVar4 - uStack_3c & 0xfffffffc))
      {
        fn_8282F108(param_1,param_2,param_3,param_4);
        param_1 = uVar2;
        param_2 = uVar4;
      }
      else {
        fn_8282F108(uVar2,uVar4,param_3,param_4);
      }
      iVar1 = (int)param_2 - (int)param_1 >> 2;
      uVar4 = param_2;
    } while (0x20 < iVar1);
    if (0x20 < iVar1) {
      if (1 < iVar1) {
        fn_8282EBF8(param_1,param_2,param_4,0,0);
      }
      fn_8282F098(param_1,param_2,param_4);
      return;
    }
  }
  if (1 < iVar1) {
    fn_8282EC60(param_1,param_2,param_4,0);
  }
  return;
}

