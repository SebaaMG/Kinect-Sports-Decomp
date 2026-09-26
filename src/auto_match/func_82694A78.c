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
extern int fn_8268C510();
extern int fn_8268C9F8();
extern int fn_82694610();
extern unsigned int uStack_30;
extern U64 storeWordConditionalIndexed();


int * fn_82694A78(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  char in_RESERVE;
  byte in_cr0;
  byte bVar8;
  uint uStack_30;
  uint auStack_2c [11];
  
  uVar3 = fn_8268C510(auStack_2c,*(undefined4 *)*param_2);
  fn_8268C9F8(&uStack_30,uVar3);
  lVar5 = ((ulonglong)auStack_2c[0] & 0xfffffffc) + 4;
  do {
    puVar6 = (uint *)lVar5;
    uVar7 = (ulonglong)*puVar6;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar5);
      *puVar6 = uVar2;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  bVar8 = (uVar7 == 1) << 1;
  if (uVar7 == 1) {
    fn_8267BE38();
  }
  iVar4 = fn_82694610(*(undefined4 *)(*param_2 & 0xfffffc00),
                        ((ulonglong)uStack_30 & 0xfffffffc) + 8,
                        *(uint *)(uStack_30 & 0xfffffffc) & 0x7fffffff);
  iVar1 = *(int *)(iVar4 + 8);
  *param_1 = iVar4;
  *(int *)(iVar4 + 8) = iVar1 + 1;
  lVar5 = ((ulonglong)uStack_30 & 0xfffffffc) + 4;
  do {
    puVar6 = (uint *)lVar5;
    uVar7 = (ulonglong)*puVar6;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar7 - 1,0,lVar5);
      *puVar6 = uVar2;
      bVar8 = 2;
    }
  } while (!(bool)(bVar8 >> 1 & 1));
  if (uVar7 == 1) {
    fn_8267BE38();
  }
  return param_1;
}

