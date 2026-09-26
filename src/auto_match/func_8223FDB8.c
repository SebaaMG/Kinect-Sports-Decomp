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
extern int fn_82240070();


int * fn_8223FDB8(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (((*(uint *)((int)param_1 + *(int *)(*param_1 + 4) + 0xc) & 6) == 0) &&
     (iVar1 = (**(code **)(**(int **)((int)param_1 + *(int *)(*param_1 + 4) + 0x38) + 0x34))(),
     iVar1 == -1)) {
    uVar2 = 4;
  }
  iVar1 = *(int *)(*param_1 + 4) + (int)param_1;
  if (uVar2 != 0) {
    uVar2 = *(uint *)(iVar1 + 0xc) | uVar2;
    if (*(int *)(iVar1 + 0x38) == 0) {
      uVar2 = uVar2 | 4;
    }
    fn_82240070(iVar1,uVar2,0);
  }
  return param_1;
}

