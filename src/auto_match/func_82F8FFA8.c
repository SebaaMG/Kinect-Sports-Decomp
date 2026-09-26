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
extern unsigned int *auStack_2e;
extern int fn_82F90110();
extern int fn_82F90188();
extern int fn_82F901A0();
extern int fn_82F901B0();
extern unsigned int stack0x00000014;
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_27;
extern unsigned int uStack_28;
extern unsigned int uStack_2f;
extern unsigned int uStack_30;


void fn_82F8FFA8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar5;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 auStack_2e [2];
  undefined1 *puStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_27;
  
  puStack_2c = &uStack_30;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack_2f = fn_82F901A0(&stack0x00000024);
  uStack_28 = uStack_30;
  uStack_27 = uStack_2f;
  puVar5 = (undefined1 *)fn_82F90188(auStack_2e,&stack0x00000014,&stack0x00000024);
  uVar2 = uStack00000024;
  uVar1 = *puVar5;
  uVar3 = fn_82F90110(&stack0x0000001c);
  uVar4 = fn_82F90110(&stack0x00000014);
  fn_82F901B0(uVar4,uVar3,uVar2,uVar1,uStack_27,uStack_28);
  return;
}

