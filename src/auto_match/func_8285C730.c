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
extern unsigned int lbl_821AAD20;


undefined8 fn_8285C730(int param_1,uint param_2,int param_3,uint param_4,byte *param_5)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 uVar7;
  uint uVar8;
  
  param_2 = param_2 & 0xff;
  uVar7 = 2;
  uVar4 = 0;
  if (*param_5 < param_2) {
    uVar4 = (uint)*param_5;
  }
  uVar8 = 0;
  if (param_2 != 0) {
    do {
      bVar1 = false;
      bVar2 = false;
      iVar3 = 0;
      if ((param_4 & 0xffff) != 0) {
        pfVar6 = (float *)(param_3 + 4);
        pfVar5 = (float *)(uVar4 * 0x10 + param_1);
        do {
          if ((*pfVar5 * pfVar6[-1] + pfVar5[1] * *pfVar6 + pfVar5[2] * pfVar6[1]) - pfVar5[3] <=
              lbl_821AAD20) {
            bVar1 = true;
          }
          else {
            bVar2 = true;
          }
          iVar3 = iVar3 + 1;
          pfVar6 = pfVar6 + 3;
        } while (iVar3 < (int)(param_4 & 0xffff));
      }
      if (!bVar1) {
        *param_5 = (byte)uVar4;
        return 0;
      }
      if (bVar2) {
        uVar7 = 1;
      }
      uVar4 = uVar4 + 1 & 0xff;
      uVar8 = uVar8 + 1 & 0xffff;
      uVar4 = -(uint)(param_2 != uVar4) & uVar4;
    } while (uVar8 < param_2);
  }
  return uVar7;
}

