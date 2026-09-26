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
extern int fn_82528EE0();
extern int fn_82F64988();
extern unsigned int lbl_832765BC;


void fn_8235A590(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (lbl_832765BC == 0) {
    fn_82528EE0(param_2,param_3,0xffffffff821b2618,param_1);
    iVar1 = 0;
  }
  else {
    lVar2 = 0;
    iVar1 = 0x10;
    do {
      if (*(int *)(iVar1 + *(int *)(lbl_832765BC + 0x28)) == (int)param_1) goto code_r0x8235a5f0;
      iVar1 = iVar1 + 4;
      lVar2 = lVar2 + 1;
    } while (iVar1 < 0x18);
    lVar2 = -1;
code_r0x8235a5f0:
    fn_82F64988(param_2,param_3,(ulonglong)*(uint *)(lbl_832765BC + 0x3c) + lVar2 * 0x11c + 8)
    ;
    iVar1 = ((uint)LZCOUNT((int)lVar2) >> 5 ^ 1) + 1;
  }
  *param_4 = iVar1;
  return;
}

