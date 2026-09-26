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
extern int fn_82CE5410();
extern int fn_82DAC350();


void fn_82DAC4A0(int param_1,int param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_2 + 0x10);
  cVar2 = *(char *)(param_3 + 0x10);
  iVar3 = fn_82CE5410();
  iVar3 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x80);
  *(undefined2 *)(iVar3 + 4) = 0x80;
  fn_82DAC350(iVar3,*(undefined4 *)(param_1 + 8),cVar1 + param_2,cVar2 + param_3);
  return;
}

