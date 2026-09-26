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


void fn_82826130(int param_1,undefined8 param_2,code *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = '\x01';
  lVar4 = (longlong)(((*(int **)(param_1 + 0xc))[1] - **(int **)(param_1 + 0xc)) / 0xc) + -1;
  if (-1 < lVar4) {
    lVar3 = lVar4 * 0xc;
    do {
      if (cVar2 == '\0') {
        return;
      }
      puVar1 = (undefined4 *)(**(int **)(param_1 + 0xc) + (int)lVar3);
      cVar2 = (*param_3)(param_1,*puVar1,puVar1[1],param_2);
      lVar4 = lVar4 + -1;
      lVar3 = lVar3 + -0xc;
    } while (-1 < lVar4);
  }
  return;
}

