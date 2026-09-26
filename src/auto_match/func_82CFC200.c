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
extern unsigned int *auStack_50;
extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CE5430();
extern int fn_82F672D8();


int fn_82CFC200(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 auStack_50 [80];
  
  fn_82CE5430(auStack_50);
  iVar2 = fn_82CE5410();
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar3 + (-1 - (int)param_1);
  if ((int)param_2 < (int)(pcVar3 + (-1 - (int)param_1))) {
    pcVar4 = param_2;
  }
  iVar2 = fn_82CE52E0(*(undefined4 *)(iVar2 + 0x10),pcVar4 + 1);
  if (pcVar4 != (char *)0x0) {
    fn_82F672D8(iVar2,param_1,pcVar4);
  }
  pcVar4[iVar2] = '\0';
  return iVar2;
}

