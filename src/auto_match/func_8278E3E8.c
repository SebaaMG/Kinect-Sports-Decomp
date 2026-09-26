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
extern unsigned int *auStack_30;
extern int fn_8267C498();
extern int fn_8278BDD0();
extern int fn_8278BF48();
extern int fn_8278C498();
extern int fn_8278E0F0();


void fn_8278E3E8(uint *param_1,undefined8 param_2,uint *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_30 [4];
  uint auStack_2c [11];
  
  uVar1 = *param_3;
  uVar4 = (ulonglong)uVar1;
  if (uVar4 != 0) {
    *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
  }
  uVar2 = fn_8278BDD0(auStack_30);
  if ((uVar4 & 0xffffffff) != 0) {
    fn_8267C498(uVar4);
  }
  if ((*param_1 == 0) ||
     (lVar3 = fn_8278C498(param_1,param_3,*(uint *)(*param_1 + 4) & uVar2), (int)lVar3 < 0)) {
    fn_8278E0F0(param_1,param_2,param_3,uVar2);
  }
  else {
    uVar1 = *param_3;
    if (uVar1 != 0) {
      *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
    }
    auStack_2c[0] = uVar1;
    fn_8278BF48(lVar3 * 0xc + (ulonglong)*param_1 + 0x10,auStack_2c);
    if (uVar1 != 0) {
      fn_8267C498(uVar1);
    }
  }
  return;
}

