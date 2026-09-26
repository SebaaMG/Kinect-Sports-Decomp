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
extern unsigned int *auStack_30;
extern int fn_8267C498();
extern int fn_8278BDD0();
extern int fn_8278C498();


undefined8 fn_8278CCD8(int *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_30 [48];
  
  if (*param_1 == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar1 = *param_2;
    uVar4 = (ulonglong)uVar1;
    if (uVar4 != 0) {
      *(int *)(uVar1 + 4) = *(int *)(uVar1 + 4) + 1;
    }
    uVar3 = fn_8278BDD0(auStack_30);
    uVar1 = *(uint *)(*param_1 + 4);
    if ((uVar4 & 0xffffffff) != 0) {
      fn_8267C498(uVar4);
    }
    uVar2 = fn_8278C498(param_1,param_2,uVar3 & uVar1);
  }
  return uVar2;
}

