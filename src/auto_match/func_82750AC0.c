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
extern int fn_826824B0();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_82696BC8();
extern int fn_826B32D0();


void fn_82750AC0(int param_1)

{
  char cVar2;
  int iVar1;
  int iVar3;
  
  cVar2 = fn_82695468(param_1,0x27);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff8200edec,0,0);
  }
  else {
    iVar3 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = 0;
    }
    if (iVar3 != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x78);
      iVar1 = fn_826B32D0(*(int *)(param_1 + 0x18),*(undefined4 *)(iVar1 + 0x29c),iVar1 + 0xa4
                                ,0,0xffffffffffffffff);
      *(undefined1 *)(iVar1 + 0x30) = *(undefined1 *)(iVar3 + 0x30);
      *(undefined1 *)(iVar1 + 0x31) = *(undefined1 *)(iVar3 + 0x31);
      *(undefined1 *)(iVar1 + 0x32) = *(undefined1 *)(iVar3 + 0x32);
      *(undefined1 *)(iVar1 + 0x33) = *(undefined1 *)(iVar3 + 0x33);
      *(undefined2 *)(iVar1 + 0x34) = *(undefined2 *)(iVar3 + 0x34);
      *(undefined2 *)(iVar1 + 0x36) = *(undefined2 *)(iVar3 + 0x36);
      *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(iVar3 + 0x38);
      fn_82696BC8(*(undefined4 *)(param_1 + 4),iVar1);
      if (iVar1 != 0) {
        fn_826824B0(iVar1);
      }
    }
  }
  return;
}

