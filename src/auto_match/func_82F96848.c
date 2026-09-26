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
#define _uStack00000020 ((*(U64*)&uStack00000020))
extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_82F91650();
extern int fn_82F921A0();
extern int fn_82F94750();
extern int fn_82F949D0();
extern int fn_82F952E8();
extern int fn_82F96930();
extern int fn_82F969B8();
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000028;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000020;
extern unsigned int uStack00000024;
extern unsigned int uStack00000028;


undefined4 *
fn_82F96848(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar3;
  undefined8 *puVar2;
  undefined4 *puStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  undefined8 uStack00000028;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [24];
  
  puStack00000014 = param_1;
  uStack0000001c = param_2;
  _uStack00000020 = param_3;
  uStack00000028 = param_4;
  uVar1 = fn_82F91650(auStack_30,param_2);
  cVar3 = fn_82F921A0(&stack0x00000020,uVar1);
  if (cVar3 != '\0') {
    uVar1 = fn_82F94750(auStack_28,uStack0000001c);
    cVar3 = fn_82F921A0(&stack0x00000028,uVar1);
    if (cVar3 != '\0') {
      fn_82F96930(uStack0000001c);
      fn_82F91650(puStack00000014,uStack0000001c);
      return puStack00000014;
    }
  }
  while (cVar3 = fn_82F952E8(&stack0x00000020,&stack0x00000028), cVar3 != '\0') {
    puVar2 = (undefined8 *)fn_82F969B8(auStack_20,&stack0x00000020,0);
    fn_82F949D0(auStack_18,uStack0000001c,*puVar2);
  }
  *puStack00000014 = uStack00000020;
  puStack00000014[1] = uStack00000024;
  return puStack00000014;
}

