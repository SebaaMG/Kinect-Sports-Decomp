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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_40;
extern int fn_82F819D0();
extern int fn_82F86B68();
extern unsigned int uStack_44;
extern unsigned int uStack_48;


uint * fn_82F81918(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int aiStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  uVar3 = 0;
  uVar1 = fn_82F819D0(auStack_40,aiStack_50,param_2,0,0,0,0,param_3);
  if ((uVar1 & 4) == 0) {
    iVar2 = fn_82F86B68(auStack_40,&uStack_48);
    if (((uVar1 & 2) != 0) || (iVar2 == 1)) {
      uVar3 = 0x80;
    }
    if (((uVar1 & 1) != 0) || (iVar2 == 2)) {
      uVar3 = uVar3 | 0x100;
    }
  }
  else {
    uVar3 = 0x200;
    uStack_48 = 0;
    uStack_44 = 0;
  }
  *param_1 = uVar3;
  param_1[1] = aiStack_50[0] - (int)param_2;
  *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_48,uStack_44);
  return param_1;
}

