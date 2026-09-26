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
extern int fn_822E5640();
extern int fn_822E5710();
extern int fn_822E57D8();
extern int fn_82397ED8();
extern int fn_82397F88();


void fn_822EFA58(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((*(int *)(*(int *)(param_1 + 0xc) + 0x24) == 0) ||
     (iVar1 = fn_82397F88(*(undefined4 *)(param_1 + 0x10)), iVar1 != 0)) {
    fn_822E5640(*(undefined4 *)(param_1 + 0xc));
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xc);
  if ((*(int *)(*(uint *)(param_1 + 0xc) + 0x24) == 0) &&
     (iVar1 = fn_82397ED8(*(undefined4 *)(param_1 + 0x10)), iVar1 == 0)) {
    fn_822E57D8(uVar2);
  }
  iVar1 = fn_82397F88(*(undefined4 *)(param_1 + 0x10));
  if ((iVar1 != 0) || (iVar1 = fn_82397ED8(*(undefined4 *)(param_1 + 0x10)), iVar1 != 0)) {
    fn_822E5710(*(undefined4 *)(param_1 + 0xc));
  }
  return;
}

