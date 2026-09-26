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
extern int fn_82817778();
extern int fn_82817800();
extern int fn_8284D490();
extern int fn_8284DB80();
extern int fn_8284DFA0();


void fn_8284E1F0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    uVar2 = *(undefined4 *)(param_2 + 0x24);
    fn_82817778(*(undefined4 *)(param_1 + 0x124),0xffffffff8201f530,
                      *(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8),param_2);
    *(int *)(param_2 + 0x20) = iVar1;
    *(undefined4 *)(param_2 + 0x24) = uVar2;
    if (iVar1 != 0) {
      fn_82817778(*(undefined4 *)(param_1 + 0x124),0xffffffff8201f538,
                        *(undefined4 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 0x18),iVar1);
    }
    if (*(int *)(param_2 + 0x24) != 0) {
      fn_82817778(*(undefined4 *)(param_1 + 0x124),0xffffffff8201f540,
                        *(undefined4 *)(param_3 + 0x24),*(undefined4 *)(param_3 + 0x28));
    }
  }
  fn_82817800(*(undefined4 *)(param_1 + 0x124));
  fn_8284DFA0(*(int *)(param_1 + 0x134) + param_2);
  fn_8284D490(param_1,param_2);
  fn_8284DB80(param_1,param_2);
  return;
}

