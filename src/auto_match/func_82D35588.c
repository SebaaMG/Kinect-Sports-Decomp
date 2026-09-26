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
extern unsigned int *auStack_224;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int uStack_228;
extern unsigned int uStack_22c;


void fn_82D35588(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puStack_230;
  uint uStack_22c;
  uint uStack_228;
  undefined1 auStack_224 [548];
  
  if (param_2 != 0) {
    puStack_230 = auStack_224;
    uStack_22c = 0;
    uStack_228 = 0x80000080;
    while( true ) {
      while( true ) {
        if ((*(ushort *)(param_2 + 0x10) & 0x8000) != 0) break;
        param_2 = (uint)*(ushort *)(param_2 + 0xc) * 0x14 + *(int *)(param_1 + 0x1c);
        if (*(ushort *)(param_2 + 0x12) == 0x7fff) {
          iVar2 = 0;
        }
        else {
          iVar2 = (uint)*(ushort *)(param_2 + 0x12) * 0x14 + *(int *)(param_1 + 0x1c);
        }
        iVar1 = fn_82CE5410();
        if (uStack_22c == (uStack_228 & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),&puStack_230,4);
        }
        *(int *)(puStack_230 + uStack_22c * 4) = iVar2;
        uStack_22c = uStack_22c + 1;
      }
      if (uStack_22c == 0) break;
      iVar2 = uStack_22c * 4;
      uStack_22c = uStack_22c - 1;
      param_2 = *(int *)(puStack_230 + iVar2 + -4);
    }
    iVar2 = fn_82CE5410();
    uStack_22c = 0;
    if ((uStack_228 & 0x80000000) == 0) {
      (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
                (*(int **)(iVar2 + 0x10),puStack_230,uStack_228 & 0x3fffffff,4);
    }
  }
  return;
}

