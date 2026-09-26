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
extern int fn_82BA0FD8();
extern int fn_82BCFA58();


void fn_82BCFC38(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar3 = (uint *)fn_82BA0FD8(0x400,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x5b0));
  for (iVar1 = *(int *)(param_1 + 0x88); *(int *)(iVar1 + 8) != 0; iVar1 = *(int *)(iVar1 + 8)) {
    uVar5 = 0;
    if (*puVar3 != 0) {
      puVar4 = puVar3 + 1;
      do {
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = 0;
      } while (uVar5 < *puVar3);
    }
    for (iVar2 = *(int *)(iVar1 + 0x1c); *(int *)(iVar2 + 8) != 0; iVar2 = *(int *)(iVar2 + 8)) {
      if ((*(uint *)(iVar2 + 0xe4) & 1) != 0) {
        fn_82BCFA58(param_1,iVar2,puVar3);
      }
    }
  }
  return;
}

