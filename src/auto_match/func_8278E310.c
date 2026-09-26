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
extern unsigned int *auStack_40;
extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_8278BA98();
extern int fn_8278BEE8();
extern int fn_8278C400();
extern int fn_8278DF08();


void fn_8278E310(uint *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_40 [4];
  int aiStack_3c [15];
  
  iVar1 = *param_3;
  if (iVar1 != 0) {
    fn_8267C4C8(iVar1);
  }
  uVar2 = fn_8278BA98(auStack_40,iVar1);
  if (iVar1 != 0) {
    fn_8267C4F0(iVar1);
  }
  if ((*param_1 == 0) ||
     (lVar3 = fn_8278C400(param_1,param_3,*(uint *)(*param_1 + 4) & uVar2), lVar3 < 0)) {
    fn_8278DF08(param_1,param_2,param_3,uVar2);
  }
  else {
    iVar1 = *param_3;
    if (iVar1 != 0) {
      fn_8267C4C8(iVar1);
    }
    aiStack_3c[0] = iVar1;
    fn_8278BEE8(lVar3 * 0xc + (ulonglong)*param_1 + 0x10,aiStack_3c);
    if (iVar1 != 0) {
      fn_8267C4F0(iVar1);
    }
  }
  return;
}

