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
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_824011D8();
extern int fn_82402CF8();
extern int fn_82522588();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;


void fn_82366238(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 auStack_30 [4];
  int iStack_2c;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  puVar2 = (undefined4 *)fn_82522588(auStack_30);
  fn_824011D8(*puVar2,(ulonglong)*(uint *)(param_1 + 4) + 0x820);
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  piVar3 = (int *)fn_82522588(auStack_28,param_2);
  iVar1 = *piVar3;
  fn_82402CF8(iVar1,0,0);
  *(undefined4 *)(iVar1 + 0x28c) = 0;
  *(undefined4 *)(iVar1 + 0x288) = 0;
  *(undefined4 *)(iVar1 + 0x290) = 0;
  *(undefined4 *)(iVar1 + 0x294) = 0;
  *(undefined4 *)(iVar1 + 0x298) = 0;
  *(undefined4 *)(iVar1 + 0x29c) = 0;
  *(undefined4 *)(iVar1 + 0x2a0) = 0;
  *(undefined4 *)(iVar1 + 0x2a4) = 0;
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  return;
}

