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
extern unsigned int *auStack_10f;
extern int fn_82654018();
extern int fn_82F691F0();
extern unsigned int lbl_83282408;


undefined8 fn_826543B0(int param_1)

{
  undefined8 in_r0;
  undefined8 uVar1;
  undefined1 auStack_10f [255];
  
  DbgPrint(0xffffffff821cd6f0);
  fn_82654018(param_1,*(undefined4 *)(param_1 + 0x3548));
  if (*(int *)(param_1 + 0x3548) == 0) {
    DbgPrint(0xffffffff821cd740);
    DbgPrint(0xffffffff821cd820);
    trapWord(0x1f,in_r0,0x16);
    uVar1 = 1;
  }
  else {
    if (lbl_83282408 == 0) {
      *(byte *)(param_1 + 0x2abd) = *(byte *)(param_1 + 0x2abd) | 3;
      **(int **)(param_1 + 0x2a90) = *(int *)(param_1 + 0x2a9c) + -2;
      *(undefined4 *)(param_1 + 0x2b04) = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_10f,0,0xff);
    }
    uVar1 = 0;
  }
  return uVar1;
}

