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
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_8308AF58();


void fn_8308C4D8(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = (ulonglong)*(uint *)(param_1 + 0xa4) - (ulonglong)*(uint *)(param_1 + 0xd0);
  iVar1 = fn_82CE5410();
  if ((int)(param_2[2] & 0x3fffffff) < (int)lVar4) {
    fn_82CE6310(*(undefined4 *)(iVar1 + 0x10),param_2,lVar4,0x20);
  }
  iVar1 = 0;
  param_2[1] = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xd0);
  if (0 < *(int *)(param_1 + 0xa4)) {
    lVar4 = 0;
    iVar3 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0xa0) + iVar3;
      if ((*(uint *)(iVar2 + 0xc) & 1) == 0) {
        fn_8308AF58(param_1,iVar2,lVar4 + (ulonglong)*param_2);
        lVar4 = lVar4 + 0x20;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar1 < *(int *)(param_1 + 0xa4));
  }
  return;
}

