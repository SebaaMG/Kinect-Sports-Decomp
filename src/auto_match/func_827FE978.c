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


undefined8
fn_827FE978(double param_1,double param_2,int param_3,uint param_4,uint *param_5,int param_6,
             uint param_7,undefined8 param_8,undefined8 param_9,char param_10)

{
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = 0;
  if (param_7 != 0) {
    pfVar2 = (float *)(param_6 + 8);
    if (param_10 == '\0') {
      do {
        dVar4 = (double)pfVar2[-1];
        uVar3 = 0;
        dVar5 = (double)*pfVar2;
        if (dVar4 < param_1) {
code_r0x827fe9b0:
          if ((dVar4 <= param_2) && (param_2 < dVar5)) {
            uVar3 = uVar3 | 2;
          }
        }
        else if (dVar4 <= param_2) {
          uVar3 = 1;
          goto code_r0x827fe9b0;
        }
        if ((param_1 < dVar5) && (dVar5 <= param_2)) {
          uVar3 = uVar3 | 4;
        }
        if (uVar3 != 0) {
          if (param_4 <= *param_5) {
code_r0x827fea38:
            *param_5 = 0;
            return 1;
          }
          *(uint *)(*param_5 * 0xc + param_3) = (uint)*(ushort *)(pfVar2 + -2);
          *(uint *)(*param_5 * 0xc + param_3 + 4) = uVar1;
          *(uint *)(*param_5 * 0xc + param_3 + 8) = uVar3;
          *param_5 = *param_5 + 1;
        }
        uVar1 = uVar1 + 1;
        pfVar2 = pfVar2 + 4;
      } while (uVar1 < param_7);
    }
    else {
      do {
        dVar4 = (double)*pfVar2;
        uVar3 = 0;
        dVar5 = (double)pfVar2[-1];
        if ((dVar4 <= param_1) && (param_2 <= dVar4)) {
          uVar3 = 1;
        }
        if ((dVar5 < param_2) && (param_2 <= dVar4)) {
          uVar3 = uVar3 | 2;
        }
        if ((dVar5 < param_1) && (param_2 <= dVar5)) {
          uVar3 = uVar3 | 4;
        }
        if (uVar3 != 0) {
          if (param_4 <= *param_5) goto code_r0x827fea38;
          *(uint *)(*param_5 * 0xc + param_3) = (uint)*(ushort *)(pfVar2 + -2);
          *(uint *)(*param_5 * 0xc + param_3 + 4) = uVar1;
          *(uint *)(*param_5 * 0xc + param_3 + 8) = uVar3;
          *param_5 = *param_5 + 1;
        }
        uVar1 = uVar1 + 1;
        pfVar2 = pfVar2 + 4;
      } while (uVar1 < param_7);
    }
  }
  return 0;
}

