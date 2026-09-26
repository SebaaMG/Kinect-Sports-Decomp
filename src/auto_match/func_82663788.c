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
extern int fn_82297D98();
extern int fn_82663848();
extern int fn_826638E8();
extern int fn_82663A00();
extern int fn_82663AF8();
extern int fn_82663B70();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;


ulonglong fn_82663788(uint param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char cVar5;
  int iVar4;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uStack00000014;
  int iStack0000001c;
  undefined4 uStack00000024;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  cVar5 = fn_82663AF8(param_1,param_2);
  uVar1 = uStack00000024;
  if (cVar5 == '\0') {
    cVar5 = fn_82663A00(uStack00000014,uStack00000024,0);
    uVar1 = uStack00000024;
    iVar4 = iStack0000001c;
    if (cVar5 != '\0') {
      uVar3 = fn_82663B70(uStack00000014);
      fn_82297D98(uVar3,iVar4,uVar1);
      fn_82663848(uStack00000014,uStack00000024);
    }
    uVar2 = (ulonglong)uStack00000014;
  }
  else {
    iVar4 = fn_82663B70(uStack00000014);
    uVar2 = fn_826638E8(uStack00000014,uStack00000014,iStack0000001c - iVar4 >> 1,uVar1);
  }
  return uVar2;
}

