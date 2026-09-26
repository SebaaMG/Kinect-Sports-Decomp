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
extern int fn_82E57B08();
extern int fn_82F64CE0();


undefined8 fn_82E58570(int param_1,longlong *param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 *apuStack_50 [20];
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else {
    lVar3 = 0x1a;
    if (*(int *)(param_1 + 0xb0) != 0) {
      uVar4 = 0;
      do {
        fn_82E57B08(param_1 + 0x48,uVar4,apuStack_50);
        uVar1 = fn_82F64CE0(*apuStack_50[0]);
        uVar4 = uVar4 + 1 & 0xffff;
        lVar3 = ((uVar1 & 0x7fffffff) * 2 + 3 & 0xffffffff) + lVar3;
      } while (uVar4 < *(uint *)(param_1 + 0xb0));
    }
    if (param_2 != (longlong *)0x0) {
      *param_2 = lVar3;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar3;
    }
    *(longlong *)(param_1 + 0x20) = lVar3;
  }
  return uVar2;
}

