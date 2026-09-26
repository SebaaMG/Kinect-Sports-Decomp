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
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern int fn_82230300();
extern int fn_82240378();
extern int fn_82864898();
extern int fn_828648B8();
extern int fn_82871C50();
extern int fn_82871EE8();


undefined8 fn_828726D0(undefined8 param_1,int *param_2)

{
  int *piVar1;
  int iVar3;
  undefined8 uVar2;
  char cVar4;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  iVar3 = fn_82871C50(param_1,*param_2);
  if (iVar3 < 0) {
LAB_828726fc:
    uVar2 = 0xffffffffa0110000;
  }
  else {
    cVar4 = (*(code *)**(undefined4 **)*param_2)();
    if (cVar4 == '\0') {
      uVar2 = (**(code **)(*(int *)*param_2 + 0x44))(auStack_40);
      fn_828648B8(auStack_80,uVar2);
      fn_82240378(auStack_60,auStack_80);
      fn_82230300(auStack_80,1,0);
      fn_82864898(auStack_40);
      piVar1 = (int *)*param_2;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x70))(piVar1,1);
      }
      fn_82230300(auStack_60,1,0);
    }
    else {
      iVar3 = fn_82871EE8(param_1);
      if (iVar3 < 0) goto LAB_828726fc;
    }
    uVar2 = 0x20110000;
    *param_2 = 0;
  }
  return uVar2;
}

