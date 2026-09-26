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
extern unsigned int *auStack_60;
extern int fn_82554860();
extern int fn_8255FD70();
extern int fn_8255FEE8();
extern int fn_8265CA20();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_70;


void fn_824C7510(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uStack_70;
  undefined1 auStack_60 [72];
  
  fn_8255FD70(&uStack_70,*(undefined4 *)(param_1 + 0x1c8),param_2);
  iVar3 = (((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar1 = (int)((float)(longlong)((((U64)(uStack_70) >> 32) & 0xFFFFFFFF) - (((U64)(uStack_70) >> 0) & 0xFFFFFFFF) >> 2) *
               ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
  puVar2 = (undefined4 *)(iVar1 * 4 + (((U64)(uStack_70) >> 0) & 0xFFFFFFFF));
  uStack_70 = (longlong)iVar1;
  lVar4 = fn_8255FEE8((double)lbl_82192734,*puVar2,auStack_60,0);
  fn_82554860(param_1 + 4,0,lVar4 + 0x40,auStack_60);
  if (iVar3 != 0) {
    fn_8265CA20(iVar3);
  }
  return;
}

