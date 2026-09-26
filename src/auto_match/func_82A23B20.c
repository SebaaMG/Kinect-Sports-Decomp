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
extern unsigned int *auStack_70;
extern int fn_82A236C8();
extern int fn_82F664B0();
extern int fn_82F668D8();
extern int fn_82F69A80();
extern unsigned int lbl_83219B94;


void fn_82A23B20(int param_1,int param_2,undefined1 *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint auStack_70 [4];
  char acStack_60 [96];
  
  if (lbl_83219B94 != 0) {
    RtlEnterCriticalSection();
  }
  pcVar2 = (char *)fn_82A236C8(param_1,auStack_70);
  pcVar1 = pcVar2 + auStack_70[0];
  do {
    pcVar3 = pcVar1 + -1;
    pcVar4 = pcVar3;
    if ((pcVar3 <= pcVar2) || (pcVar4 = pcVar1, *pcVar3 == '\\')) break;
    pcVar1 = pcVar3;
  } while (*pcVar3 != ':');
  pcVar2 = pcVar2 + (auStack_70[0] - (int)pcVar4);
  if ((char *)0x14 < pcVar2) {
    pcVar2 = (char *)0x14;
  }
  *param_3 = 0;
  if (param_2 != 0) {
    fn_82F664B0(param_3,param_4,0xffffffff820892e0);
  }
  fn_82F668D8(param_3,param_4,pcVar4,pcVar2);
  fn_82F69A80(param_3,param_4,0xffffffff821ac4b4);
  _snprintf(acStack_60,0x14,"%x",(ulonglong)*(uint *)(param_1 + 0x14));
  fn_82F69A80(param_3,param_4,acStack_60);
  if (lbl_83219B94 != 0) {
    RtlLeaveCriticalSection();
  }
  return;
}

