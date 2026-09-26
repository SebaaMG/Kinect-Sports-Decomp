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
extern int fn_8265C990();
extern int fn_8291AF48();


void fn_82917D90(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar2 = 0;
    if (*(short *)(*(int *)(param_1 + 0x18) + 10) != 0) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(iVar3 + *(int *)(param_1 + 0x38));
        if (iVar1 != 0) {
          fn_8291AF48(iVar1,1);
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar2 < *(ushort *)(*(int *)(param_1 + 0x18) + 10));
    }
    fn_8265C990(*(undefined4 *)(param_1 + 0x38),0x24810000);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar2 = 0;
    if (*(short *)(*(int *)(param_1 + 0x18) + 8) != 0) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + iVar3);
        if (iVar1 != 0) {
          fn_8291AF48(iVar1,1);
        }
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (uVar2 < *(ushort *)(*(int *)(param_1 + 0x18) + 8));
    }
    fn_8265C990(*(undefined4 *)(param_1 + 0x3c),0x24810000);
  }
  fn_8265C990(*(undefined4 *)(param_1 + 0x40),0x24810000);
  return;
}

