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
extern int fn_82F68CC0();
extern unsigned int iStack_58;


void fn_8243F748(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_a0 [18];
  int iStack_58;
  
  piVar5 = param_1;
  if (param_1 != param_2) {
    while (piVar5 = piVar5 + 0x17, piVar5 != param_2) {
      fn_82F68CC0(aiStack_a0,piVar5,0x5c);
      iVar3 = iStack_58;
      iVar2 = aiStack_a0[0];
      if ((param_1[0x12] < iStack_58) ||
         ((iStack_58 == param_1[0x12] && (aiStack_a0[0] < *param_1)))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      piVar4 = piVar5;
      piVar6 = piVar5;
      if (bVar1) {
        while (piVar4 = param_1, param_1 != piVar6) {
          fn_82F68CC0(piVar6,piVar6 + -0x17,0x5c);
          piVar6 = piVar6 + -0x17;
        }
      }
      else {
        while( true ) {
          piVar6 = piVar4 + -0x17;
          if ((piVar4[-5] < iVar3) || ((iVar3 == piVar4[-5] && (iVar2 < *piVar6)))) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) break;
          fn_82F68CC0(piVar4,piVar6,0x5c);
          piVar4 = piVar6;
        }
      }
      fn_82F68CC0(piVar4,aiStack_a0,0x5c);
    }
  }
  return;
}

