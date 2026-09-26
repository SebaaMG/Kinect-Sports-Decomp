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


void fn_82DAC280(int param_1,int *param_2)

{
  undefined8 uVar1;
  
  (**(code **)(*param_2 + 0x18))(param_2,0xffffffff82141bf0);
  fn_82CFF928(param_2,0xffffffff82141be4,*(int *)(param_1 + 0x3c),
                    *(undefined2 *)(*(int *)(param_1 + 0x3c) + 2),0);
  if ((*(uint *)(param_1 + 0x28) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x20),*(uint *)(param_1 + 0x28) & 0x3fffffff
                             );
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82141bd8,*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x24),uVar1);
  }
  (**(code **)(*param_2 + 0x1c))(param_2);
  return;
}

