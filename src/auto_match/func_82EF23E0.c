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
extern int fn_82EF1D58();
extern int fn_82F64CE0();
extern unsigned int iStack_40;


undefined8 fn_82EF23E0(int param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iStack_40;
  int aiStack_3c [15];
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0xffffffffc00d36b6;
  }
  else {
    lVar2 = 0x30;
    if (*(int *)(param_1 + 0x48) != 0) {
      lVar2 = fn_82F64CE0();
      lVar2 = (lVar2 + 1U & 0x7fffffff) * 2 + 0x30;
    }
    uVar3 = 0;
    if (*(int *)(param_1 + 0x3b8) != 0) {
      do {
        fn_82EF1D58(param_1 + 0x50,uVar3,&iStack_40);
        fn_82EF1D58(param_1 + 0x50,uVar3,aiStack_3c);
        uVar3 = uVar3 + 1;
        lVar2 = (((ulonglong)*(uint *)(iStack_40 + 0x1c) & 0x7fffffff) * 2 +
                 (ulonglong)*(uint *)(aiStack_3c[0] + 0x20) & 0xffffffff) + lVar2 + 0x1e;
      } while ((uVar3 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0x3b8));
    }
    if (param_2 != (longlong *)0x0) {
      *param_2 = lVar2;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = lVar2;
    }
    *(longlong *)(param_1 + 0x20) = lVar2;
    uVar1 = 0;
  }
  return uVar1;
}

