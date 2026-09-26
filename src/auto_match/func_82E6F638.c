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


undefined8 fn_82E6F638(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    return 0xffffffffc00d36bb;
  }
  if (param_2 == 0) {
    return 0xffffffff80070057;
  }
                    /* WARNING: Could not recover jumptable at 0x82e6f67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(int **)(param_1 + 0x58) + 0x4c))
                    (*(int **)(param_1 + 0x58),param_2 * 10000);
  return uVar1;
}

