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
extern int fn_82E3C590();
extern int fn_82E3C5F8();


ulonglong fn_82EE53B8(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ushort *apuStack_40 [16];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x88) != 0) {
      do {
        fn_82E3C5F8(param_1 + 0x48,uVar1,apuStack_40);
        if ((param_2 & 0xffff) == (ulonglong)*apuStack_40[0]) {
          return 1;
        }
        uVar1 = uVar1 + 1;
      } while ((uVar1 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x88));
    }
    lVar2 = fn_82E3C590(param_1 + 0x48,param_2,0);
    uVar1 = -(ulonglong)(lVar2 == 0) & 0xffffffff8007000e;
  }
  return uVar1;
}

