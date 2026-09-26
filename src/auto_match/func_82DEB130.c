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
extern unsigned int lbl_82131F88;


void fn_82DEB130(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if ((*(uint *)(param_1 + 0x20) & 0x7fffffff) == 0) {
    *param_2 = 0xffffffff;
    *param_3 = *(undefined4 *)(&lbl_82131F88 + (uint)*(byte *)(param_1 + 0x14) * 4);
    return;
  }
  uVar2 = 0xff;
  iVar4 = 0;
  if (-1 < *(int *)(param_1 + 0x24)) {
    piVar3 = *(int **)(param_1 + 0x1c);
    do {
      if (*piVar3 != -1) break;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar4 <= *(int *)(param_1 + 0x24));
  }
  if (iVar4 <= *(int *)(param_1 + 0x24)) {
    do {
      puVar5 = (undefined4 *)(iVar4 * 8 + *(int *)(param_1 + 0x1c));
      uVar1 = puVar5[1] & 0xff;
      if (uVar1 < uVar2) {
        *param_2 = *puVar5;
        uVar2 = uVar1;
      }
      iVar4 = iVar4 + 1;
      if (iVar4 <= *(int *)(param_1 + 0x24)) {
        piVar3 = (int *)(iVar4 * 8 + *(int *)(param_1 + 0x1c));
        do {
          if (*piVar3 != -1) break;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 2;
        } while (iVar4 <= *(int *)(param_1 + 0x24));
      }
    } while (iVar4 <= *(int *)(param_1 + 0x24));
  }
  *param_3 = *(undefined4 *)(&lbl_82131F88 + uVar2 * 4);
  return;
}

