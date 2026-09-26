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
extern int fn_82F691F0();


ulonglong fn_82F24798(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x4db0) * 0x4c0 + (ulonglong)*(uint *)(param_1 + 0x73f4);
  if (7 < (int)*(uint *)(param_1 + 0x4db0)) {
    iVar4 = *(int *)(param_1 + 0x4dac);
    if (iVar4 < 0x200) {
      iVar2 = 0x200 - iVar4;
      piVar3 = (int *)((iVar4 + 0x112a) * 4 + param_1);
      iVar4 = (iVar4 * 3 + 0xb2b) * 4 + param_1;
      do {
        piVar3 = piVar3 + 1;
        *piVar3 = iVar4;
        iVar4 = iVar4 + 0xc;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(undefined4 *)(param_1 + 0x4dac) = 0x1ff;
    fn_82F691F0(param_1 + 0x4cac,0,0x100);
    *(undefined4 *)(param_1 + 0x4db0) = 0;
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x73f4);
  }
  *(int *)(param_1 + 0x4db0) = *(int *)(param_1 + 0x4db0) + 1;
  return uVar1;
}

