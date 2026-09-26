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
extern unsigned int *auStack_30;
extern int fn_82359C18();
extern int fn_82517ED8();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828E53D8();
extern int fn_828E91A8();
extern int fn_828E9B20();
extern int fn_82BA02A8();


void fn_82518070(int param_1)

{
  int iVar3;
  ulonglong uVar1;
  undefined4 uVar4;
  undefined8 uVar2;
  undefined1 auStack_30 [24];
  
  iVar3 = fn_82517ED8(auStack_30);
  iVar3 = *(int *)(iVar3 + 0x10);
  fn_82359C18(auStack_30);
  if (iVar3 != 0) {
    uVar1 = fn_8265C9E0(0x40);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_828E9B20(uVar1,param_1);
    }
    iVar3 = *(int *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x78) = uVar4;
    if (iVar3 != 0) {
      fn_828E91A8(iVar3);
      fn_8265CA20(iVar3);
    }
    uVar2 = fn_82BA02A8(*(undefined4 *)(param_1 + 0x78));
    uVar4 = fn_828E53D8(uVar2,0xffffffff831d7008);
    *(undefined4 *)(param_1 + 0x7c) = uVar4;
  }
  return;
}

