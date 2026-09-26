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
extern unsigned int *auStack_1c;
extern unsigned int *auStack_20;
extern unsigned int *auStack_3c;
extern int fn_82230180();
extern int fn_822402E8();
extern int fn_8265C9E0();
extern int fn_8265F1B0();
extern int fn_8265F1E0();
extern int fn_8265F798();
extern int fn_8265F8D8();
extern int fn_8265F9A0();
extern int fn_8265FA90();
extern int fn_8265FAD0();
extern int fn_8265FB98();
extern int fn_826666A0();
extern unsigned int iStack_18;
extern unsigned int stack0x0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_14;
extern unsigned int uStack_40;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8265F0B0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  char cVar4;
  int iVar3;
  undefined4 uStack00000014;
  undefined4 uStack0000001c;
  undefined4 uStack00000024;
  undefined4 uStack0000002c;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  undefined1 auStack_3c [28];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  puVar2 = (undefined4 *)fn_8265F9A0(auStack_20,param_1,&stack0x0000001c);
  uStack_50 = *puVar2;
  uVar1 = fn_8265F8D8(auStack_1c,uStack00000014);
  cVar4 = fn_8265FA90(&uStack_50,uVar1);
  if (cVar4 == '\0') {
    iStack_18 = fn_8265C9E0(0x10);
    if (iStack_18 == 0) {
      uStack_14 = 0;
    }
    else {
      uStack_14 = fn_8265FAD0(iStack_18);
    }
    uStack_4c = uStack_14;
    puVar2 = (undefined4 *)fn_8265F798(uStack00000014,&stack0x0000001c);
    *puVar2 = uStack_4c;
  }
  else {
    iVar3 = fn_826666A0(&uStack_50);
    uStack_4c = *(undefined4 *)(iVar3 + 4);
  }
  fn_8265F1B0(&uStack_40);
  uStack_40 = uStack00000024;
  fn_822402E8(auStack_3c,uStack0000002c);
  fn_8265FB98(uStack_4c,&uStack_40);
  fn_8265F1E0(&uStack_40);
  fn_82230180(uStack0000002c);
  return;
}

