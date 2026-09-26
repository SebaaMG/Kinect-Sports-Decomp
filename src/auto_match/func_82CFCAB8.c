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
extern int fn_82F68CC0();


int * fn_82CFCAB8(int *param_1,undefined4 *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2[1] + -1;
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar5 = ((int)pcVar3 - (int)param_3) + iVar4;
  iVar2 = fn_82CE5410();
  iVar2 = (**(code **)(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),iVar5);
  fn_82F68CC0(iVar2,*param_2,iVar4);
  fn_82F68CC0(iVar2 + iVar4,param_3,(int)pcVar3 - (int)param_3);
  *param_1 = iVar2;
  param_1[1] = iVar5;
  param_1[2] = iVar5;
  return param_1;
}

