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
extern int fn_82CE3E48();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern unsigned int lbl_8323B468;
extern unsigned int uStack_228;
extern unsigned int uStack_22c;


void fn_82CE7C00(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 *puStack_230;
  uint uStack_22c;
  uint uStack_228;
  undefined1 auStack_224 [548];
  
  puStack_230 = auStack_224;
  uStack_22c = 0;
  lVar3 = 0;
  uStack_228 = 0x80000080;
  for (iVar2 = lbl_8323B468; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    iVar1 = fn_82CE5410();
    if (uStack_22c == (uStack_228 & 0x3fffffff)) {
      fn_82CE63B0(*(undefined4 *)(iVar1 + 0x10),&puStack_230,4);
    }
    *(int *)(puStack_230 + uStack_22c * 4) = iVar2;
    lVar3 = (ulonglong)uStack_22c + 1;
    uStack_22c = (uint)lVar3;
  }
  uVar4 = lVar3 - 1;
  if (-1 < (longlong)uVar4) {
    lVar3 = (uVar4 & 0x3fffffff) << 2;
    do {
      if (**(int **)(*(int *)(puStack_230 + (int)lVar3) + 0xc) != 0) {
        fn_82CE3E48();
        **(undefined4 **)(*(int *)(puStack_230 + (int)lVar3) + 0xc) = 0;
      }
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (longlong)uVar4);
  }
  iVar2 = fn_82CE5410();
  uStack_22c = 0;
  if ((uStack_228 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),puStack_230,uStack_228 & 0x3fffffff,4);
  }
  return;
}

