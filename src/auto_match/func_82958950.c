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
extern int fn_82F68CC0();


undefined8 fn_82958950(int param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x118);
  uVar3 = uVar2;
  if (uVar2 == 0) {
    uVar3 = 0x400;
  }
  if (uVar3 < (uint)(param_2 + *(int *)(param_1 + 0x114))) {
    do {
      uVar3 = (uVar3 & 0x7fffffff) << 1;
    } while (uVar3 < (uint)(param_2 + *(int *)(param_1 + 0x114)));
  }
  if (uVar3 != uVar2) {
    lVar1 = fn_8265C940((uVar3 & 0x3fffffff) << 2,0x24810000);
    if (lVar1 == 0) {
      return 0xffffffff8007000e;
    }
    fn_82F68CC0(lVar1,*(undefined4 *)(param_1 + 0x110),*(int *)(param_1 + 0x114) << 2);
    fn_8265C990(*(undefined4 *)(param_1 + 0x110),0x24810000);
    *(int *)(param_1 + 0x110) = (int)lVar1;
    *(int *)(param_1 + 0x118) = (int)uVar3;
  }
  return 0;
}

