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
extern int fn_828223C8();
extern int fn_82827980();
extern int fn_828295E8();


ulonglong fn_828268E0(int param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar4;
  longlong lVar2;
  int iVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  int aiStack_30 [12];
  
  uVar6 = 0;
  cVar4 = fn_82827980(param_1,param_2,0);
  if (cVar4 != '\0') {
    iVar3 = param_1 + 0x2fc;
    while (fn_828223C8(iVar3,aiStack_30), aiStack_30[0] != 0) {
      iVar3 = aiStack_30[0];
      if (*(char *)(aiStack_30[0] + 0x28) == cVar4) {
        uVar1 = *(uint *)(aiStack_30[0] + 0x2c);
        uVar5 = (ulonglong)uVar1 -
                (uVar6 - (longlong)(int)((uVar6 & 0xffffffff) / (ulonglong)uVar1) *
                         (longlong)(int)uVar1);
        lVar2 = fn_828295E8(aiStack_30[0]);
        uVar6 = lVar2 + (uVar5 - (longlong)(int)((uVar5 & 0xffffffff) / (ulonglong)uVar1) *
                                 (longlong)(int)uVar1) + uVar6;
        iVar3 = aiStack_30[0];
      }
    }
  }
  return uVar6;
}

