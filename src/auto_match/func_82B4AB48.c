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
extern int fn_82ABE5F8();
extern int fn_82AE60E8();
extern int fn_82F68CC0();


void fn_82B4AB48(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (*(uint **)(param_1 + 0x2f4) == (uint *)0x0) {
    puVar2 = (undefined4 *)fn_82AE60E8(param_1,0x28,0);
    *(undefined4 **)(param_1 + 0x2f4) = puVar2;
    *puVar2 = 10;
  }
  else {
    uVar1 = **(uint **)(param_1 + 0x2f4);
    if (uVar1 <= *(int *)(param_1 + 0x20) + 1U) {
      piVar3 = (int *)fn_82AE60E8(param_1,uVar1 << 3,0);
      fn_82F68CC0(piVar3,*(undefined4 *)(param_1 + 0x2f4),uVar1 << 2);
      *piVar3 = uVar1 << 1;
      fn_82ABE5F8(param_1,*(undefined4 *)(param_1 + 0x2f4),uVar1 << 2,0);
      *(int **)(param_1 + 0x2f4) = piVar3;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x20) * 4 + *(int *)(param_1 + 0x2f4)) =
       *(undefined4 *)(param_1 + 0x2f0);
  return;
}

