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
extern int fn_82AA66A8();
extern int fn_82ACB098();
extern int fn_82ACB0F8();


undefined8 fn_82B89410(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  char cVar3;
  undefined8 uVar2;
  
  cVar3 = fn_82ACB098(param_2);
  if (cVar3 == '\0') goto LAB_82b89438;
  uVar1 = param_3 & 3;
  if (uVar1 == 0) {
    cVar3 = fn_82ACB098(param_3 & 0xfffffffc);
    if ((cVar3 != '\0') && ((param_3 & 0xfffffffc) != (param_2 & 0xffffffff))) {
LAB_82b894b4:
      uVar2 = fn_82ACB0F8(param_2,param_3 & 0xfffffffc);
      return uVar2;
    }
LAB_82b89468:
    uVar2 = 0;
  }
  else {
    if (uVar1 == 1) {
      cVar3 = fn_82ACB098(param_3 & 0xfffffffc);
      if (cVar3 == '\0') goto LAB_82b89468;
      if ((param_3 & 0xfffffffc) != (param_2 & 0xffffffff)) goto LAB_82b894b4;
    }
    else {
      if (uVar1 < 3) goto LAB_82b89468;
      if (uVar1 != 3) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c0);
      }
    }
LAB_82b89438:
    uVar2 = 1;
  }
  return uVar2;
}

