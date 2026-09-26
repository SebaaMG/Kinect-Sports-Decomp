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
extern int fn_826944C8();
extern int fn_826AA3E0();


int fn_826ABDB8(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar3;
  longlong lVar2;
  
  fn_826AA3E0(param_1 + 0x50,(ulonglong)*(uint *)(param_1 + 0x54) + 1);
  iVar3 = *(int *)(param_1 + 0x54) * 8 + *(int *)(param_1 + 0x50);
  *(undefined4 *)(iVar3 + -8) = param_2;
  iVar1 = *param_3;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  lVar2 = (ulonglong)*(uint *)(*(int *)(iVar3 + -4) + 8) - 1;
  *(int *)(*(int *)(iVar3 + -4) + 8) = (int)lVar2;
  if (lVar2 == 0) {
    fn_826944C8();
  }
  *(int *)(iVar3 + -4) = iVar1;
  return iVar3 + -8;
}

