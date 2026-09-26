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
extern unsigned int *auStack_40;
extern int fn_82A1F2F8();
extern int fn_82F90628();
extern int fn_82F90680();
extern int fn_82F91650();
extern int fn_82F918D8();
extern int fn_82F91960();
extern int fn_82F94750();
extern int fn_82F952E8();
extern int fn_82F95CC0();
extern unsigned int iStack00000014;


void fn_82F90EF8(int param_1)

{
  undefined4 uVar2;
  undefined8 uVar1;
  char cVar4;
  undefined4 *puVar3;
  int iStack00000014;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [16];
  
  iStack00000014 = param_1;
  fn_82F90628(auStack_40,param_1 + 0xc);
  uVar2 = fn_82A1F2F8();
  *(undefined4 *)(iStack00000014 + 0x5c) = uVar2;
  *(undefined4 *)(iStack00000014 + 0x58) = 0;
  fn_82F91650(auStack_30,iStack00000014 + 0x68);
  while( true ) {
    uVar1 = fn_82F94750(auStack_20,iStack00000014 + 0x68);
    cVar4 = fn_82F952E8(auStack_30,uVar1);
    if (cVar4 == '\0') break;
    puVar3 = (undefined4 *)fn_82F95CC0(auStack_30);
    (*(code *)**(undefined4 **)*puVar3)((undefined4 *)*puVar3);
    fn_82F91960(auStack_28,auStack_30,0);
  }
  fn_82F918D8(iStack00000014 + 0x68);
  fn_82F90680(auStack_40);
  return;
}

