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
extern int fn_8224E9D8();
extern int fn_822CB340();
extern int fn_8265C9E0();
extern int fn_82897FE8();
extern int fn_828AB150();
extern unsigned int lbl_821C2CA0;
extern unsigned int stack0x00000028;
extern unsigned int uStack00000028;


void fn_8224E650(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  uint uVar1;
  int *piVar3;
  char cVar4;
  longlong lVar2;
  undefined8 uStack00000028;
  
  uStack00000028 = param_4;
  piVar3 = (int *)fn_8265C9E0(0x7dc);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3[1] = 1;
    *piVar3 = (int)&lbl_821C2CA0;
    piVar3[0x1f6] = 0;
  }
  cVar4 = (**(code **)(*piVar3 + 0x18))(piVar3,param_2);
  if (cVar4 == '\0') {
    uVar1 = piVar3[1];
    piVar3[1] = (int)((ulonglong)uVar1 - 1);
    if ((ulonglong)uVar1 - 1 == 0) {
      (**(code **)(*piVar3 + 0x14))(piVar3,1);
    }
  }
  else {
    lVar2 = (**(code **)(*param_1 + 8))(param_1);
    fn_82897FE8(lVar2 + 0x630,piVar3);
    lVar2 = (**(code **)(*param_1 + 8))(param_1);
    fn_8224E9D8(lVar2 + 0x6d8,param_3);
    lVar2 = (**(code **)(*param_1 + 8))(param_1);
    fn_822CB340(lVar2 + 0x684,&stack0x00000028);
    lVar2 = (**(code **)(*param_1 + 8))(param_1);
    fn_828AB150(lVar2 + 0x72c,param_5);
  }
  return;
}

