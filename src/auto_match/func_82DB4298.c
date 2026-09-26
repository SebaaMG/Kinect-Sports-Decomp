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
extern int fn_82CE5410();
extern int fn_82D83D30();
extern int fn_82D841E0();
extern int fn_82DB4458();
extern int fn_82DC82A8();


void fn_82DB4298(int param_1)

{
  int iVar2;
  ulonglong uVar1;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x1c0);
  if (iVar2 == 0) {
    iVar2 = fn_82CE5410();
    iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x4c);
    *(undefined2 *)(iVar2 + 4) = 0x4c;
    uVar1 = fn_82DB4458();
    *(int *)(param_1 + 0x1c0) = (int)uVar1;
    lVar3 = uVar1 + 0xc;
    if ((uVar1 & 0xffffffff) == 0) {
      lVar3 = 0;
    }
    fn_82D841E0(param_1,lVar3);
    lVar3 = uVar1 + 8;
    if ((uVar1 & 0xffffffff) == 0) {
      lVar3 = 0;
    }
    fn_82D83D30(param_1,lVar3);
    fn_82DC82A8(uVar1 + 0x14,param_1);
  }
  else {
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  }
  return;
}

