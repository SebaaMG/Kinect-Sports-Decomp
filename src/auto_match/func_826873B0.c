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
extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C4F0();
extern int fn_8267EF68();
extern int fn_82686608();
extern int fn_82687270();
extern unsigned int lbl_82005B58;
extern U64 storeWordConditionalIndexed();


void fn_826873B0(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  uint *puVar4;
  ulonglong uVar5;
  char in_RESERVE;
  byte in_cr0;
  
  uVar1 = param_1[2];
  *param_1 = &lbl_82005B58;
  RtlEnterCriticalSection((ulonglong)uVar1 + 0xc);
  if (param_1[3] == 0) {
    fn_82686608((ulonglong)(uint)param_1[2] + 0x28,param_1 + 5);
  }
  else if (param_1[4] != 0) {
    fn_82687270(param_1[4]);
  }
  RtlLeaveCriticalSection((ulonglong)uVar1 + 0xc);
  fn_8267EF68(param_1 + 8);
  lVar3 = ((ulonglong)(uint)param_1[7] & 0xfffffffc) + 4;
  do {
    puVar4 = (uint *)lVar3;
    uVar5 = (ulonglong)*puVar4;
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(uVar5 - 1,0,lVar3);
      *puVar4 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  piVar2 = (int *)param_1[5];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2,param_1[6]);
  }
  if (param_1[2] != 0) {
    fn_8267C4F0();
  }
  fn_8267C488(param_1);
  return;
}

