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
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82897B28();


void fn_8288B1D8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(param_1 + 0xc);
  if (uVar4 <= *(uint *)(param_1 + 8)) {
    uVar5 = (uVar4 >> 2) + uVar4 + 8;
    uVar4 = uVar5 & 0x3fffffff;
    if (0x3fffffff < uVar5) {
      uVar4 = 0xffffffff;
    }
    iVar1 = fn_8265CA60(uVar4);
    uVar4 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar2 = 0;
      do {
        uVar4 = uVar4 + 1;
        *(undefined4 *)(iVar2 + iVar1) = *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar2);
        iVar2 = iVar2 + 4;
      } while (uVar4 < *(uint *)(param_1 + 0xc));
    }
    if (uVar4 < uVar5) {
      puVar3 = (undefined4 *)(uVar4 * 4 + iVar1 + -4);
      for (iVar2 = uVar5 - uVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
        puVar3 = puVar3 + 1;
        *puVar3 = 0;
      }
    }
    fn_8265CAA0(*(undefined4 *)(param_1 + 0x10));
    *(int *)(param_1 + 0x10) = iVar1;
    *(uint *)(param_1 + 0xc) = uVar5;
  }
  uVar4 = *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 8) = uVar4 + 1;
  if (uVar4 < *(uint *)(param_1 + 0xc)) {
    *(int *)(uVar4 * 4 + *(int *)(param_1 + 0x10)) = param_2;
    *(int *)(param_2 + 0x2c) = param_1;
  }
  fn_82897B28(param_2,*(undefined4 *)(param_1 + 4));
  return;
}

