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
extern int fn_8295A330();
extern int fn_829A9AF8();


undefined8 fn_829A9D58(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
  if ((((*(int *)(iVar2 + 8) == -1) || (iVar1 = ((int (*)())fn_829A9D58)(), -1 < iVar1)) &&
      (iVar1 = fn_829A9AF8(param_1,iVar2), -1 < iVar1)) &&
     (iVar2 = fn_8295A330(param_1,((ulonglong)*(uint *)(iVar2 + 0xc) & 0x3fffffff) * 4 +
                                        (ulonglong)*(uint *)(iVar2 + 0x10)), -1 < iVar2)) {
    *(int *)(*(int *)(param_1 + 0x110) + param_3 * 4) =
         *(int *)(*(int *)(param_1 + 0x110) + param_3 * 4) + 1;
    return 0;
  }
  return 0xffffffff8007000e;
}

