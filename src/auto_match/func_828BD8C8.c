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
extern int fn_8289F2E0();
extern int fn_828ACC40();
extern int fn_828ACCB0();
extern int fn_828ACD00();
extern int fn_828BE850();
extern int fn_828BE888();
extern int fn_828BE8C0();
extern int fn_828BE930();
extern int fn_82A4AAA8();


undefined8 fn_828BD8C8(undefined8 param_1,int *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar5;
  int *piVar3;
  int iVar4;
  
  uVar2 = (**(code **)(*param_2 + 4))(param_2);
  uVar1 = ((~uVar2 & 0xffffffff) >> 0x1f) + (ulonglong)(0x1a < uVar2) & 1;
  cVar5 = fn_828ACC40(param_1);
  if (cVar5 == '\0') {
    cVar5 = fn_828ACD00(param_1);
    if (cVar5 == '\0') {
      if ((int)param_3 != 0) {
        piVar3 = (int *)fn_8289F2E0(param_1,param_3);
        iVar4 = (**(code **)(*piVar3 + 0xc))();
        if ((iVar4 != 0) && (iVar4 = fn_82A4AAA8(), iVar4 == 2)) {
          if (uVar1 == 0) {
            return 2;
          }
          cVar5 = fn_828BE930(uVar2,1);
          if (cVar5 != '\0') {
            return 1;
          }
          return 2;
        }
      }
      cVar5 = fn_828ACCB0(param_1);
      if (cVar5 != '\0') {
        if (uVar1 == 0) {
          return 2;
        }
        cVar5 = fn_828BE888(uVar2,1);
        if (cVar5 == '\0') {
          return 2;
        }
      }
    }
    else {
      if (uVar1 == 0) {
        return 2;
      }
      cVar5 = fn_828BE8C0(uVar2,1);
      if (cVar5 == '\0') {
        return 2;
      }
    }
  }
  else if ((uVar1 == 0) || (cVar5 = fn_828BE850(uVar2,1), cVar5 == '\0')) {
    return 2;
  }
  return 1;
}

