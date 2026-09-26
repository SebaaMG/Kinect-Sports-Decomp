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
extern int fn_826AACB0();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_128;
extern unsigned int uStack_130;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_826ADF90(int param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  char *pcStack_138;
  char *pcStack_134;
  undefined4 uStack_130;
  char *pcStack_12c;
  undefined4 uStack_128;
  char acStack_120 [288];
  
  iVar2 = *(int *)(param_1 + 0xa0);
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  if (iVar2 == 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x74) + 0x94))();
    if (iVar2 == 0) {
      return;
    }
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x74) + 0x94))();
  }
  else {
    if (*(int *)(iVar2 + 4) == 0) {
      return;
    }
    pcVar4 = param_2;
    if (*(char *)(iVar2 + 10) == '\0') {
      piVar3 = *(int **)(iVar2 + 4);
    }
    else {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcStack_134 = pcVar4 + (-1 - (int)param_2);
      if (param_2[(int)(pcStack_134 + -1)] == '\n') {
        pcStack_134 = pcVar4 + (-2 - (int)param_2);
      }
      pcStack_12c = acStack_120;
      uStack_130 = 2;
      uStack_128 = 0x100;
      pcStack_138 = param_2;
      fn_826AACB0(&uStack_130,0xffffffff82007394,&pcStack_138,iVar2 + 0xc);
      piVar3 = *(int **)(iVar2 + 4);
      param_2 = acStack_120;
    }
  }
  (**(code **)(*piVar3 + 4))(piVar3,0x21,param_2,&stack0x00000020);
  return;
}

