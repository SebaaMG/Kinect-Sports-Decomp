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


void fn_82A9E4B0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = (int *)(param_1 + 0x90);
  if (-1 < *(int *)(param_1 + 0x90)) {
    iVar4 = *(int *)(param_1 + 0x78);
    if (*(uint *)(iVar4 + 4) <= param_2) {
      uVar3 = param_2 + 1;
      if (*(uint *)(iVar4 + 8) < uVar3) {
        fn_82A9A548(iVar4,uVar3,piVar2);
      }
      *(uint *)(iVar4 + 4) = uVar3;
      if (*piVar2 < 0) {
        return;
      }
    }
    iVar4 = param_2 * 0x18 + **(int **)(param_1 + 0x78);
    *(uint *)(param_2 * 0x18 + **(int **)(param_1 + 0x78)) = param_2;
    if (*(uint *)(iVar4 + 0x10) <= param_3) {
      uVar3 = param_3 + 1;
      if (*(uint *)(iVar4 + 0x14) < uVar3) {
        fn_82A9A4B8(iVar4 + 0xc,uVar3,piVar2);
      }
      *(uint *)(iVar4 + 0x10) = uVar3;
      if (*piVar2 < 0) {
        return;
      }
    }
    puVar1 = (uint *)(param_3 * 0x1c + *(int *)(iVar4 + 0xc));
    *puVar1 = param_3;
    puVar1[1] = param_4;
    puVar1[2] = param_5;
    puVar1[3] = param_6;
  }
  return;
}

