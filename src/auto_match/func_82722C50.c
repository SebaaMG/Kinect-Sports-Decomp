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
extern unsigned int *auStack_2c;
extern int fn_8267BE38();
extern int fn_82681838();
extern int fn_826944C8();
extern int fn_8269A190();
extern int fn_826B4808();
extern int fn_82799E48();
extern unsigned int iStack_30;
extern U64 storeWordConditionalIndexed();


void fn_82722C50(int *param_1)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  char in_RESERVE;
  byte bVar7;
  int iStack_30;
  uint auStack_2c [11];
  
  if (*(int *)(param_1[0x2d] + 0x10) != 0) {
    iVar3 = (**(code **)(*param_1 + 0x5c))();
    if (iVar3 != 0) {
      uVar2 = fn_82799E48(auStack_2c,param_1[0x28]);
      fn_8269A190(&iStack_30,(ulonglong)*(uint *)(iVar3 + 0x78) + 0x254,uVar2);
      fn_82681838(param_1 + 0x2e,&iStack_30);
      lVar5 = (ulonglong)*(uint *)(iStack_30 + 8) - 1;
      bVar7 = (lVar5 == 0) << 1;
      *(int *)(iStack_30 + 8) = (int)lVar5;
      if (lVar5 == 0) {
        fn_826944C8();
      }
      lVar5 = ((ulonglong)auStack_2c[0] & 0xfffffffc) + 4;
      do {
        puVar6 = (uint *)lVar5;
        uVar4 = (ulonglong)*puVar6;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar4 - 1,0,lVar5);
          *puVar6 = uVar1;
          bVar7 = 2;
        }
      } while (!(bool)(bVar7 >> 1 & 1));
      if (uVar4 == 1) {
        fn_8267BE38();
      }
      fn_826B4808(iVar3,param_1 + 0x2d,param_1 + 0x2e,0,1);
    }
  }
  return;
}

