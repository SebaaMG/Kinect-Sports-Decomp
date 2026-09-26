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


void fn_827DECE0(int param_1,code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0xffffffff) {
    if (uVar1 < 0x40) {
      piVar2 = *(int **)((uVar1 + 0x295) * 4 + *(int *)(param_1 + 0xc));
    }
    else {
      piVar2 = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x827da650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 0x24))(piVar2,*(undefined4 *)(param_1 + 4),UNRECOVERED_JUMPTABLE);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x827da65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined4 *)(param_1 + 4),0);
  return;
}

