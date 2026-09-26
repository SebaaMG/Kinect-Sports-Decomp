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
extern int fn_82AB15D0();
extern int fn_82B7F488();
extern int iRam8316d920;


void fn_82B9FA18(ulonglong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  
  iVar2 = iRam8316d920;
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820de290,0x69a);
  }
  uVar1 = fn_82B7F488(param_1,0);
  if ((uVar1 & 0xffffffff) == 0) {
    fn_82AB15D0(uVar1,0xffffffff820d2ea4,0xffffffff820de2f4,0xffffffff820de290,0x69b);
  }
  puVar4 = (undefined4 *)(param_2 * 0x10 + iVar2);
  iVar2 = fn_82B7F488(param_1,*(undefined4 *)(param_2 * 0x10 + iVar2));
  puVar3 = (uint *)(iVar2 + (puVar4[1] + 2) * 4);
  *puVar3 = *puVar3 & ~puVar4[2];
  iVar2 = fn_82B7F488(param_1,*puVar4);
  puVar3 = (uint *)(iVar2 + (puVar4[1] + 2) * 4);
  *puVar3 = param_3 << (puVar4[3] & 0x3f) & puVar4[2] | *puVar3;
  return;
}

