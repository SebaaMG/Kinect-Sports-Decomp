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
extern int fn_82F68CC0();
extern int fn_82F6E1C8();
extern int fn_82F861E0();


undefined8
fn_82F7DD38(int param_1,int *param_2,int *param_3,undefined8 param_4,undefined4 *param_5)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = *param_2;
  if (param_1 == iVar2) {
    if (*param_3 == (int)param_4) {
      iVar2 = fn_82F6E1C8(iVar2,2);
      *param_3 = iVar2;
      if (iVar2 != 0) {
        *param_5 = 1;
        fn_82F68CC0(*param_3,param_4,*param_2);
LAB_82f7ddc0:
        *param_2 = *param_2 << 1;
        goto LAB_82f7ddcc;
      }
    }
    else {
      iVar2 = fn_82F861E0(*param_3,iVar2,2);
      if (iVar2 != 0) {
        *param_3 = iVar2;
        goto LAB_82f7ddc0;
      }
    }
    uVar1 = 0;
  }
  else {
LAB_82f7ddcc:
    uVar1 = 1;
  }
  return uVar1;
}

