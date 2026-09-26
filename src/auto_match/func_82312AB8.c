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
extern int fn_82312830();
extern int fn_8236A6E8();
extern int fn_825275B0();


void fn_82312AB8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((*(int *)(*(int *)(param_1 + 0xc) + 0x28) == *(int *)(iVar1 + 0xde4)) &&
     (*(int *)(*(int *)(param_1 + 0xc) + 0x2c) == *(int *)(iVar1 + 0xde0))) {
    if (*(int *)(iVar1 + 0x42c) != 2) {
      fn_825275B0(*(undefined4 *)(iVar1 + 0xe10));
    }
    *(undefined4 *)(iVar1 + 0x42c) = 2;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x240) = 1;
    if (*(int *)(param_1 + 0x110) == 0) {
      fn_8236A6E8(*(undefined4 *)(param_1 + 0x10),4);
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x25c) = 1;
      fn_82312830(param_1);
    }
  }
  return;
}

