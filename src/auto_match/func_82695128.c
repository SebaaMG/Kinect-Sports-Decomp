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
extern int fn_82694D70();


int * fn_82695128(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(*param_2 + 4) == 0) {
    fn_82694D70();
  }
  iVar2 = *(int *)(*param_2 + 4);
  if (iVar2 == 0) {
    iVar2 = *(int *)(*(int *)(*param_2 & 0xfffffc00) + 0x18);
  }
  iVar1 = *(int *)(iVar2 + 8);
  *param_1 = iVar2;
  *(int *)(iVar2 + 8) = iVar1 + 1;
  return param_1;
}

