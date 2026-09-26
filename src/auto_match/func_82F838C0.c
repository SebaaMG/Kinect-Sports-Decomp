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
extern int fn_82F678E0();
extern int fn_82F6ACF0();
extern int fn_82F71CD0();
extern int fn_82F8399C();
extern int fn_82F839EC();
extern unsigned int lbl_8329F734;
extern unsigned int uStack_2c;


int fn_82F838C0(void)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uStack_2c;
  
  uStack_2c = 0;
  fn_82F71CD0(1);
  uVar2 = 0xffffffff8329f738;
  for (iVar3 = 0; iVar3 < *(int *)uVar2; iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(iVar3 * 4 + lbl_8329F734);
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0xc) & 0x83) != 0)) {
      fn_82F6ACF0(iVar3);
      iVar1 = *(int *)(iVar3 * 4 + lbl_8329F734);
      if (((*(uint *)(iVar1 + 0xc) & 0x83) != 0) && (*(int *)(iVar1 + 0x1c) != 0)) {
        fn_82F678E0();
        uStack_2c = uStack_2c + 1;
      }
      fn_82F839EC();
    }
  }
  fn_82F8399C();
  return uStack_2c;
}

