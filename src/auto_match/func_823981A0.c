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
extern unsigned int *auStack_2c;
extern int fn_82359200();
extern int fn_82359558();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_30;


void fn_823981A0(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  if ((param_1[0x28] == 0) || (*(int *)(param_1[0x28] + 0x40) != 1)) {
    auStack_2c[0] = 0;
    uStack_30 = 0;
    iVar1 = (**(code **)(*param_1 + 0x70))(param_1,auStack_2c,&uStack_30);
    if (0 < iVar1) {
                    /* WARNING: Subroutine does not return */
      fn_82359558((double)lbl_821CC160,param_1,uStack_30);
    }
  }
  else {
    fn_82359200((double)lbl_821CC160,param_1,param_2,param_2);
  }
  return;
}

