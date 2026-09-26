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
extern int fn_8267BE38();
extern int fn_82796410();


void fn_82797C88(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  bool bVar2;
  
  (**(code **)(*param_1 + 0x14))(param_1,param_3);
  fn_8267BE38(*param_3);
  bVar2 = false;
  *param_3 = 0;
  param_3[2] = 0;
  param_3[1] = 0;
  iVar1 = *param_2;
  if (((iVar1 == 0) || (param_2[1] < 0)) || (*(int *)(iVar1 + 4) <= param_2[1])) {
    bVar2 = true;
  }
  if (!bVar2) {
    fn_82796410(iVar1,param_2[1]);
  }
  return;
}

