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
extern int fn_82634DF8();
extern int fn_82637090();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();


longlong fn_82633788(int param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong uVar5;
  int *piVar6;
  
  fn_82634DF8(param_1,1,param_4 == 0,1,param_2);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x128) + 1;
  uVar1 = *(uint *)(param_1 + 100);
  piVar6 = (int *)(param_1 + 0x124);
  piVar4 = (int *)(param_1 + 0x50);
  if ((ulonglong)*(uint *)(param_1 + 300) < (uVar3 & 0xffffffff)) {
    uVar5 = ((ulonglong)*(uint *)(param_1 + 300) & 0x7fffffff) << 1;
    if (uVar5 < (uVar3 & 0xffffffff)) {
      uVar5 = uVar3;
    }
    lVar2 = fn_8265C940((uVar5 & 0x3fffffff) << 2,0x64800000);
    if (lVar2 == 0) {
      *piVar4 = -0x7ff8fff2;
      goto LAB_82633880;
    }
    *(int *)(param_1 + 300) = (int)uVar5;
    if (*piVar6 != 0) {
      fn_82F68CC0(lVar2,*piVar6,*(int *)(param_1 + 0x128) << 2);
      fn_8265C990(*piVar6,0x24800000);
    }
    *piVar6 = (int)lVar2;
  }
  if (-1 < *piVar4) {
    *(uint *)(*(int *)(param_1 + 0x128) * 4 + *piVar6) =
         (((param_4 & 1) << 6 | param_3 & 0xf) << 8 | param_3 & 0xf0) << 8 | uVar1 & 0xfff;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  }
LAB_82633880:
  fn_82637090(param_1 + 0x60,param_2,piVar4);
  return (ulonglong)*(uint *)(param_1 + 100) - 1;
}

