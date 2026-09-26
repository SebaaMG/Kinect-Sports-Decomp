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
extern int fn_8246BAF8();
extern int fn_8251FA58();
extern int fn_8265CA20();


int fn_8246D108(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar4 = (undefined4 *)(param_1 + 4);
  lVar3 = 2;
  do {
    puVar2 = (undefined4 *)*puVar4;
    for (puVar1 = (undefined4 *)*puVar2; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[3] != 0) {
        fn_8251FA58();
        puVar1[3] = 0;
      }
      if (puVar1[5] != 0) {
        fn_8251FA58();
        puVar1[5] = 0;
      }
      if (puVar1[7] != 0) {
        fn_8251FA58();
        puVar1[7] = 0;
      }
      puVar2 = (undefined4 *)*puVar4;
    }
    lVar3 = lVar3 + -1;
    puVar4 = puVar4 + 5;
  } while (lVar3 != 0);
  iVar5 = param_1 + 0x28;
  lVar3 = 1;
  do {
    iVar5 = iVar5 + -0x14;
    fn_8246BAF8(iVar5);
    lVar3 = lVar3 + -1;
  } while (-1 < lVar3);
  fn_8265CA20(param_1);
  return param_1;
}

