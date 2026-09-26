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
extern int fn_826DDC60();
extern int fn_82772D08();
extern int fn_82772E48();


void fn_826E0188(int param_1,undefined8 param_2)

{
  uint uVar2;
  int iVar3;
  ulonglong uVar1;
  uint auStack_30 [12];
  
  uVar2 = fn_826A6A38();
  fn_826A9280(param_1 + 0x14,0xffffffff8200ca60,uVar2 & 0xffff);
  iVar3 = fn_8267B890(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c),0xd0,0);
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82772D08();
  }
  fn_82772E48(uVar1,param_1,param_2,1);
  if (*(int *)(param_1 + 0x2e8) == 0) {
    auStack_30[0] = uVar2 & 0xffff;
    fn_826DDC60(*(undefined4 *)(param_1 + 0x20),auStack_30,uVar1);
  }
  if ((uVar1 & 0xffffffff) != 0) {
    fn_82687270(uVar1);
  }
  return;
}

