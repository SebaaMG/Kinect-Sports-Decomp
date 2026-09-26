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
extern int fn_82FA76F0();
extern int fn_82FE6A90();


void fn_82FA78F8(ulonglong param_1,int *param_2)

{
  int iVar1;
  
  fn_82FE6A90(param_1,*(undefined4 *)(*param_2 + 8),0,1);
  *(uint *)(*param_2 + 0xc) = *(uint *)(*param_2 + 0xc) | 0x80000000;
  *(uint *)(*param_2 + 0xc) = *(uint *)(*param_2 + 0xc) & 0xbfffffff;
  iVar1 = *param_2;
  while (iVar1 != 0) {
    iVar1 = *param_2;
    if ((ulonglong)*(uint *)(iVar1 + 4) == (param_1 & 0xffffffff)) {
      *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) | 0x80000000;
    }
    iVar1 = *(int *)*param_2;
    *param_2 = iVar1;
  }
  fn_82FA76F0();
  return;
}

