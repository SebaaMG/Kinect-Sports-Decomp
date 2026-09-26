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
extern int fn_82BB4FB0();
extern int fn_82BB80E8();
extern int fn_82BB8B88();
extern int fn_82BB9428();
extern int fn_82BBFD48();
extern int fn_82BBFDD0();
extern int fn_82BC5538();


void fn_82BB9628(int param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  while (uVar3 = fn_82BB8B88(param_1), (uVar3 & 0xffffffff) != 0) {
    fn_82BB9428(param_1,uVar3);
  }
  fn_82BB4FB0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x20));
  iVar5 = 0;
  iVar6 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar6) != 0) {
      iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + iVar6) + 0x28);
      *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar6) = 0;
      fn_82BC5538(*(undefined4 *)(param_1 + 0x10),iVar5);
      *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) | 4;
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 < 8);
  iVar6 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
  iVar2 = *(int *)(iVar6 + 8);
  while (iVar1 = iVar2, iVar1 != 0) {
    iVar5 = *(int *)(iVar6 + 0x28);
    fn_82BBFDD0();
    fn_82BC5538(*(undefined4 *)(param_1 + 0x10),iVar5);
    *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) | 4;
    iVar6 = iVar1;
    iVar2 = *(int *)(iVar1 + 8);
  }
  if (iVar5 != 0) {
    *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) & 0xfffffffb;
  }
  fn_82BB80E8(param_1);
  cVar4 = fn_82BBFD48(param_1 + 0x24);
  if (cVar4 != '\0') {
    do {
      cVar4 = fn_82BBFD48(param_1 + 0x3c);
      if (cVar4 != '\0') {
        return;
      }
      fn_82BB80E8(param_1);
      cVar4 = fn_82BBFD48(param_1 + 0x24);
    } while (cVar4 != '\0');
  }
  return;
}

