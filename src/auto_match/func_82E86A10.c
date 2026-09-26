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
extern int fn_82E85718();
extern int fn_82F02410();


void fn_82E86A10(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x6f4c) != 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
  }
  if ((*(int *)(param_1 + 0x76c8) == 0) || (*(int *)(param_1 + 0x76e0) != 0)) {
    uVar3 = 4;
    uVar2 = 0xf;
  }
  else {
    uVar3 = 5;
    uVar2 = 0x1f;
  }
  fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar2,uVar3);
  if (*(int *)(param_1 + 0x6f48) != 0) {
    if ((*(int *)(param_1 + 0x6f4c) == 0) || (*(int *)(param_1 + 0x6f7c) != 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0x6f60);
      uVar2 = 2;
    }
    else {
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x6f50),1);
      uVar1 = *(undefined4 *)(param_1 + 0x6f54);
      uVar2 = 1;
    }
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),uVar1,uVar2);
  }
  if (*(int *)(param_1 + 0x4fc) != 0) {
    fn_82E85718(param_1);
  }
  return;
}

