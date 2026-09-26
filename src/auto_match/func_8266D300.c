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
extern int fn_8266CC70();


void fn_8266D300(ulonglong param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  iVar2 = (param_2 - (int)param_1) / 0xc;
  uVar6 = (ulonglong)iVar2;
  iVar1 = (int)(param_3 - (int)param_1) / 0xc;
  uVar4 = (ulonglong)iVar1;
  uVar5 = uVar6;
  uVar3 = uVar4;
  if (iVar2 != 0) {
    do {
      uVar4 = uVar5;
      uVar5 = uVar3 - (longlong)((int)uVar3 / (int)uVar4) * (longlong)(int)uVar4;
      trapWord(6,uVar4,0);
      trapWord(5,uVar4 & ~(((uVar3 & 0x7fffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f) - 1),0xffff);
      uVar3 = uVar4;
    } while (uVar5 != 0);
  }
  if (((int)uVar4 < iVar1) && (0 < (int)uVar4)) {
    uVar5 = uVar4 * 0xc + param_1;
    do {
      uVar7 = uVar5 + uVar6 * 0xc;
      uVar3 = uVar5;
      if ((uVar7 & 0xffffffff) == (ulonglong)param_3) {
        uVar7 = param_1;
      }
      do {
        fn_8266CC70(uVar3,uVar7);
        iVar1 = (int)(param_3 - (int)uVar7) / 0xc;
        if (iVar2 < iVar1) {
          uVar8 = uVar6 * 0xc + uVar7;
        }
        else {
          uVar8 = (uVar6 - (longlong)iVar1) * 0xc + param_1;
        }
        uVar3 = uVar7;
        uVar7 = uVar8;
      } while ((uVar8 & 0xffffffff) != (uVar5 & 0xffffffff));
      uVar4 = uVar4 - 1;
      uVar5 = uVar5 - 0xc;
    } while (0 < (longlong)uVar4);
  }
  return;
}

