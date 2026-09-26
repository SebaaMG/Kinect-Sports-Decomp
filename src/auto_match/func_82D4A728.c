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
extern unsigned int *auStack_240;
extern unsigned int *auStack_250;
extern int fn_82D6F590();
extern unsigned int lbl_83182A98;


ulonglong fn_82D4A728(int *param_1,ulonglong param_2)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [576];
  
  uVar5 = (uint)param_2 >> (0x20U - param_1[8] & 0x3f);
  param_2 = 0xffffffff >> (param_1[8] & 0x3fU) & param_2;
  iVar3 = uVar5 * 0x38;
  do {
    param_2 = param_2 + 1;
    if (*(int *)(iVar3 + param_1[9] + 0x1c) <= (int)param_2) {
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x38;
      if ((uint)param_1[10] <= uVar5) {
        return 0xffffffffffffffff;
      }
      param_2 = 0;
    }
    uVar4 = uVar5 << (0x20U - param_1[8] & 0x3f) | param_2;
    lVar1 = (**(code **)(*param_1 + 0x14))(param_1,uVar4,auStack_240);
    pcVar2 = (char *)fn_82D6F590((double)lbl_83182A98,auStack_250,lVar1 + 0x20,lVar1 + 0x30,
                                  lVar1 + 0x40);
  } while (*pcVar2 != '\0');
  return uVar4;
}

