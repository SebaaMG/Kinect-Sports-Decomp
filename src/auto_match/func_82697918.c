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
extern int fn_826944C8();
extern int fn_82694D08();
extern int fn_826959C8();
extern int fn_82696D38();
extern unsigned int iStack_1c;
extern unsigned int iStack_20;


void fn_82697918(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iStack_20;
  int iStack_1c;
  
  fn_82696D38(&iStack_20,param_1,param_2,0xffffffffffffffff,0);
  fn_82694D08(&iStack_1c,&iStack_20,param_3);
  lVar1 = (ulonglong)*(uint *)(iStack_20 + 8) - 1;
  *(int *)(iStack_20 + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_20);
  }
  fn_826959C8(param_1);
  *param_1 = 5;
  *(int *)(param_1 + 4) = iStack_1c;
  *(int *)(iStack_1c + 8) = *(int *)(iStack_1c + 8) + 1;
  lVar1 = (ulonglong)*(uint *)(iStack_1c + 8) - 1;
  *(int *)(iStack_1c + 8) = (int)lVar1;
  if (lVar1 == 0) {
    fn_826944C8(iStack_1c);
  }
  return;
}

