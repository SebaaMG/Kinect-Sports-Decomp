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
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_8269A1F0();
extern int fn_826A2F80();


void fn_826A3460(int param_1)

{
  char cVar2;
  undefined8 uVar1;
  int iVar3;
  longlong lVar4;
  
  cVar2 = fn_82695468(param_1,7);
  if (cVar2 == '\0') {
    fn_826954C0(param_1,0xffffffff82006e38,0,0);
  }
  else {
    iVar3 = *(int *)(param_1 + 8) + -0x10;
    if (*(int *)(param_1 + 8) == 0) {
      iVar3 = 0;
    }
    lVar4 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      do {
        uVar1 = fn_826957D0(param_1,lVar4);
        fn_826A2F80(iVar3,uVar1);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(param_1 + 0x1c));
    }
    fn_8269A1F0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar3 + 0x38));
  }
  return;
}

