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
extern int fn_8285A498();
extern int fn_828628F8();
extern unsigned int lbl_8321132C;
extern unsigned int lbl_83211330;


void fn_8285A768(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0) {
    return;
  }
  lbl_83211330 = *(undefined4 *)(iVar1 + 0x34);
  lbl_8321132C = 0;
  if (*(int *)(iVar1 + 0x44) != 0) {
    lbl_8321132C = *(undefined4 *)(*(int *)(iVar1 + 0x44) + 0x44);
  }
  fn_8285A498(lbl_83211330,param_2,param_3);
  if (*(int *)(iVar1 + 0x44) != 0) {
    fn_828628F8(*(int *)(iVar1 + 0x44),param_2,param_3);
  }
  return;
}

