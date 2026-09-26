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
extern int fn_82A403E8();
extern int fn_82A40AD8();
extern int fn_82A4F4E0();
extern int fn_82A518E0();


void fn_82A44008(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) != 1) {
    *(int *)(*(int *)(param_1 + 0x30) + 0x28) =
         *(int *)(*(int *)(param_1 + 0x30) + 0x28) - *(int *)(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 4) == 0) {
    (**(code **)(*(int *)(param_1 + -4) + 0x78))(param_1 + -4,1);
  }
  fn_82A518E0(param_1);
  while (iVar1 = fn_82A40AD8(param_1 + 0xe0), iVar1 != 0) {
    if (iVar1 != 0) {
      fn_82A4F4E0();
    }
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    fn_82A403E8(*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  return;
}

