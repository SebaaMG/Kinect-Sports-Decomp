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
extern int fn_82D58908();


void fn_82D59268(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  lVar3 = 5;
  puVar1 = (undefined4 *)(param_2 + -4);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 400) * 0x14 + param_1 + 0x99c);
  do {
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  fn_82D58908(param_1,param_1 + 0x1a0,*(undefined4 *)(param_1 + 400),param_3,param_4,param_3,
                param_4,*(undefined4 *)(param_1 + 0x1e30));
  if (*(char *)(param_2 + 0x11) != '\0') {
    fn_82D58908(param_1,param_1 + 0x5a0,*(undefined4 *)(param_1 + 400),param_3,param_4,param_3,
                  param_4,*(undefined4 *)(param_1 + 0x1e34));
  }
  *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
  return;
}

