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
extern unsigned int *auStack_220;
extern unsigned int *auStack_230;
extern int fn_82D6F590();
extern unsigned int lbl_83182A98;


ulonglong fn_82D41FB0(int *param_1)

{
  ulonglong uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [520];
  
  if ((ulonglong)(uint)param_1[0x2d] + (ulonglong)(uint)param_1[0x2a] == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = -(ulonglong)((ulonglong)(uint)param_1[0x2a] == 0) & 0xffffffff80000000;
    iVar2 = (**(code **)(*param_1 + 0x14))(param_1,uVar1,auStack_220);
    if ((*(int *)(iVar2 + 0xc) == 3) &&
       (pcVar3 = (char *)fn_82D6F590((double)lbl_83182A98,auStack_230,iVar2 + 0x20,iVar2 + 0x30,
                                      iVar2 + 0x40), *pcVar3 != '\0')) {
      uVar1 = (**(code **)(*param_1 + 0xc))(param_1,uVar1);
    }
  }
  return uVar1;
}

