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
extern int fn_82BC0088();


void fn_82BC3070(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x50) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | 0x42;
  piVar1 = (int *)fn_82BC0088(*(int *)(param_2 + 0x814),
                                *(undefined4 *)(*(int *)(param_2 + 0x814) + 4));
  *piVar1 = param_1;
  return;
}

