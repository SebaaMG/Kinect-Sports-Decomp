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
extern int fn_8267B890();
extern int fn_82687270();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826CDAB8();
extern int fn_826D28F0();
extern int fn_826DDC60();


void fn_826E0428(int param_1)

{
  undefined4 uVar1;
  uint uVar3;
  ulonglong uVar2;
  int iVar4;
  uint auStack_30 [12];
  
  uVar3 = fn_826A6A38();
  uVar3 = uVar3 & 0xffff;
  fn_826A9280(param_1 + 0x14,0xffffffff8200cad4,uVar3);
  uVar2 = fn_8267B890(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c),0x38,0);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_826D28F0(uVar2,*(undefined4 *)(param_1 + 0x24));
  }
  auStack_30[0] = uVar3;
  fn_826CDAB8(iVar4,param_1,auStack_30);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(uint *)(iVar4 + 0xc) = uVar3;
  auStack_30[0] = uVar3;
  fn_826DDC60(uVar1,auStack_30,iVar4);
  fn_82687270(iVar4);
  return;
}

