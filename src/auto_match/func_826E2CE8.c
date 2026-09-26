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
extern int fn_826A9280();
extern int fn_826AA460();
extern int fn_826DFB28();
extern int fn_826E7A08();
extern int fn_826F6638();
extern int fn_826FA300();


void fn_826E2CE8(int param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 auStack_30 [12];
  
  fn_826A9280(param_1 + 0x14,0xffffffff8200d098);
  iVar3 = *(int *)(param_1 + 0x314);
  if (iVar3 == 0) {
    iVar3 = param_1 + 0x28;
  }
  uVar1 = fn_826FA300(iVar3);
  lVar2 = fn_826DFB28(param_1,uVar1);
  fn_826E7A08(iVar3,lVar2 + 5,uVar1);
  fn_826F6638(lVar2,uVar1);
  auStack_30[0] = (undefined4)lVar2;
  fn_826AA460(*(int *)(param_1 + 0x2e8) * 0xc + param_1 + 0x2f0,auStack_30);
  return;
}

