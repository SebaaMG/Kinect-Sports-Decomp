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
extern int fn_82230360();
extern int fn_82F64020();


undefined1 * fn_828EFE38(undefined1 *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  char acStack_140 [16];
  char acStack_130 [304];
  
  fn_82F64020(acStack_130,0x100,0xffffffff821c7f30);
  uVar5 = 0;
  do {
    fn_82F64020(acStack_140,8,0xffffffff82027618,*(undefined1 *)(uVar5 + param_2));
    pcVar2 = acStack_140;
    pcVar4 = acStack_130;
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  pcVar4 = acStack_130;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  fn_82230360(param_1,acStack_130,pcVar4 + (-1 - (int)acStack_130));
  return param_1;
}

