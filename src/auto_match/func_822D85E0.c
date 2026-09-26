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
extern int fn_8236FDE0();
extern int fn_823807F0();
extern int fn_825114C8();


void fn_822D85E0(int param_1)

{
  int iVar1;
  
  fn_825114C8((ulonglong)*(uint *)(*(int *)(param_1 + 0x54) + 0x118) + 0x14,0x17);
  *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x274) = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x54) + 0x118) + 0xc);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x118) = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x4c) = *(undefined4 *)(param_1 + 0xdc);
  if (((*(int *)(param_1 + 0x7c) != 0) && (*(int *)(param_1 + 0x80) == 0)) &&
     (iVar1 = fn_8236FDE0(*(undefined4 *)(param_1 + 0x54)), iVar1 != 0)) {
    fn_823807F0(*(undefined4 *)(*(int *)(param_1 + 0x58) + 0x664),0x18);
  }
  return;
}

