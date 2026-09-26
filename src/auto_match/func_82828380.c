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
extern unsigned int *auStack_120;
extern unsigned int *auStack_12c;
extern int fn_82829530();
extern int fn_82F672D8();


undefined4 fn_82828380(int param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined1 *puStack_130;
  undefined1 auStack_12c [12];
  undefined1 auStack_120 [272];
  
  fn_82F672D8(auStack_120,param_2,0xff);
  puStack_130 = auStack_120;
  piVar1 = (int *)fn_82829530(auStack_12c,*(undefined4 *)(param_1 + 0x2f0),&puStack_130);
  if (*piVar1 == *(int *)(*(int *)(param_1 + 0x2f0) + 4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(*(int *)(*piVar1 + 0xc) + 0x100);
  }
  return uVar2;
}

