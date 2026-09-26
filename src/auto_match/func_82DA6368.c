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
extern int fn_82CE3F80();
extern int fn_82CE3FE8();
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE63B0();


void fn_82DA6368(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  fn_82CE3F80();
  *(int *)(*(int *)(param_1 + 0xc) + 0x90) = *(int *)(*(int *)(param_1 + 0xc) + 0x90) + 1;
  iVar2 = fn_82CE5410();
  if (*(uint *)(param_1 + 0x20) == (*(uint *)(param_1 + 0x24) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(undefined4 *)(iVar2 + 0x10),(int *)(param_1 + 0x1c),0x10);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar1 = *(int *)(param_1 + 0x20) * 0x10;
  iVar3 = iVar1 + iVar2;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  *(int *)(iVar1 + iVar2) = (int)param_2;
  *(int *)(iVar3 + 4) = (int)param_3;
  *(undefined4 *)(iVar3 + 8) = param_4;
  *(undefined4 *)(iVar3 + 0xc) = param_5;
  fn_82CE4040(param_2);
  fn_82CE4040(param_3);
  fn_82CE3FE8();
  return;
}

