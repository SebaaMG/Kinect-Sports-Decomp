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
extern int fn_82FA5190();
extern int fn_82FA7508();
extern int fn_82FA92C0();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264230;


void fn_82FA9208(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[0xb];
  param_1[0xb] = (int)((ulonglong)uVar1 - 1);
  if ((ulonglong)uVar1 - 1 == 0) {
    uVar4 = (ulonglong)(uint)param_1[3];
    if (uVar4 == 0) {
      fn_82FA7508(lbl_83264230,param_1);
    }
    else {
      iVar3 = fn_82FA92C0(uVar4 + 0x28,param_1 + 1);
      if (iVar3 == 1) {
        fn_82FA9208(uVar4);
      }
    }
    uVar2 = lbl_831BC768;
    (**(code **)*param_1)(param_1,0);
    fn_82FA5190(uVar2,param_1);
  }
  return;
}

