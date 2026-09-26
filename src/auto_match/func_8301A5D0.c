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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


undefined4 fn_8301A5D0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar1 = param_1[2];
  iVar4 = fn_82FA5060(lbl_831BC768,(param_2 + iVar1) * 4);
  uVar3 = 0;
  if (iVar4 != 0) {
    iVar2 = param_1[1] - *param_1 >> 2;
    lVar6 = (longlong)iVar2;
    if (*param_1 != 0) {
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          *(undefined4 *)(iVar5 + iVar4) = *(undefined4 *)(iVar5 + *param_1);
          iVar5 = iVar5 + 4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      fn_82FA5190(lbl_831BC768,*param_1);
    }
    *param_1 = iVar4;
    param_1[2] = param_2 + iVar1;
    uVar3 = 1;
    param_1[1] = iVar2 * 4 + iVar4;
  }
  return uVar3;
}

