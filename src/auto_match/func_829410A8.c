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
extern int fn_828F5960();
extern int fn_82940C38();
extern int fn_82F68CC0();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_21;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
fn_829410A8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  char acStack_820 [2047];
  undefined1 uStack_21;
  
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  fn_828F5960(acStack_820,0x800,param_2,&stack0x00000020);
  uStack_21 = 0;
  pcVar3 = acStack_820;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + (-1 - (int)acStack_820);
  uVar2 = fn_82940C38(param_1,pcVar3);
  if (-1 < (int)uVar2) {
    fn_82F68CC0((ulonglong)*(uint *)(param_1 + 0x5fc) + (ulonglong)*(uint *)(param_1 + 0x600),
                 acStack_820,pcVar3);
    uVar2 = 0;
    *(char **)(param_1 + 0x600) = pcVar3 + *(int *)(param_1 + 0x600);
  }
  return uVar2;
}

