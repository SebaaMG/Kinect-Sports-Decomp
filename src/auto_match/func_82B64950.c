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
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F691F0();


undefined8 fn_82B64950(int *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)((int)param_1 + 0xb) == '\x01') {
    uVar4 = *(uint *)(param_1[1] + 0x68);
    if (*(uint *)(param_1[1] + 0x68) <= *(uint *)(*param_1 + 0x68)) {
      uVar4 = *(uint *)(*param_1 + 0x68);
    }
    lVar1 = ((ulonglong)uVar4 & 0xfffffff) << 4;
    if (0xfffffff < uVar4) {
      lVar1 = -1;
    }
    uVar2 = fn_8265C9E0(lVar1);
    if ((uVar2 & 0xffffffff) != 0) {
      lVar1 = ((ulonglong)*(uint *)(param_1[1] + 0x68) & 0xfffffff) << 4;
      if (0xfffffff < *(uint *)(param_1[1] + 0x68)) {
        lVar1 = -1;
      }
      iVar3 = fn_8265C9E0(lVar1);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar2,0,uVar4 << 4);
      }
      fn_8265CA20();
    }
  }
  return 0xffffffff80004005;
}

