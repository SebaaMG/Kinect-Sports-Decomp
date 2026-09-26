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
extern unsigned int *auStack_2f;
extern int fn_82CE6150();
extern unsigned int lbl_82006848;
extern unsigned int uStack_30;


undefined1 * fn_82D93B58(undefined1 *param_1,int param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  double dVar3;
  undefined1 uStack_30;
  undefined1 auStack_2f [23];
  
  dVar3 = (double)lbl_82006848;
  pcVar1 = (char *)fn_82CE6150(dVar3,&uStack_30,param_2 + 0x20);
  if (((*pcVar1 == '\0') ||
      (pcVar1 = (char *)fn_82CE6150(dVar3,auStack_2f,param_2 + 0x60), *pcVar1 == '\0')) ||
     ((*(char *)(param_2 + 0xa2) != '\0' && (*(char *)(param_2 + 0xc2) == '\0')))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *param_1 = uVar2;
  return param_1;
}

