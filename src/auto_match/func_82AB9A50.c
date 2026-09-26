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
extern int fn_82AB15D0();
extern int fn_82AB94D0();
extern int fn_82B6B008();
extern int fn_82B6E208();
extern int fn_82B6E5C0();


int * fn_82AB9A50(undefined8 param_1,code *param_2,ulonglong param_3,ulonglong param_4,
                   undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 == (code *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69d8,0xffffffff820d74e0,0x12a);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d69cc,0xffffffff820d74e0,299);
  }
  if ((param_4 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6bcc,0xffffffff820d74e0,300);
  }
  piVar1 = (int *)(*param_2)(param_1,0x1c);
  if (piVar1 == (int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d75e0,0xffffffff820d74e0,0x134);
  }
  else {
    piVar1[1] = (int)param_1;
    piVar1[2] = (int)param_2;
    piVar1[3] = (int)param_3;
    iVar2 = fn_82B6B008(param_5,0x14,param_2,param_3,param_1);
    *piVar1 = iVar2;
    if (iVar2 == 0) {
      uVar4 = 0x146;
      uVar3 = 0xffffffff820d75c4;
    }
    else {
      iVar2 = fn_82B6E208(param_1,param_2,param_3,param_4,100);
      piVar1[5] = iVar2;
      if (iVar2 == 0) {
        uVar4 = 0x153;
        uVar3 = 0xffffffff820d75b0;
      }
      else {
        iVar2 = fn_82B6E5C0(param_1,param_2,param_3,param_4,100);
        piVar1[6] = iVar2;
        if (iVar2 != 0) {
          piVar1[4] = 1;
          return piVar1;
        }
        uVar4 = 0x160;
        uVar3 = 0xffffffff820d75a0;
      }
    }
    fn_82AB15D0(0,0xffffffff820d2ea4,uVar3,0xffffffff820d74e0,uVar4);
    fn_82AB94D0(piVar1);
  }
  return (int *)0x0;
}

