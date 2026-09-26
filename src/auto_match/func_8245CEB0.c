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
extern int fn_8265CA20();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1EFC0();


void fn_8245CEB0(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar4 + *(int *)(param_1 + 4)) != 0) {
          fn_8265CA20();
          *(undefined4 *)(iVar4 + *(int *)(param_1 + 4)) = 0;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x20;
      } while (uVar3 < *(uint *)(param_1 + 0x10));
    }
    fn_8265CAA0(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  lVar1 = ((ulonglong)*(uint *)(param_1 + 0x10) & 0x7ffffff) << 5;
  if (0x7ffffff < *(uint *)(param_1 + 0x10)) {
    lVar1 = -1;
  }
  uVar2 = fn_8265CA60(lVar1);
  *(int *)(param_1 + 4) = (int)uVar2;
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(uVar2,0,*(int *)(param_1 + 0x10) << 5);
}

