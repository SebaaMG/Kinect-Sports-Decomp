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
extern unsigned int *auStack_20;
extern int fn_8243CD40();
extern int fn_82517E78();
extern int fn_82594EC8();
extern unsigned int lbl_821C7A78;
extern unsigned int lbl_821C7A80;
extern unsigned int lbl_821C7AD8;


void fn_825947B8(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint auStack_20 [4];
  
  *param_1 = &lbl_821C7A78;
  param_1[0x1a] = &lbl_821C7AD8;
  iVar2 = (*(code *)lbl_821C7A80)();
  auStack_20[0] = (**(code **)(*(int *)(iVar2 + 0xf0) + 0x3c))();
  auStack_20[0] = auStack_20[0] & 0xff;
  if (auStack_20[0] != 0) {
    puVar3 = (uint *)fn_8243CD40(0xffffffff83296ff4,auStack_20);
    uVar1 = *puVar3;
    *puVar3 = (uint)((ulonglong)uVar1 - 1);
    if ((ulonglong)uVar1 - 1 == 0) {
      fn_82594EC8(auStack_20);
    }
  }
  if (param_1[0x20] != 0) {
    *(undefined4 *)(param_1[0x20] + 0x20) = 0;
  }
  fn_82517E78(param_1);
  return;
}

