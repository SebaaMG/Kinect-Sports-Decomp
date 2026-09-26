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
extern unsigned int *auStack_4e;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FF8938();
extern int fn_83015888();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E8;
extern unsigned int lbl_83264300;
extern unsigned int uStack_4f;


undefined8 fn_82FF9848(longlong param_1,int param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  char cStack_50;
  undefined1 uStack_4f;
  ushort auStack_4e [39];
  
  if (lbl_832642E8 == 0) {
    uVar1 = 2;
  }
  else if (param_2 == 0) {
LAB_82ff99ac:
    uVar1 = 2;
  }
  else {
    lVar3 = 0;
    param_1 = param_1 + 4;
    iVar4 = 0;
    do {
      iVar5 = 0;
      do {
        uVar1 = fn_82FF8938(param_1,&cStack_50,1);
        if ((int)uVar1 != 1) {
          return uVar1;
        }
        *(char *)(iVar4 + lbl_83264300 + iVar5 + 0x95) = '\x01' - (cStack_50 == '\0');
        uVar1 = fn_82FF8938(param_1,&uStack_4f,1);
        if ((int)uVar1 != 1) {
          return uVar1;
        }
        uVar1 = fn_82FF8938(param_1,auStack_4e,2);
        if ((int)uVar1 != 1) {
          return uVar1;
        }
        uVar2 = fn_82FA5060(lbl_831BC768,(ulonglong)auStack_4e[0] * 0xc);
        if ((uVar2 & 0xffffffff) == 0) goto LAB_82ff99ac;
        uVar1 = fn_82FF8938(param_1,uVar2,(ulonglong)auStack_4e[0] * 0xc);
        if ((int)uVar1 == 1) {
          fn_83015888(lbl_83264300,lVar3,iVar5,auStack_4e[0],uVar2,uStack_4f);
        }
        fn_82FA5190(lbl_831BC768,uVar2);
        if ((int)uVar1 != 1) {
          return uVar1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 2);
      iVar4 = iVar4 + 2;
      lVar3 = lVar3 + 1;
    } while (iVar4 < 4);
  }
  return uVar1;
}

