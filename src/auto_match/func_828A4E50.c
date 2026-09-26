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
extern unsigned int *auStack_38;
extern unsigned int *auStack_60;
extern int fn_828A2E00();
extern int fn_828A43E8();
extern unsigned int iStack_40;
extern unsigned int iStack_50;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_54;
extern unsigned int uStack_58;


void fn_828A4E50(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack0000001c;
  undefined4 auStack_60 [2];
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined1 auStack_38 [56];
  
  uStack_58 = *(undefined4 *)(param_1 + 0x240);
  uStack_54 = 0;
  uStack_44 = 0;
  iStack_40 = *(int *)(param_1 + 0x24c);
  iVar2 = *(int *)(param_1 + 0x250) + iStack_40;
  uStack0000001c = param_2;
  iStack_50 = iVar2;
  uStack_48 = uStack_58;
  iVar1 = fn_828A2E00(auStack_38,&uStack_48,&uStack_58,&stack0x0000001c);
  if (*(int *)(iVar1 + 8) == iVar2) {
    auStack_60[0] = param_2;
    fn_828A43E8(param_1 + 0x240,auStack_60);
  }
  return;
}

