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
extern int fn_82AA66A8();


double fn_82B167E0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  double dVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 & 0xfffff000) + 0x94);
  if (((~(ulonglong)*(uint *)(iVar1 + 0x28) & 0xffffffff) >> 0xe & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(uint *)(param_1 + 0x14) >> 2 & 0xff) >> ((param_2 & 0x1f) << 1) & 3;
  }
  if (uVar2 == 0) {
    dVar4 = (double)*(float *)((param_2 + 0xb) * 4 + param_1);
  }
  else {
    if (uVar2 == 1) {
      uVar3 = (ulonglong)*(int *)((param_2 + 0xb) * 4 + param_1);
    }
    else {
      if (2 < uVar2) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(iVar1,0x12c0);
      }
      uVar3 = (ulonglong)*(uint *)((param_2 + 0xb) * 4 + param_1);
    }
    dVar4 = (double)(longlong)uVar3;
  }
  return dVar4;
}

