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
extern int fn_82FFE1C8();


undefined4 * fn_82FFE470(undefined4 *param_1,int param_2)

{
  char cVar2;
  undefined4 *puVar1;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  cVar2 = fn_82FFE1C8();
  if (cVar2 == '\0') {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    if ((undefined4 *)param_1[1] == (undefined4 *)0x0) {
      *param_1 = param_1[2];
    }
    else {
      *(undefined4 *)param_1[1] = param_1[2];
    }
    puVar1 = (undefined4 *)param_1[2];
    puVar4 = (undefined4 *)(param_2 + -4);
    param_1[1] = puVar1;
    lVar5 = 9;
    param_1[2] = *puVar1;
    *puVar1 = 0;
    puVar3 = (undefined4 *)param_1[1];
    puVar1 = puVar3 + 1;
    param_1[5] = param_1[5] + 1;
    do {
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return puVar1;
}

