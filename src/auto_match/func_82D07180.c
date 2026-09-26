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


void fn_82D07180(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  if ((*(uint *)(param_1 + 0x1c) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x14),
                              (*(uint *)(param_1 + 0x1c) & 0x3fffffff) << 1);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821340b4,*(undefined4 *)(param_1 + 0x14),
               *(int *)(param_1 + 0x18) << 1,uVar2);
  }
  if ((*(uint *)(param_1 + 0x28) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x20),*(uint *)(param_1 + 0x28) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821340a8,*(undefined4 *)(param_1 + 0x20),
               *(int *)(param_1 + 0x24) << 2,uVar2);
  }
  if ((*(uint *)(param_1 + 0x10) & 0x80000000) == 0) {
    uVar2 = fn_82CFF8D0(*(undefined4 *)(param_1 + 8),*(uint *)(param_1 + 0x10) << 5);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821340c0,*(undefined4 *)(param_1 + 8),
               *(int *)(param_1 + 0xc) << 5,uVar2);
  }
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xc);
  if (0 < (int)*(uint *)(param_1 + 0xc)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 8);
      (**(code **)(*param_2 + 0xc))(param_2,0xffffffff8213419c,*(undefined4 *)(iVar3 + iVar1),0);
      (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82131ab8,*(undefined4 *)(iVar3 + iVar1 + 4),0)
      ;
      uVar4 = uVar4 - 1;
      iVar3 = iVar3 + 0x20;
    } while (uVar4 != 0);
  }
  return;
}

