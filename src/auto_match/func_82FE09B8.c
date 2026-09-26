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
extern int fn_82FE3FB8();
extern int fn_82FE57F8();


void fn_82FE09B8(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  
  fn_82FE57F8((double)*(float *)(param_1 + 0x150),(double)*(float *)(param_1 + 0x154),param_2,
                  param_4,param_5,param_3,*(undefined4 *)(param_2 + 4));
  if ((*(char *)(param_1 + 0x170) != '\0') && (*(char *)(param_1 + 0xcc) != '\0')) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 0x28 + *(int *)(param_1 + 0xd8);
      if (*(int *)(iVar1 + 0x24) == 3) {
        fn_82FE3FB8(iVar1,param_3,param_4);
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < *(byte *)(param_1 + 0xcc));
  }
  return;
}

