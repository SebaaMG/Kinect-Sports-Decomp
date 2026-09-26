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
extern unsigned int fStack_70;
extern int fn_825889E0();
extern int fn_8263FB88();
extern unsigned int lbl_8320A898;
extern unsigned int uStack00000038;


void fn_82588890(double param_1,undefined8 param_2,short *param_3,short *param_4,float *param_5,
                  undefined4 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined4 uVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  int iVar5;
  double dVar6;
  undefined8 uStack00000038;
  float fStack_70;
  
  iVar5 = 0;
  psVar4 = param_3;
  if (*param_3 != 0) {
    do {
      if (param_4 <= psVar4) break;
      if (*psVar4 != 0x20) {
        iVar5 = iVar5 + 1;
      }
      psVar4 = psVar4 + 1;
    } while (*psVar4 != 0);
    if (iVar5 != 0) {
      fStack_70 = *param_5;
      dVar6 = (double)fStack_70;
      uVar1 = *param_6;
      uStack00000038 = param_8;
      lVar3 = fn_8263FB88(lbl_8320A898,0xd,iVar5 << 2,0x14);
      if (-1 < (longlong)-(ulonglong)(lVar3 == 0)) {
        sVar2 = *param_3;
        while( true ) {
          if ((sVar2 == 0) || (param_4 <= param_3)) break;
          if (sVar2 == 0x20) {
            fStack_70 = (float)(dVar6 + param_1);
          }
          else {
            fn_825889E0(param_2,sVar2,param_9);
          }
          dVar6 = (double)fStack_70;
          param_3 = param_3 + 1;
          sVar2 = *param_3;
        }
        *(undefined4 *)(lbl_8320A898 + 0x30) = *(undefined4 *)(lbl_8320A898 + 0x3554);
      }
      *param_5 = (float)dVar6;
      *param_6 = uVar1;
    }
  }
  return;
}

