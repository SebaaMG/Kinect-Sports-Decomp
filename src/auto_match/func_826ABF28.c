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
extern unsigned int uStack_118;
extern unsigned int uStack_120;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_826ABF28(int param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  char *pcVar2;
  undefined8 uStack00000020;
  undefined8 uStack00000028;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  char *pcStack_128;
  char *pcStack_124;
  undefined4 uStack_120;
  char *pcStack_11c;
  undefined4 uStack_118;
  char acStack_110 [256];
  
  if (*(int *)(param_1 + 4) != 0) {
    uStack00000020 = param_3;
    uStack00000028 = param_4;
    uStack00000030 = param_5;
    uStack00000038 = param_6;
    uStack00000040 = param_7;
    uStack00000048 = param_8;
    pcVar2 = param_2;
    if (*(char *)(param_1 + 10) != '\0') {
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcStack_124 = pcVar2 + (-1 - (int)param_2);
      if (param_2[(int)(pcStack_124 + -1)] == '\n') {
        pcStack_124 = pcVar2 + (-2 - (int)param_2);
      }
      pcStack_11c = acStack_110;
      uStack_120 = 2;
      uStack_118 = 0x100;
      pcStack_128 = param_2;
      fn_826AACB0(&uStack_120,0xffffffff82007394,&pcStack_128,param_1 + 0xc);
      param_2 = acStack_110;
    }
    (**(code **)(**(int **)(param_1 + 4) + 4))(*(int **)(param_1 + 4),0x21,param_2,&stack0x00000020)
    ;
  }
  return;
}

