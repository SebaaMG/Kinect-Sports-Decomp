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


void fn_827B5CC0(int param_1)

{
  undefined4 *puVar1;
  undefined8 in_r8;
  undefined8 in_r9;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x827b5cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)puVar1[*(int *)(param_1 + 8) * 5 + 0xe] + 4))
            ((int *)puVar1[*(int *)(param_1 + 8) * 5 + 0xe],*puVar1,puVar1[1],9,0,in_r8,in_r9,
             puVar1 + *(int *)(param_1 + 8) * 5 + 0xe);
  return;
}

