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
extern int fn_8265C990();
extern int fn_82F691F0();


undefined8 fn_82920FB8(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(char *)((int)param_1 + 0xb) == '\x01') {
    uVar3 = (ulonglong)*(uint *)(*param_1 + 0x68);
    if ((ulonglong)*(uint *)(*param_1 + 0x68) < (ulonglong)*(uint *)(param_1[1] + 0x68)) {
      uVar3 = (ulonglong)*(uint *)(param_1[1] + 0x68);
    }
    lVar4 = (uVar3 & 0xfffffff) << 4;
    lVar1 = fn_8265C940(lVar4,0x24810000);
    if (lVar1 != 0) {
      lVar2 = fn_8265C940(*(int *)(param_1[1] + 0x68) << 4,0x24810000);
      if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar1,0,lVar4);
      }
      fn_8265C990(lVar1,0x24810000);
    }
  }
  return 0xffffffff80004005;
}

