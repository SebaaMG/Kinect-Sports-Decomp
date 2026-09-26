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
extern int fn_827C1AF8();


void fn_827CA390(int param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  param_4 = (undefined4 *)*param_4;
  lVar5 = 0;
  puVar6 = param_4;
  if (0 < *(int *)(param_1 + 0x114)) {
    do {
      puVar4 = (undefined1 *)*puVar6;
      puVar3 = puVar4 + *(int *)(param_1 + 0x5c);
      if (puVar4 < puVar3) {
        puVar2 = (undefined1 *)(*param_3 + -1);
        do {
          puVar2 = puVar2 + 1;
          uVar1 = *puVar2;
          *puVar4 = uVar1;
          puVar4[1] = uVar1;
          puVar4 = puVar4 + 2;
        } while (puVar4 < puVar3);
      }
      fn_827C1AF8(param_4,lVar5,param_4,lVar5 + 1,1,*(undefined4 *)(param_1 + 0x5c));
      lVar5 = lVar5 + 2;
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 2;
    } while ((int)lVar5 < *(int *)(param_1 + 0x114));
  }
  return;
}

