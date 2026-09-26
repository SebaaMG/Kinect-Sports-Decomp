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


undefined8 fn_82E418D0(int param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    return 0xffffffff80070057;
  }
  if (*(ushort *)(param_3 + 0x20) < 0x80) {
    piVar1 = *(int **)((*(ushort *)(param_3 + 0x20) + 0x1b) * 4 + param_1);
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x82e41914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*piVar1 + 0x1c))();
      return uVar2;
    }
  }
  return 0xffffffffc00d36b3;
}

