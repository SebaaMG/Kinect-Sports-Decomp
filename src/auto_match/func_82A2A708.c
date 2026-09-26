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
extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82A2A370();
extern int fn_82A2B760();
extern int fn_82A33950();


undefined4 fn_82A2A708(undefined8 param_1,undefined1 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 auStack_30 [2];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [16];
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82A33950(auStack_20,auStack_28);
  }
  iVar2 = NtCreateMutant(auStack_30,uVar1,param_2);
  if (iVar2 < 0) {
    fn_82A2B760();
    auStack_30[0] = 0;
  }
  else {
    uVar1 = 0xb7;
    if (iVar2 != 0x40000000) {
      uVar1 = 0;
    }
    fn_82A2A370(uVar1);
  }
  return auStack_30[0];
}

