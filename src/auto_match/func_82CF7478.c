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
extern int fn_82CF6C78();
extern unsigned int lbl_821327E4;


void fn_82CF7478(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  puVar3 = param_1 + 2;
  *param_1 = &lbl_821327E4;
  uVar2 = 0;
  lVar4 = 0x11;
  do {
    puVar3[1] = 0;
    puVar3 = puVar3 + 2;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  iVar1 = fn_82CF6C78();
  if (param_2 != 0) {
    *(int *)(iVar1 + 4) = param_2;
    *(undefined4 *)(iVar1 + 8) = 8;
    return;
  }
  *(undefined4 *)(iVar1 + 4) = uVar2;
  return;
}

