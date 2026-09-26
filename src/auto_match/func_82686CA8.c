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
extern int fn_8267C4F0();
extern int fn_82686C38();
extern U64 storeWordConditionalIndexed();


ulonglong fn_82686CA8(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  char in_RESERVE;
  byte in_cr0;
  
  if (*param_1 == 1) {
    uVar2 = param_1[1];
    do {
      puVar6 = (uint *)((ulonglong)uVar2 + 4);
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,(ulonglong)uVar2 + 4);
        *puVar6 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar5 = (ulonglong)(uint)param_1[1];
  }
  else {
    if (*param_1 != 4) {
      iVar3 = param_1[1];
      uVar5 = fn_82686C38(iVar3);
      bVar1 = uVar5 == 0;
      if (!bVar1) {
        param_1[1] = (int)uVar5;
        *param_1 = 1;
        do {
          puVar6 = (uint *)(uVar5 + 4);
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)*puVar6 + 1,0,uVar5 + 4);
            *puVar6 = uVar2;
            bVar1 = true;
          }
        } while (!bVar1);
        fn_8267C4F0(iVar3);
        return uVar5;
      }
      *param_1 = 4;
    }
    uVar5 = 0;
  }
  return uVar5;
}

