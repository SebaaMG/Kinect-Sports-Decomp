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
extern unsigned int *auStack_234;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int uStack_238;
extern unsigned int uStack_23c;


void fn_82D35308(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puStack_240;
  uint uStack_23c;
  uint uStack_238;
  undefined1 auStack_234 [564];
  
  if (param_2 != 0) {
    puStack_240 = auStack_234;
    uStack_23c = 0;
    uStack_238 = 0x80000080;
    while( true ) {
      while( true ) {
        if ((*(uint *)(param_2 + 0x28) & 0x80000000) != 0) break;
        param_2 = *(int *)(param_2 + 0x20) * 0x30 + *(int *)(param_1 + 0x1c);
        if (*(int *)(param_2 + 0x2c) == 0x7fffffff) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_2 + 0x2c) * 0x30 + *(int *)(param_1 + 0x1c);
        }
        iVar1 = fn_82CE5410();
        if (uStack_23c == (uStack_238 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),&puStack_240,4);
        }
        *(int *)(puStack_240 + uStack_23c * 4) = iVar2;
        uStack_23c = uStack_23c + 1;
      }
      if (uStack_23c == 0) break;
      iVar2 = uStack_23c * 4;
      uStack_23c = uStack_23c - 1;
      param_2 = *(int *)(puStack_240 + iVar2 + -4);
    }
    iVar2 = fn_82CE5410();
    uStack_23c = 0;
    if ((uStack_238 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
                (*(int **)(iVar2 + 0x10),puStack_240,uStack_238 & 0x3fffffff,4);
    }
  }
  return;
}

