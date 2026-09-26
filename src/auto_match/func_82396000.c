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
extern unsigned int *auStack_40;
extern int fn_822A08D0();
extern int fn_82397F30();
extern int fn_82397F88();
extern int fn_82520158();
extern int fn_8265C9E0();


undefined4 * fn_82396000(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_40 [64];
  
  fn_82520158(0xffffffff821b2700,auStack_40,0);
  uVar4 = *(undefined4 *)(param_2 + 0x178);
  lVar1 = fn_8265C9E0(0xd8);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = fn_82397F30(param_2);
    uVar3 = fn_82397F88(param_2);
    uVar4 = fn_822A08D0(lVar1,param_2,param_2 + 0x1a0,auStack_40,uVar4,uVar3,uVar2);
  }
  *param_1 = uVar4;
  return param_1;
}

