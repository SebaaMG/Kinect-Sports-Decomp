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
extern int fn_822AA770();
extern int fn_8288B760();


undefined8 fn_8236FA88(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_1 + 0x1e0);
  if (iVar1 != 8) {
    uVar4 = (uint)((ulonglong)LZCOUNT(iVar1) >> 3) & 4;
    iVar5 = fn_822AA770(*(undefined4 *)(**(int **)(param_1 + 8) + uVar4));
    if (iVar5 != 0) {
      if (*(int *)(iVar5 + 0x168) == 0) {
        uVar6 = *(uint *)(iVar5 + 0x16c);
      }
      else {
        uVar6 = fn_8288B760();
        uVar6 = uVar6 & 0xff;
      }
      if (uVar6 != 0) {
        piVar2 = *(int **)(**(int **)(param_1 + 8) + uVar4);
        piVar3 = *(int **)(iVar1 * 4 + **(int **)(param_1 + 8));
        uVar4 = (uint)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x20);
        uVar6 = (uint)*(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
        if (((uVar4 == uVar6 - 1) && (2 < uVar4)) && (2 < uVar6)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

