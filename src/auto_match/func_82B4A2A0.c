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
extern unsigned int *auStack_50;
extern int fn_82933A98();
extern int fn_82AC6560();
extern int fn_82B466F8();
extern int fn_82B47730();
extern int fn_82F6DCE0();


undefined4 * fn_82B4A2A0(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 auStack_50 [20];
  
  uVar1 = fn_82B47730(param_1,5,0);
  fn_82F6DCE0(uVar1,5,0xffffffff820d31c8,param_2,param_3);
  puVar2 = (undefined4 *)fn_82AC6560(param_1,0x20,0xe);
  fn_82933A98(auStack_50);
  puVar2[1] = 0x12;
  *puVar2 = auStack_50[0];
  uVar3 = fn_82B466F8(param_1,uVar1);
  puVar2[5] = uVar3;
  return puVar2;
}

