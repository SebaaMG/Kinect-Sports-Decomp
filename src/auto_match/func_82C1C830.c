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
extern int fn_82A56BB0();
extern int fn_82C1C418();
extern int fn_82C38C88();
extern int fn_82C391F0();


undefined8 fn_82C1C830(int *param_1,undefined2 *param_2,undefined8 param_3)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  sVar1 = *(short *)(param_1 + 0x7d);
  if (param_2 == (undefined2 *)0x0) {
    uVar4 = 0xffffffff80070057;
  }
  else {
    iVar3 = *param_1;
    uVar2 = *param_2;
    if ((((param_1[0x6e] == 0) ||
         (uVar4 = fn_82A56BB0(param_1,param_3,uVar2), -1 < (int)uVar4)) &&
        (uVar4 = fn_82C1C418(param_1,sVar1), -1 < (int)uVar4)) &&
       ((param_1[0x76] == 1 && (sVar1 != 0)))) {
      if (*(int *)(iVar3 + 0xb0) == 0) {
        uVar4 = fn_82C391F0();
        *param_2 = uVar2;
        return uVar4;
      }
      uVar4 = fn_82C38C88(*(undefined4 *)(iVar3 + 0x238),param_1,*(undefined1 *)(iVar3 + 0xc9)
                                ,sVar1,uVar2);
    }
    *param_2 = uVar2;
  }
  return uVar4;
}

