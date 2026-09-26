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
extern int fn_822315A0();
extern int fn_822C71C8();
extern int fn_822D9678();
extern int fn_8265CA20();


int fn_822D95C8(int param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x154) != 0) {
    fn_822315A0();
  }
  iVar2 = *(int *)(param_1 + 0x140);
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x144);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 8) {
      if (*(int *)(iVar2 + 4) != 0) {
        fn_822315A0();
      }
    }
    fn_8265CA20(*(undefined4 *)(param_1 + 0x140));
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0xd4) != 0) {
    fn_822315A0();
  }
  fn_822D9678(param_1 + 0x60);
  fn_822C71C8(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

