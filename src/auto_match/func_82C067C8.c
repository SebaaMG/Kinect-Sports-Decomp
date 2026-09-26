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
extern int fn_82C10B28();
extern int fn_82C10CB0();
extern int fn_82C10CC0();


ulonglong fn_82C067C8(int *param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                       undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulonglong uVar2;
  int *piVar3;
  
  piVar3 = param_1 + 2;
  uVar2 = fn_82C10CC0(param_1[0x98],param_5,param_6,param_1[2]);
  if ((((-1 < (int)uVar2) &&
       (uVar2 = (**(code **)*piVar3)(param_5,param_6,param_7,param_1[0x98],(undefined4 *)*piVar3),
       -1 < (int)uVar2)) &&
      (uVar2 = fn_82C10CB0(param_2,param_1[0x98],*param_1), -1 < (int)uVar2)) &&
     (uVar2 = (**(code **)*param_1)(param_2,*piVar3,param_1[1],param_1[0x98],(undefined4 *)*param_1)
     , -1 < (int)uVar2)) {
    *(undefined4 *)param_1[1] = 1;
    param_1[0x87] = param_3;
    param_1[0x88] = param_4;
    param_1[0x89] = (int)param_7;
    param_1[0x93] = 0;
    uVar2 = (**(code **)(*param_1 + 8))(*param_1);
  }
  if (((uVar2 & 0xffffffff) != 0x80500000) && ((int)uVar2 < 0)) {
    if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 4), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
      fn_82C10B28(param_1[0x98],8,param_1);
    }
    if ((*piVar3 != 0) && (pcVar1 = *(code **)(*piVar3 + 4), pcVar1 != (code *)0x0)) {
      (*pcVar1)();
      fn_82C10B28(param_1[0x98],8,piVar3);
    }
  }
  return uVar2;
}

