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
extern int fn_82696330();
extern int fn_82696958();
extern int fn_8271DCB8();


void fn_8271DE58(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar4;
  ulonglong uVar3;
  ulonglong uVar5;
  char acStack_20 [16];
  
  acStack_20[0] = '\0';
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
  iVar2 = *(int *)(iVar1 + 0x2a0);
  cVar4 = (**(code **)(*(int *)(iVar2 + 0x10) + 0x2c))
                    (iVar2 + 0x10,*(int *)(param_1 + 0x18) + 0x78,iVar1 + 0x50,acStack_20);
  if ((cVar4 != '\0') && (acStack_20[0] != '\v')) {
    uVar3 = fn_82696958(acStack_20,*(undefined4 *)(param_1 + 0x18));
    uVar5 = uVar3 + 0x10;
    if ((uVar3 & 0xffffffff) == 0) {
      uVar5 = 0;
    }
    if ((uVar5 & 0xffffffff) != 0) {
      fn_8271DCB8(uVar5 - 0x10,*(undefined4 *)(param_1 + 0x18));
    }
  }
  fn_82696330(acStack_20);
  return;
}

