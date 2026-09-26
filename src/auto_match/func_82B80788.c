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
extern int fn_82B45880();
extern int fn_82F65AC0();
extern int fn_82F66A80();
extern int fn_82F672D8();
extern int fn_82F6A3F0();
extern int fn_82F6A4B0();
extern int fn_82F6DCE0();


void fn_82B80788(undefined8 param_1,char *param_2,int param_3,undefined8 param_4,int param_5)

{
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  char *pcVar4;
  char *apcStack_50 [20];
  
  iVar2 = fn_82B45880(param_1,param_4);
  fn_82F672D8(param_2,*(undefined4 *)(iVar2 + 0x18),param_3);
  param_2[param_3 + -1] = '\0';
  puVar3 = (undefined1 *)fn_82F6A4B0(param_2,0x5f);
  pcVar1 = param_2;
  if ((puVar3 != (undefined1 *)0x0) &&
     ((iVar2 = fn_82F65AC0(puVar3,0xffffffff820d3a94), iVar2 == 0 ||
      (iVar2 = fn_82F65AC0(puVar3,0xffffffff820d8938), iVar2 == 0)))) {
    *puVar3 = 0;
  }
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  do {
    pcVar1 = pcVar4;
    if (pcVar1 <= param_2) break;
    iVar2 = fn_82F66A80(pcVar1[-1]);
    pcVar4 = pcVar1 + -1;
  } while (iVar2 != 0);
  iVar2 = fn_82F6A3F0(pcVar1,apcStack_50,10);
  if ((*apcStack_50[0] == '\0') && (iVar2 + param_5 != 0)) {
    fn_82F6DCE0(pcVar1,param_2 + (param_3 - (int)pcVar1),0xffffffff821c7f34);
    param_2[param_3 + -1] = '\0';
  }
  return;
}

