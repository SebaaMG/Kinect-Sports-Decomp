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
extern int fn_827C5308();
extern int fn_827C5390();
extern int fn_827C53D8();


void fn_827C5538(int *param_1,int param_2,char param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_3 == '\0') {
    iVar2 = param_2 + 0x16;
  }
  else {
    iVar2 = param_2 + 0x1a;
    param_2 = param_2 + 0x10;
  }
  iVar2 = param_1[iVar2];
  if (iVar2 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x32;
    *(int *)(*param_1 + 0x18) = param_2;
    (**(code **)*param_1)(param_1);
  }
  if (*(char *)(iVar2 + 0x111) == '\0') {
    fn_827C5390(param_1,0xc4);
    lVar4 = 0;
    iVar3 = 1;
    lVar5 = 0x10;
    do {
      pbVar1 = (byte *)(iVar3 + iVar2);
      iVar3 = iVar3 + 1;
      lVar4 = (ulonglong)*pbVar1 + lVar4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    fn_827C53D8(param_1,lVar4 + 0x13);
    fn_827C5308(param_1,param_2);
    iVar3 = 1;
    do {
      fn_827C5308(param_1,*(undefined1 *)(iVar3 + iVar2));
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x11);
    iVar3 = 0;
    if (0 < (int)lVar4) {
      do {
        fn_827C5308(param_1,*(undefined1 *)(iVar2 + 0x11 + iVar3));
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)lVar4);
    }
    *(undefined1 *)(iVar2 + 0x111) = 1;
  }
  return;
}

