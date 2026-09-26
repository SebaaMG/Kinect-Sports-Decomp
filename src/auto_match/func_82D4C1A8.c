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
extern int fn_82CE3DC8();
extern int fn_82CFF8D0();


void fn_82D4C1A8(int param_1,int *param_2)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x18) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x10),*(uint *)(param_1 + 0x18) << 5);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82138850,*(undefined4 *)(param_1 + 0x10),
               *(int *)(param_1 + 0x14) << 5,uVar1);
  }
  fn_82CE3DC8(param_1,param_2,0xffffffff8323c5e4);
  return;
}

