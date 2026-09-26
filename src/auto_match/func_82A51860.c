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
extern int fn_82A403E8();
extern int fn_82A40BA8();
extern int fn_82A47B28();
extern int fn_82A4F4E0();
extern int fn_82A51260();


void fn_82A51860(int param_1)

{
  int *piVar1;
  int iVar2;
  
  while( true ) {
    iVar2 = fn_82A40BA8(param_1 + 8);
    if (iVar2 == 0) break;
    for (piVar1 = *(int **)(*(int *)(iVar2 + 4) + 0x68);
        (piVar1 != (int *)0x0 && (*piVar1 != param_1)); piVar1 = (int *)piVar1[1]) {
    }
    fn_82A47B28(*(int *)(iVar2 + 4) + 0x50,piVar1);
    fn_82A403E8(*(undefined4 *)(param_1 + 0x30),**(undefined4 **)(iVar2 + 8));
    fn_82A51260(iVar2);
    fn_82A4F4E0(iVar2);
  }
  return;
}

