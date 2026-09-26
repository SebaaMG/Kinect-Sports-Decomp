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
extern unsigned int iStack_64;
extern unsigned int iStack_68;


void fn_8243FDE0(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int aiStack_b0 [18];
  int iStack_68;
  int iStack_64;
  
  piVar6 = param_1;
  while (piVar6 = piVar6 + 0x17, piVar6 != param_2) {
    fn_82F68CC0(aiStack_b0,piVar6,0x5c);
    iVar4 = iStack_64;
    iVar3 = iStack_68;
    iVar2 = aiStack_b0[0];
    if (iStack_64 == 1) {
      if (param_1[0x13] == 1) {
        if ((iStack_68 < param_1[0x12]) ||
           ((iStack_68 == param_1[0x12] && (aiStack_b0[0] < *param_1)))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    piVar5 = piVar6;
    piVar7 = piVar6;
    if (bVar1) {
      while (piVar5 = param_1, param_1 != piVar7) {
        fn_82F68CC0(piVar7,piVar7 + -0x17,0x5c);
        piVar7 = piVar7 + -0x17;
      }
    }
    else {
      while( true ) {
        piVar7 = piVar5 + -0x17;
        if (iVar4 == 1) {
          if (piVar5[-4] == 1) {
            if ((iVar3 < piVar5[-5]) || ((iVar3 == piVar5[-5] && (iVar2 < *piVar7)))) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
          }
          else {
            bVar1 = true;
          }
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) break;
        fn_82F68CC0(piVar5,piVar7,0x5c);
        piVar5 = piVar7;
      }
    }
    fn_82F68CC0(piVar5,aiStack_b0,0x5c);
  }
  return;
}

