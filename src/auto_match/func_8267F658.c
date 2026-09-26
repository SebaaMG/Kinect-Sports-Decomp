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
extern unsigned int *auStack_60;
extern int fn_8267E2B0();
extern int fn_8267EAB8();
extern int fn_8267EBA0();
extern int fn_8267EEE0();
extern int fn_8267EF68();
extern int fn_826933E8();


undefined8 fn_8267F658(int *param_1,ulonglong param_2)

{
  char cVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  int *piStack_70;
  undefined1 *puStack_6c;
  undefined1 auStack_60 [96];
  
  cVar3 = (**(code **)(*param_1 + 4))();
  if (cVar3 == '\0') {
    if ((param_2 & 0xffffffff) == 0) {
      uVar1 = 0;
    }
    else {
      fn_8267EEE0(auStack_60,0,0);
      puStack_6c = auStack_60;
      piStack_70 = param_1;
      cVar3 = fn_8267EAB8(param_1,0xffffffff8267f608,&piStack_70);
      if (cVar3 == '\0') {
        uVar1 = 0;
      }
      else {
        cVar3 = (**(code **)(*param_1 + 4))(param_1);
        if (cVar3 == '\0') {
          uVar1 = 0;
          uVar4 = 0;
          uVar2 = param_2;
          if ((int)param_2 != -1) {
            uVar4 = fn_826933E8();
          }
          while (cVar3 = fn_8267E2B0(auStack_60,uVar2), cVar3 != '\0') {
            cVar3 = (**(code **)(*param_1 + 4))(param_1);
            if (cVar3 != '\0') {
              uVar1 = 1;
              break;
            }
            if ((int)param_2 != -1) {
              uVar2 = fn_826933E8();
              uVar2 = (uVar2 & 0xffffffff) - (uVar4 & 0xffffffff);
              if ((param_2 & 0xffffffff) <= (uVar2 & 0xffffffff)) break;
              uVar2 = param_2 - uVar2;
            }
          }
          fn_8267EBA0(param_1,0xffffffff8267f608,&piStack_70);
        }
        else {
          fn_8267EBA0(param_1,0xffffffff8267f608,&piStack_70);
          uVar1 = 1;
        }
      }
      fn_8267EF68(auStack_60);
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

