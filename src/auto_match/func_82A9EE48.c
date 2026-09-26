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
extern int fn_82A9A4B8();
extern int fn_82A9A548();
extern int fn_82A9CFC8();


void fn_82A9EE48(int param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x90);
  if (-1 < *(int *)(param_1 + 0x90)) {
    iVar3 = *(int *)(param_1 + 0x78);
    if (*(uint *)(iVar3 + 4) <= param_2) {
      uVar2 = param_2 + 1;
      if (*(uint *)(iVar3 + 8) < uVar2) {
        fn_82A9A548(iVar3,uVar2,piVar1);
      }
      *(uint *)(iVar3 + 4) = uVar2;
      if (*piVar1 < 0) {
        return;
      }
    }
    iVar3 = param_2 * 0x18 + **(int **)(param_1 + 0x78);
    *(uint *)(param_2 * 0x18 + **(int **)(param_1 + 0x78)) = param_2;
    if (*(uint *)(iVar3 + 0x10) <= param_3) {
      uVar2 = param_3 + 1;
      if (*(uint *)(iVar3 + 0x14) < uVar2) {
        fn_82A9A4B8(iVar3 + 0xc,uVar2,piVar1);
      }
      *(uint *)(iVar3 + 0x10) = uVar2;
      if (*piVar1 < 0) {
        return;
      }
    }
    iVar3 = *(int *)(iVar3 + 0xc);
    *(uint *)(param_3 * 0x1c + iVar3) = param_3;
    iVar3 = param_3 * 0x1c + iVar3;
    if (*(uint *)(iVar3 + 0x14) <= param_4) {
      uVar2 = param_4 + 1;
      if (*(uint *)(iVar3 + 0x18) < uVar2) {
        fn_82A9CFC8(iVar3 + 0x10,uVar2,piVar1);
      }
      *(uint *)(iVar3 + 0x14) = uVar2;
      if (*piVar1 < 0) {
        return;
      }
    }
    *(undefined4 *)(param_4 * 4 + *(int *)(iVar3 + 0x10)) = param_5;
  }
  return;
}

