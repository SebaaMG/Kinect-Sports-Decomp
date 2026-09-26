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
extern int fn_82CFF928();


void fn_8308B3F0(int param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((*(uint *)(param_1 + 0xa8) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0xa0),*(uint *)(param_1 + 0xa8) << 4);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82187990,*(undefined4 *)(param_1 + 0xa0),
               *(int *)(param_1 + 0xa4) << 4,uVar1);
  }
  if ((*(uint *)(param_1 + 0xb4) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0xac),*(uint *)(param_1 + 0xb4) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff8213b3e8,*(undefined4 *)(param_1 + 0xac),
               *(int *)(param_1 + 0xb0) << 2,uVar1);
  }
  if ((*(uint *)(param_1 + 0xc0) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0xb8),*(uint *)(param_1 + 0xc0) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff8213b3e8,*(undefined4 *)(param_1 + 0xb8),
               *(int *)(param_1 + 0xbc) << 2,uVar1);
  }
  if ((*(uint *)(param_1 + 0xcc) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0xc4),*(uint *)(param_1 + 0xcc) << 2);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff8213b3e8,*(undefined4 *)(param_1 + 0xc4),
               *(int *)(param_1 + 200) << 2,uVar1);
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    fn_82CFF928(param_2,0xffffffff82187988,*(undefined4 *)(param_1 + 0xd8),
                      *(int *)(param_1 + 0xd0) << 4,0);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xd0)) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0xd8) + iVar3;
      if ((*(uint *)(iVar4 + 0xc) & 0x80000000) == 0) {
        uVar1 = fn_82CFF8D0(*(undefined4 *)(iVar4 + 4),
                                  (*(uint *)(iVar4 + 0xc) & 0x3fffffff) << 1);
        (**(code **)(*param_2 + 0x14))
                  (param_2,3,0xffffffff82187988,*(undefined4 *)(iVar4 + 4),*(int *)(iVar4 + 8) << 1,
                   uVar1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < *(int *)(param_1 + 0xd0));
  }
  return;
}

