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
extern int fn_823598B0();
extern int fn_82359928();
extern int fn_82406BE0();


void fn_82406810(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x60) + 0x70);
  if (iVar1 != 0) {
    uVar3 = (ulonglong)*(uint *)(iVar1 + 0x1c);
    uVar2 = 2;
    if (uVar3 != (uVar3 - 1) + (ulonglong)(uVar3 == 0)) goto LAB_8240684c;
  }
  uVar2 = 1;
LAB_8240684c:
  fn_82406BE0(param_1,uVar2);
  fn_823598B0(*(undefined4 *)(param_1 + 8),0);
  fn_82359928(*(undefined4 *)(param_1 + 8),0);
  return;
}

