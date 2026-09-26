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
extern int fn_824B4288();
extern unsigned int lbl_8209A96C;
extern unsigned int lbl_8326183C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F4E760(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = lbl_8326183C;
  uVar1 = lbl_8209A96C;
  iVar3 = lbl_8326183C + 0x2c78;
  *(float *)(lbl_8326183C + 0x2d74) = (float)param_1;
  *(undefined4 *)(iVar2 + 0x2d70) = param_5;
  *(float *)(iVar2 + 0x2d7c) = (float)param_2;
  *(undefined4 *)(iVar2 + 0x2d78) = uVar1;
                    /* WARNING: Subroutine does not return */
  fn_824B4288(iVar3,0x1c);
}

