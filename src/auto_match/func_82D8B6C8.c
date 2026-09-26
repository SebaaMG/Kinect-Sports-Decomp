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
extern unsigned int *auStack_20;
extern int fn_82D80C48();
extern int fn_82D929B0();
extern int fn_82DACE50();
extern int fn_82DADA58();
extern unsigned int iStack_1c;
extern unsigned int uStack_16;
extern unsigned int uStack_17;
extern unsigned int uStack_18;


void fn_82D8B6C8(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 auStack_20 [4];
  int iStack_1c;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x94) != 0)) {
    auStack_20[0] = 4;
    iStack_1c = param_1;
    uStack_18 = param_2;
    uStack_17 = param_3;
    uStack_16 = param_4;
    fn_82D80C48(iVar1,auStack_20);
    return;
  }
  fn_82D929B0(param_1);
  if (*(int *)(param_1 + 8) != 0) {
    fn_82DADA58(*(int *)(param_1 + 8),param_1);
  }
  fn_82DACE50(param_1);
  return;
}

