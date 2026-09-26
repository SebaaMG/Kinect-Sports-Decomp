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
extern int fn_82CEA280();


undefined8 fn_82E0A1C0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1[0x1e];
  if (iVar1 != 0) {
    uVar2 = fn_82CEA280(iVar1 + 0x28,*(undefined4 *)(iVar1 + 0x34),0);
    return uVar2;
  }
  if ((-1 < *(int *)(param_1[7] + 0x20)) && (-1 < *(int *)(param_1[7] + 0x24))) {
                    /* WARNING: Could not recover jumptable at 0x82e0a1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x3c))();
    return uVar2;
  }
  return 0;
}

