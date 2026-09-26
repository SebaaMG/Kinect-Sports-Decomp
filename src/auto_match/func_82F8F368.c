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
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern int fn_82F8EE48();
extern int fn_82F8F608();
extern int fn_82F8F6B0();
extern int fn_82F8FC20();
extern int fn_82F8FC70();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000020;
extern unsigned int uStack0000002c;
extern unsigned int uStack_28;


undefined4
fn_82F8F368(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  undefined8 uStack00000020;
  undefined4 uStack0000002c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000020 = param_3;
  uStack0000002c = param_4;
  iVar4 = fn_82F8EE48(param_2);
  if (iVar4 == 0) {
    uStack_28 = 0;
  }
  else {
    uVar3 = fn_82F8F608(auStack_38,uStack0000001c);
    uStack_28 = fn_82F8FC70(&stack0x00000020,uVar3);
  }
  uVar2 = uStack_28;
  fn_82F8F6B0(uStack0000001c,uStack00000020,1,uStack0000002c);
  uVar1 = uStack00000014;
  uVar3 = fn_82F8F608(auStack_30,uStack0000001c);
  fn_82F8FC20(uVar1,uVar3,uVar2);
  return uStack00000014;
}

