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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT42(h,l) ((U64)((((U32)(h)) << 16) | ((U16)(l))))
#define CONCAT62(h,l) ((U64)((((U64)(h)) << 16) | ((U16)(l))))
extern int fn_827B6CF8();
extern int fn_827B7A60();


void fn_827B7AE0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_827B7A60(param_1,*(undefined4 *)(*(int *)(param_2 + 8) + 0x10));
  fn_827B7A60(param_1,*(undefined4 *)(*(int *)(param_2 + 8) + 0x14));
  if (**(int **)(param_2 + 8) != 0) {
    fn_827B6CF8(param_1 + 0x84);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  if ((*(short *)(iVar1 + 6) != 0) && (param_2 == *(int *)(iVar1 + 0x14))) {
    *(short *)(param_2 + 0x24) = *(short *)(param_2 + 0x24) + *(short *)(iVar1 + 6);
    *(undefined2 *)(iVar1 + 6) = 0;
  }
  **(undefined4 **)(param_2 + 8) = 0;
  *(ulonglong *)(*(int *)(param_2 + 8) + 0x18) =
       CONCAT62(CONCAT42(CONCAT22(*(undefined2 *)(param_2 + 0x22),
                                  *(undefined2 *)(*(int *)(param_2 + 0x1c) + 2)),
                         *(undefined2 *)(param_2 + 0x24)),
                *(undefined2 *)(*(int *)(param_2 + 0x1c) + 4));
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x10) = 0;
  *(undefined4 *)(*(int *)(param_2 + 8) + 0x14) = 0;
  *(undefined2 *)(param_2 + 0x26) = 0;
  if ((*(ushort *)(param_2 + 0x20) & 0x4000) != 0) {
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) & 0xbfff;
    uVar2 = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_2 + 0x14) = param_1 + 0x3c;
    *(undefined4 *)(param_2 + 0x18) = uVar2;
    *(int *)(*(int *)(param_1 + 0x54) + 0x14) = param_2;
    *(int *)(param_1 + 0x54) = param_2;
  }
  return;
}

