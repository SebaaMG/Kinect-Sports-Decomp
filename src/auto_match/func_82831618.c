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
extern unsigned int *auStack_2c;
extern int fn_82826AB0();
extern int fn_82835C00();
extern int fn_82F6D000();
extern unsigned int uStack_30;


void fn_82831618(undefined4 *param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uStack_30;
  undefined1 auStack_2c [44];
  
  fn_82F6D000(param_2,0xffffffff8201f084,param_1[1]);
  fn_82826AB0(*(undefined4 *)*param_1,param_1[1],&uStack_30,auStack_2c);
  uVar2 = 0;
  if (param_1[2] != 0) {
    lVar1 = 0;
    do {
      fn_82835C00(lVar1 + (ulonglong)(uint)param_1[3],param_2,uStack_30);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 8;
    } while (uVar2 < (uint)param_1[2]);
  }
  return;
}

