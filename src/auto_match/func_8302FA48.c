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
extern int fn_82FF5198();
extern int fn_8301AF50();
extern unsigned int lbl_832642EC;
extern unsigned int lbl_83264304;


void fn_8302FA48(int *param_1,ulonglong param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  bVar4 = false;
  piVar1 = (int *)param_1[0x41];
  piVar3 = (int *)0x0;
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    if ((((param_2 & 0xffffffff) == 0) || ((param_2 & 0xffffffff) == (ulonglong)(uint)piVar2[8])) &&
       ((param_3 == 0 || (piVar2[6] == param_3)))) {
      piVar1 = (int *)*piVar2;
      if (piVar2 == (int *)param_1[0x41]) {
        param_1[0x41] = (int)piVar1;
      }
      else {
        *piVar3 = (int)piVar1;
      }
      if (piVar2 == (int *)param_1[0x42]) {
        param_1[0x42] = (int)piVar3;
      }
      *piVar2 = param_1[0x43];
      param_1[0x43] = (int)piVar2;
      param_1[0x46] = param_1[0x46] + -1;
      fn_82FF5198(lbl_83264304,piVar2[6]);
      (**(code **)(*param_1 + 0x98))(param_1,3);
      bVar4 = true;
    }
    else {
      piVar1 = (int *)*piVar2;
      piVar3 = piVar2;
    }
  }
  if (bVar4) {
    fn_8301AF50(lbl_832642EC,param_1[3],param_2);
  }
  return;
}

