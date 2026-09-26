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


void fn_82AABFE0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar4;
  longlong lVar3;
  
  iVar2 = (int)param_1;
  if (*(int *)(*(int *)(iVar2 + 0xe0) + 0x30) != 0) {
    iVar4 = 100;
    do {
      iVar1 = *(int *)(iVar4 + *(int *)(iVar2 + 0xe0));
      if (iVar1 != 0) {
        fn_8265C990(iVar1,0x24870000);
      }
      iVar4 = iVar4 + -4;
    } while (0x5b < iVar4);
  }
  fn_8265C990(*(undefined4 *)(iVar2 + 0x6c),0x24870000);
  fn_8265C990(*(undefined4 *)(iVar2 + 0xcc),0x24870000);
  fn_8265C990(*(undefined4 *)(iVar2 + 200),0x24870000);
  lVar3 = (ulonglong)*(ushort *)(iVar2 + 0x5c) - 1;
  if (-1 < lVar3) {
    param_1 = ((ulonglong)*(ushort *)(iVar2 + 0x5c) + 0x1f) * 4 + param_1;
    do {
      param_1 = param_1 + -4;
      fn_8265C990(*(undefined4 *)param_1,0x24870000);
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  fn_8265C990(*(undefined4 *)(iVar2 + 0x74),0x24870000);
  fn_8265C990(*(undefined4 *)(iVar2 + 0x70),0x24870000);
  if (*(int *)(*(int *)(iVar2 + 0xe0) + 0x38) != 0) {
    fn_8265C990(*(undefined4 *)(iVar2 + 0xc4),0x24870000);
  }
  fn_8265C990(*(undefined4 *)(iVar2 + 0xc0),0x24870000);
  return;
}

