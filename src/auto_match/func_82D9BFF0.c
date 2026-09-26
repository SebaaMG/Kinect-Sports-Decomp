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
extern int fn_82CFF8D0();
extern int fn_82D9A4A8();


void fn_82D9BFF0(int param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  fn_82D9A4A8(param_1,param_2,0xffffffff8323e170);
  if ((*(uint *)(param_1 + 0x168) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x160),*(uint *)(param_1 + 0x168) << 3);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82141860,*(undefined4 *)(param_1 + 0x160),
               *(int *)(param_1 + 0x164) << 3,uVar1);
  }
  (**(code **)(*param_2 + 0x18))(param_2,0xffffffff82141858);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x164)) {
    iVar2 = 0;
    do {
      (**(code **)(*param_2 + 0xc))(param_2,0,*(undefined4 *)(iVar2 + *(int *)(param_1 + 0x160)),0);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x164));
  }
  (**(code **)(*param_2 + 0x1c))(param_2);
  return;
}

