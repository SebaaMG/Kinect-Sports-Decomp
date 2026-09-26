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
extern int fn_82D7D078();
extern int fn_82DB0258();


void fn_82DB05D8(int param_1)

{
  uint uVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)*(char *)(*(int *)(param_1 + 0x14) + 0x10) + *(int *)(param_1 + 0x14);
  iVar5 = (int)*(char *)(*(int *)(param_1 + 0x10) + 0x10) + *(int *)(param_1 + 0x10);
  uVar4 = (ulonglong)*(uint *)(iVar6 + 0xcc);
  uVar1 = *(uint *)(iVar5 + 0xcc);
  uVar3 = (ulonglong)uVar1;
  if (uVar3 == uVar4) {
    *(byte *)(uVar1 + 0x25) = *(byte *)(uVar1 + 0x25) & 0x3f | 0x40;
    uVar4 = uVar3;
  }
  else if ((*(char *)(iVar5 + 0xe8) != '\x05') && (uVar4 = uVar3, *(char *)(iVar6 + 0xe8) != '\x05')
          ) {
    uVar4 = fn_82DB0258(param_1);
    *(byte *)((int)uVar3 + 0x25) = *(byte *)((int)uVar3 + 0x25) & 0x3f | 0x40;
    *(byte *)(*(int *)(iVar6 + 0xcc) + 0x25) =
         *(byte *)(*(int *)(iVar6 + 0xcc) + 0x25) & 0x3f | 0x40;
  }
  piVar2 = *(int **)(param_1 + 8);
  fn_82D7D078(uVar4 + 0x58,param_1,*(undefined4 *)(*(int *)((int)uVar4 + 0x18) + 0x80));
  (**(code **)(*piVar2 + 0x24))(piVar2);
  return;
}

