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
extern unsigned int fStack_34;
extern int fn_82773E60();
extern int fn_827A0BD0();
extern int fn_827A8770();


ulonglong fn_827A1F10(int param_1)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int aiStack_40 [3];
  float fStack_34;
  byte bStack_30;
  
  fn_827A0BD0();
  uVar1 = fn_827A8770(param_1 + 0x24);
  uVar3 = 0;
  bStack_30 = *(byte *)(param_1 + 0x98) >> 2 & 1;
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x38);
  aiStack_40[1] = 0;
  fStack_34 = -(float)uVar1;
  aiStack_40[0] = param_1 + 0x24;
  do {
    aiStack_40[2] = (int)uVar4;
    do {
      cVar2 = fn_82773E60(aiStack_40);
      if (cVar2 == '\0') {
        return uVar3;
      }
      uVar3 = uVar4;
      if ((int)uVar4 < 0) {
        uVar3 = 0xffffffffffffffff;
      }
    } while ((ulonglong)*(uint *)(param_1 + 0x28) <= (uVar4 & 0xffffffff));
    uVar4 = uVar4 + 1;
  } while( true );
}

