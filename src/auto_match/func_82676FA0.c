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
extern int fn_82676EB8();
extern U64 storeWordConditionalIndexed();


void fn_82676FA0(int *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  char in_RESERVE;
  
  fn_82676EB8(param_1,param_1,(ulonglong)(uint)param_1[1] + 1);
  puVar5 = (uint *)(param_1[1] * 4 + *param_1 + -4);
  bVar1 = puVar5 == (uint *)0x0;
  if (!bVar1) {
    if ((ulonglong)*param_2 != 0) {
      lVar3 = (ulonglong)*param_2 + 4;
      do {
        puVar4 = (uint *)lVar3;
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((ulonglong)*puVar4 + 1,0,lVar3);
          *puVar4 = uVar2;
          bVar1 = true;
        }
      } while (!bVar1);
    }
    *puVar5 = *param_2;
  }
  return;
}

