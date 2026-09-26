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
extern int fn_826824B0();


undefined4 * fn_826CD928(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
  }
  *param_1 = *(undefined4 *)(param_2 + 0x14);
  if (param_3 != 0) {
    *(uint *)(param_3 + 8) = *(int *)(param_3 + 8) + 1U & 0x8fffffff;
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    fn_826824B0();
  }
  *(int *)(param_2 + 0x14) = param_3;
  return param_1;
}

