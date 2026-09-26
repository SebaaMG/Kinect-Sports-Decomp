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


void fn_82D93550(int param_1,int *param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82141708,*(undefined4 *)(param_1 + 0x10),0);
  if ((*(uint *)(param_1 + 0x68) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x60),*(uint *)(param_1 + 0x68) << 3);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821416fc,*(undefined4 *)(param_1 + 0x60),
               *(int *)(param_1 + 100) << 3,uVar1);
  }
  if ((*(uint *)(param_1 + 0x80) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x78),*(uint *)(param_1 + 0x80) << 4);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff821416f0,*(undefined4 *)(param_1 + 0x78),
               *(int *)(param_1 + 0x7c) << 4,uVar1);
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    fn_82CFF928(param_2,0xffffffff821416e0,*(int *)(param_1 + 0x54),
                      (ulonglong)*(ushort *)(param_1 + 0x52) << 5,0);
    fn_82CFF928(param_2,0xffffffff821416e0,*(undefined4 *)(param_1 + 0x58),
                      (ulonglong)*(ushort *)(param_1 + 0x52) << 2,0);
  }
  return;
}

