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
extern int fn_82869768();
extern int fn_828764E8();


undefined8
fn_82869D30(int param_1,undefined8 param_2,undefined8 param_3,int *param_4,undefined1 *param_5,
             undefined8 param_6)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  
  if ((((int)param_3 == 0) && (param_4 != (int *)0x0)) && (*param_4 == 0)) {
    for (iVar1 = *(int *)(param_1 + 0x424); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      iVar3 = fn_82869768(param_1,iVar1,param_2,param_4,param_6);
      if (iVar3 == 1) {
        *param_5 = 1;
        return 1;
      }
    }
  }
  uVar2 = fn_828764E8(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar2;
}

