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
extern int fn_8265C990();
extern int fn_82F691F0();


void fn_82656468(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x5e6c);
  if (iVar1 != 0) {
    if ((*(uint *)(param_1 + 0x5e80) & 0x8000000) == 0) {
      MmFreePhysicalMemory(2,iVar1);
    }
    else {
      fn_8265C990(iVar1,0x24800000);
    }
  }
  iVar1 = *(int *)(param_1 + 0x5c1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x5e80) >> 0x1e;
    if (iVar2 == 0) {
      MmFreePhysicalMemory(2,iVar1);
    }
    else if (iVar2 == 1) {
      fn_8265C990(iVar1,0xffffffffb1800000);
    }
  }
  iVar1 = *(int *)(param_1 + 0x5c20);
  if (iVar1 != 0) {
    iVar2 = (int)(*(uint *)(param_1 + 0x5e80) << 2 | *(uint *)(param_1 + 0x5e80) >> 0x1e) >> 0x1e;
    if (iVar2 == 0) {
      MmFreePhysicalMemory(2,iVar1);
    }
    else if (iVar2 == 1) {
      fn_8265C990(iVar1,0xffffffffb1800000);
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0((int *)(param_1 + 0x5c1c),0,0x26c);
}

