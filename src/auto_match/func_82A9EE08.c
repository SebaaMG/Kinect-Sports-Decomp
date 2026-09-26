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
extern int fn_82A9CF38();


void fn_82A9EE08(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  if (-1 < *(int *)(param_1 + 0x90)) {
    iVar1 = *(int *)(param_1 + 100);
    if (*(uint *)(iVar1 + 4) <= param_2) {
      uVar3 = param_2 + 1;
      if (*(uint *)(iVar1 + 8) < uVar3) {
        fn_82A9CF38(iVar1,uVar3,(int *)(param_1 + 0x90));
      }
      *(uint *)(iVar1 + 4) = uVar3;
      if (*(int *)(param_1 + 0x90) < 0) {
        return;
      }
    }
    puVar2 = (undefined4 *)(param_2 * 8 + **(int **)(param_1 + 100));
    *puVar2 = param_3;
    puVar2[1] = puVar2[1] | 0x80000000;
  }
  return;
}

