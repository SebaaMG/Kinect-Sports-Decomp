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
extern unsigned int *auStack_20;
extern int fn_8265C940();
extern int fn_82A29D80();
extern int fn_82A29DE8();
extern int fn_82A2A108();


undefined8 fn_82920540(int *param_1,ulonglong param_2,int param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 auStack_20 [2];
  
  if ((param_2 & 0xffffffff) == 0) {
    return 0xffffffff8876086c;
  }
  if (param_3 != 0) {
    return 0xffffffff80004005;
  }
  uVar1 = fn_82A29DE8(param_2,0xffffffff80000000,1,0,3,0x8000000,0);
  *param_1 = (int)uVar1;
  if ((int)uVar1 != -1) {
    uVar2 = fn_82A29D80(uVar1,0);
    param_1[2] = (int)uVar2;
    if ((int)uVar2 != -1) {
      if ((uVar2 & 0xffffffff) == 0) {
        param_1[1] = 0;
      }
      else {
        iVar3 = fn_8265C940(uVar2,0x24810000);
        param_1[1] = iVar3;
        if (iVar3 == 0) goto LAB_8292060c;
      }
      auStack_20[0] = 0;
      iVar3 = fn_82A2A108(*param_1,param_1[1],param_1[2],auStack_20,0);
      if (iVar3 != 0) {
        return 0;
      }
    }
  }
LAB_8292060c:
  thunk_FUN_82a2b798();
  return 0xffffffff88760b59;
}

