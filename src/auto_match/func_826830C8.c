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
extern unsigned int *auStack_40;
extern int fn_826824B0();
extern int fn_82682D30();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_826B32D0();


void fn_826830C8(int param_1,undefined8 param_2)

{
  int iVar2;
  ulonglong uVar1;
  undefined1 auStack_40 [64];
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x68) + 0x5c))();
  uVar1 = fn_826B32D0(iVar2,*(undefined4 *)(*(int *)(iVar2 + 0x78) + 0x2a0),
                            *(int *)(iVar2 + 0x78) + 0x10,0,0xffffffffffffffff);
  fn_826961B0(auStack_40,uVar1);
  fn_82682D30(param_1,iVar2,auStack_40,param_2);
  fn_82696330(auStack_40);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_826824B0(uVar1);
  }
  return;
}

