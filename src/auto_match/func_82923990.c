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
extern int fn_82920CF0();
extern int fn_82920E80();
extern int fn_82920FB8();
extern int fn_82921208();
extern int fn_82921428();
extern int fn_829218D0();
extern int fn_82921E70();
extern int fn_829221D0();
extern int fn_82922A88();
extern int fn_82923268();
extern int fn_82924FA0();
extern int fn_8292F660();


longlong fn_82923990(int *param_1,int param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar3;
  longlong lVar2;
  
  param_1[2] = param_4;
  *param_1 = 0;
  param_1[1] = 0;
  if ((((param_4 & 0xffff) == 0) || (5 < (param_4 & 0xffff))) || ((param_4 & 0xff800000) != 0)) {
    return -0x7789f794;
  }
  *(uint *)(param_3 + 0x48) = param_4 & 0x200000;
  *(uint *)(param_2 + 0x48) = param_4 & 0x400000;
  *(uint *)(param_2 + 0x40) = param_4 & 0x80000;
  *(uint *)(param_2 + 0x44) = param_4 & 0x100000;
  iVar3 = fn_8292F660(param_2);
  param_1[1] = iVar3;
  if (iVar3 != 0) {
    lVar2 = fn_8292F660(param_3);
    *param_1 = (int)lVar2;
    if (lVar2 != 0) {
      lVar2 = fn_82924FA0(param_1[1]);
      if (lVar2 < 0) goto LAB_82923ad4;
      iVar3 = fn_82920CF0(param_1);
      if ((((-1 < iVar3) || (iVar3 = fn_82920E80(param_1), -1 < iVar3)) ||
          ((iVar3 = fn_82920FB8(param_1), -1 < iVar3 ||
           ((iVar3 = fn_82921208(param_1), -1 < iVar3 ||
            (iVar3 = fn_82921428(param_1), -1 < iVar3)))))) ||
         ((iVar3 = fn_829218D0(param_1), -1 < iVar3 ||
          ((((iVar3 = fn_82921E70(param_1), -1 < iVar3 ||
             (iVar3 = fn_829221D0(param_1), -1 < iVar3)) ||
            (iVar3 = fn_82923268(param_1), -1 < iVar3)) ||
           (iVar3 = fn_82922A88(param_1), -1 < iVar3)))))) {
        lVar2 = 0;
        goto LAB_82923ad4;
      }
    }
  }
  lVar2 = -0x7fffbffb;
LAB_82923ad4:
  puVar1 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[1] = 0;
  }
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return lVar2;
}

