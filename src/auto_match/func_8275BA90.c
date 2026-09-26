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
extern unsigned int *auStack_5c;
extern int fn_8268CC00();
extern int fn_8275B490();
extern unsigned int iStack_60;


void fn_8275BA90(undefined8 param_1,char *param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  int aiStack_70 [4];
  int iStack_60;
  undefined1 auStack_5c [92];
  
  piVar1 = *(int **)(*param_3 + 0xc);
  if (*param_2 == '\0') {
    aiStack_70[0] = *(int *)(param_2 + 4);
    piVar3 = aiStack_70;
    pcVar2 = *(code **)(*piVar1 + 0x5c);
  }
  else {
    fn_8268CC00(auStack_5c);
    iStack_60 = 0;
    fn_8275B490(param_1,param_2,&iStack_60,param_3);
    if (iStack_60 == 0) {
      return;
    }
    piVar3 = &iStack_60;
    pcVar2 = *(code **)(*piVar1 + 0x60);
  }
  (*pcVar2)(piVar1,piVar3);
  return;
}

