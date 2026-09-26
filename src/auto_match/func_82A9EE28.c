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
extern int fn_82A9A548();


void fn_82A9EE28(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  if (-1 < *(int *)(param_1 + 0x90)) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (*(uint *)(iVar1 + 4) <= param_2) {
      uVar3 = param_2 + 1;
      if (*(uint *)(iVar1 + 8) < uVar3) {
        fn_82A9A548(iVar1,uVar3,(int *)(param_1 + 0x90));
      }
      *(uint *)(iVar1 + 4) = uVar3;
      if (*(int *)(param_1 + 0x90) < 0) {
        return;
      }
    }
    puVar2 = (uint *)(param_2 * 0x18 + **(int **)(param_1 + 0x78));
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = param_4;
  }
  return;
}

