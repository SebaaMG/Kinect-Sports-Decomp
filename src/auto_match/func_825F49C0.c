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
extern int fn_825E4B68();
extern int fn_825E4C20();
extern int fn_825E4D88();


void fn_825F49C0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  fn_825E4B68();
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x800)) {
    puVar2 = (undefined1 *)(param_1 + 0x1c);
    do {
      fn_825E4D88((double)*(float *)(puVar2 + -8),
                        *(undefined4 *)(*(int *)(puVar2 + -0x1c) + 0x14),puVar2 + -0x18,
                        puVar2 + -0x10,param_4,*(undefined4 *)(puVar2 + -4),*puVar2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x20;
    } while (iVar1 < *(int *)(param_1 + 0x800));
  }
  fn_825E4C20();
  return;
}

