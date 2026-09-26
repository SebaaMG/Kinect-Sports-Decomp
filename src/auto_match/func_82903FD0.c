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
extern int fn_8265C940();


undefined4 * fn_82903FD0(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 + 2;
  if (*(uint *)(param_1 + 0x94) < uVar3) {
    uVar2 = uVar3;
    if (uVar3 < 0x2000) {
      uVar2 = 0x2000;
    }
    puVar1 = (undefined4 *)fn_8265C940(uVar2 << 2,0x24810000);
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    *puVar1 = *(undefined4 *)(param_1 + 0x90);
    puVar1[1] = -*(int *)(param_1 + 0x94);
    *(undefined4 **)(param_1 + 0x90) = puVar1;
    *(uint *)(param_1 + 0x94) = uVar2;
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 0x90);
    *puVar1 = puVar1;
    puVar1[1] = *(undefined4 *)(param_1 + 0x94);
  }
  *(uint *)(param_1 + 0x90) = uVar3 * 4 + *(int *)(param_1 + 0x90);
  *(uint *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) - uVar3;
  return puVar1 + 2;
}

