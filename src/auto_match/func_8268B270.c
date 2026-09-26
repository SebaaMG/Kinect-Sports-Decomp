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
extern int fn_8268B050();
extern int fn_826BD7D0();
extern int fn_82F63CA0();
extern int fn_82F68CC0();


void fn_8268B270(int *param_1,char *param_2,int param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = param_1[1];
  pcVar3 = param_2;
  if ((int)param_4 < 0) {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    param_4 = pcVar3 + (-1 - (int)param_2);
  }
  if (*(char *)(param_1 + 4) == '\0') {
    param_3 = fn_826BD7D0(param_3,*param_1,0xffffffffffffffff);
  }
  pcVar3 = param_4 + iVar2;
  fn_8268B050(param_1,pcVar3);
  fn_82F63CA0(param_4 + *param_1 + param_3,*param_1 + param_3,(iVar2 - param_3) + 1);
  fn_82F68CC0(*param_1 + param_3,param_2,param_4);
  param_1[1] = (int)pcVar3;
  *(undefined1 *)(param_1 + 4) = 0;
  pcVar3[*param_1] = '\0';
  return;
}

