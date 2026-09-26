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
extern int fn_824B42A0();
extern int fn_82A1F2F8();
extern int fn_82F4DA20();
extern int fn_82F50348();


void fn_82F52770(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong lVar5;
  
  uVar1 = fn_824B42A0();
  iVar2 = fn_82F4DA20(2);
  piVar4 = (int *)(param_1 + 0x8200);
  if (*(int *)(iVar2 + 8) != *(int *)(*piVar4 + 8)) {
    lVar5 = 0;
    do {
      fn_82F50348(param_1,iVar2,lVar5,uVar1,1);
      lVar5 = lVar5 + 1;
      param_1 = param_1 + 0xd00;
    } while ((int)lVar5 < 6);
    uVar3 = fn_82A1F2F8();
    *(undefined4 *)(*piVar4 + 4) = uVar3;
    *(undefined4 *)(*piVar4 + 8) = *(undefined4 *)(iVar2 + 8);
  }
  return;
}

