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
extern int fn_82FAAF98();
extern unsigned int lbl_83264234;
extern unsigned int uStack_40;


longlong fn_82FA73C8(undefined8 param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uStack_40;
  undefined4 auStack_3c [15];
  
  lVar3 = 0;
  *param_2 = 0;
  for (iVar1 = lbl_83264234; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
    if (((*(byte *)(iVar1 + 0x34) & 0x80) != 0) &&
       ((lVar2 = fn_82FAAF98(*(undefined4 *)(iVar1 + 0x38),param_1,auStack_3c,&uStack_40),
        *param_2 == 0 || ((int)lVar2 < (int)lVar3)))) {
      *param_3 = uStack_40;
      *param_4 = auStack_3c[0];
      *param_2 = iVar1;
      lVar3 = lVar2;
    }
  }
  return lVar3 + -0x400;
}

