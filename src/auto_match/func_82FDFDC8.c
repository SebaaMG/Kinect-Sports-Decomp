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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int lbl_82006848;


void fn_82FDFDC8(int param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint uVar6;
  
  fVar3 = lbl_82006848;
  uVar6 = 0;
  if (param_3 == 0) {
    return;
  }
code_r0x82fdfdf8:
  puVar4 = param_4 + uVar6;
  param_4[uVar6] = (uint)(longlong)(*(float *)(uVar6 * 4 + param_1) * fVar3 * (float)param_2);
  if (uVar6 != 0) {
    if ((*puVar4 & 1) == 0) {
      *puVar4 = *puVar4 + 1;
    }
    uVar1 = *puVar4;
    do {
      bVar2 = false;
      uVar5 = 3;
      if (3 < (int)SQRT((double)uVar1) + 1) {
        do {
          trapWord(6,uVar5,0);
          if ((ulonglong)*puVar4 ==
              (longlong)(int)((ulonglong)*puVar4 / (uVar5 & 0xffffffff)) * (longlong)(int)uVar5) {
            bVar2 = true;
            break;
          }
          uVar5 = uVar5 + 2;
        } while ((int)uVar5 < (int)SQRT((double)uVar1) + 1);
      }
      if ((!bVar2) && (*puVar4 != puVar4[-1])) goto code_r0x82fdff60;
      *puVar4 = *puVar4 + 2;
    } while( true );
  }
  if ((*param_4 & 1) == 0) {
    *param_4 = *param_4 + 1;
  }
  uVar1 = *param_4;
  do {
    bVar2 = false;
    uVar5 = 3;
    if (3 < (int)SQRT((double)uVar1) + 1) {
      do {
        trapWord(6,uVar5,0);
        if ((ulonglong)*param_4 ==
            (longlong)(int)((ulonglong)*param_4 / (uVar5 & 0xffffffff)) * (longlong)(int)uVar5) {
          bVar2 = true;
          break;
        }
        uVar5 = uVar5 + 2;
      } while ((int)uVar5 < (int)SQRT((double)uVar1) + 1);
    }
    if ((!bVar2) && (*param_4 != 0)) break;
    *param_4 = *param_4 + 2;
  } while( true );
code_r0x82fdff60:
  uVar6 = uVar6 + 1;
  if (param_3 <= uVar6) {
    return;
  }
  goto code_r0x82fdfdf8;
}

