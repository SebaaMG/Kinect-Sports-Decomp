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
extern unsigned int *auStack_80;
extern int fn_8289D8D0();
extern int fn_828A9A68();
extern int fn_828AC488();
extern int fn_828B2360();
extern int fn_828B2BF8();
extern int fn_828B2DF0();
extern int fn_828B42F0();
extern int fn_828D7538();
extern int fn_828E20C8();


void fn_828D7760(int param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  int iVar4;
  ulonglong uVar2;
  undefined8 uVar3;
  int *piVar5;
  undefined1 auStack_80 [128];
  
  iVar4 = fn_8289D8D0(*(undefined4 *)(param_1 + 4));
  if ((iVar4 != 0) && (uVar2 = fn_828D7538(param_1,param_2,0), (uVar2 & 0xffffffff) != 0)) {
    fn_828E20C8(uVar2,param_3,param_4,param_5);
    uVar2 = fn_828A9A68(*(undefined4 *)(param_1 + 4),param_2,param_3);
    if ((uVar2 & 0xffffffff) != 0) {
      uVar3 = fn_828B2BF8();
      piVar5 = (int *)fn_828B2360(uVar3,uVar2);
      if ((piVar5 != (int *)0x0) &&
         (uVar2 = (**(code **)(*piVar5 + 8))(), (uVar2 & 0xffffffff) != 0)) {
        uVar1 = param_5 & 0xffffffff;
        while (uVar1 != 0) {
          fn_828B2DF0(auStack_80,param_1,param_4,0);
          fn_828B42F0(uVar2,auStack_80);
          fn_828AC488(auStack_80);
          param_4 = param_4 + 0x2a;
          param_5 = param_5 - 1;
          uVar1 = param_5;
        }
      }
    }
  }
  return;
}

