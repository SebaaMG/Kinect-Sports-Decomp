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
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_70;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82230110();
extern int fn_822315A0();
extern int fn_822DF348();
extern int fn_822E0BE8();
extern int fn_82365BD8();
extern float lbl_821954D4;
extern unsigned int lbl_821ADB88;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


undefined4 fn_822E0880(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 auStack_70 [2];
  longlong lStack_68;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [64];
  
  auStack_70[0] = 0;
  uVar1 = fn_82365BD8(auStack_58);
  iVar3 = fn_822E0BE8(param_1,uVar1,0xb,&fStack_5c,&fStack_60,&lStack_68,0,auStack_70);
  if (iVar3 != 0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar3 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_821954D4);
    lStack_68 = (longlong)iVar3;
    iVar3 = *(int *)(&lbl_821ADB88 + iVar3 * -4);
    if (iVar3 < 0x18) {
      uVar1 = fn_82230110(auStack_50,0xffffffff82196582);
      uVar2 = fn_82365BD8(auStack_58,param_2);
      fn_822DF348((double)fStack_60,(double)fStack_5c,param_1,uVar2,uVar1,iVar3);
    }
  }
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return auStack_70[0];
}

