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
extern unsigned int *auStack_3c;
extern int fn_82826AB0();
extern int fn_8282D0E0();
extern int fn_82F672D8();
extern unsigned int iStack00000014;
extern unsigned int iStack_40;
extern unsigned int stack0x00000014;


void fn_82827140(int param_1,undefined8 param_2,undefined1 *param_3,uint param_4,
                  undefined1 *param_5,ulonglong param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iStack00000014;
  int iStack_40;
  undefined1 auStack_3c [60];
  
  iStack00000014 = param_1;
  fn_8282D0E0(*(undefined4 *)(param_1 + 0xcc),3,&stack0x00000014);
  fn_82826AB0(iStack00000014,param_2,&iStack_40,auStack_3c);
  iVar2 = 0;
  while (*(char *)(iVar2 + iStack_40) != '\0') {
    iVar2 = iVar2 + 1;
    if (0xff < iVar2) {
      *param_3 = 0;
      return;
    }
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      cVar1 = *(char *)(iVar4 + iStack_40);
      if (((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) {
        *param_3 = 0;
        goto LAB_82827280;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  uVar3 = iVar2 + 1U;
  if (param_4 < iVar2 + 1U) {
    uVar3 = param_4;
  }
  fn_82F672D8(param_3,iStack_40,uVar3);
  iVar4 = 0;
  iVar2 = iVar2 + iStack_40 + 1;
  while (((cVar1 = *(char *)(iVar2 + iVar4), '/' < cVar1 && (cVar1 < ':')) ||
         ((cVar1 == '.' && (((iVar4 == 2 || (iVar4 == 5)) || (iVar4 == 8))))))) {
    iVar4 = iVar4 + 1;
    if (0xc < iVar4) {
      if (0xd < (param_6 & 0xffffffff)) {
        param_6 = 0xe;
      }
      fn_82F672D8(param_5,iVar2,param_6);
      return;
    }
  }
LAB_82827280:
  *param_5 = 0;
  return;
}

