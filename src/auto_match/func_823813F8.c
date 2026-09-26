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
extern int fn_823737B8();
extern int fn_823814C0();
extern int fn_823815D0();
extern unsigned int lbl_831CB188;


void fn_823813F8(int param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                  int param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = fn_823737B8(*(undefined4 *)(param_1 + 4),param_4);
  if (param_6 == 0) {
    if (iVar1 != 0) goto LAB_8238145c;
    uVar2 = 4;
  }
  else {
    uVar2 = 5;
  }
  fn_823815D0(param_1,param_4,param_5,uVar2);
LAB_8238145c:
  if (param_2 == 0xc) {
    uVar2 = 2;
    param_3 = 0xffffffffffffffff;
  }
  else {
    iVar1 = fn_823814C0(param_1,param_4);
    if (*(int *)(&lbl_831CB188 + iVar1 * 0x10) == 0) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = 0x10;
    }
  }
  fn_823815D0(param_1,(int)param_4 == 0,param_3,uVar2);
  return;
}

