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
extern int fn_82F68CC0();


undefined8 fn_8299B488(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x2c4) != 0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 0x2b8));
      fn_82F68CC0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + iVar5) + 8),
                   *(undefined4 *)(iVar1 + 8),*(int *)(iVar1 + 4) << 2);
      iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 0x2b8));
      fn_82F68CC0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + iVar5) + 0x10),
                   *(undefined4 *)(iVar1 + 0x10),*(int *)(iVar1 + 0xc) << 2);
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 < *(uint *)(param_1 + 0x2c4));
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x2c0) != 0) {
    iVar5 = 0;
    do {
      uVar4 = uVar4 + 1;
      piVar2 = (int *)(iVar5 + *(int *)(param_1 + 700));
      piVar3 = (int *)(iVar5 + *(int *)(param_1 + 0x14));
      iVar5 = iVar5 + 4;
      *(undefined4 *)(*piVar3 + 0x38) = *(undefined4 *)(*piVar2 + 0x38);
    } while (uVar4 < *(uint *)(param_1 + 0x2c0));
  }
  return 0;
}

