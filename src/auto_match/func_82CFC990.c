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
extern int fn_82CE6310();
extern int fn_82F68CC0();


int * fn_82CFC990(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1[1];
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar5 = ((int)pcVar4 - (int)param_2) + iVar2 + -1;
  iVar3 = fn_82CE5410();
  if ((int)(param_1[2] & 0x3fffffffU) < iVar5) {
    iVar6 = (param_1[2] & 0x3fffffffU) << 1;
    if (iVar6 <= iVar5) {
      iVar6 = iVar5;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1,iVar6,1);
  }
  param_1[1] = iVar5;
  fn_82F68CC0(*param_1 + iVar2 + -1,param_2,(int)pcVar4 - (int)param_2);
  return param_1;
}

