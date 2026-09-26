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
extern int fn_82F63BA0();
extern int fn_82F68240();


uint fn_82F69960(short *param_1,short *param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  uint uVar4;
  short *psVar5;
  short sVar6;
  
  if (((param_3 == (undefined4 *)0x0) || (param_2 == (short *)0x0)) ||
     ((param_1 == (short *)0x0 && (param_1 = (short *)*param_3, param_1 == (short *)0x0)))) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    uVar4 = 0;
  }
  else {
    sVar6 = *param_1;
    if (sVar6 != 0) {
      sVar1 = *param_2;
      psVar3 = param_2;
      do {
        while ((sVar1 != 0 && (sVar1 != sVar6))) {
          sVar1 = psVar3[1];
          psVar3 = psVar3 + 1;
        }
        if (*psVar3 == 0) break;
        param_1 = param_1 + 1;
        sVar6 = *param_1;
        sVar1 = *param_2;
        psVar3 = param_2;
      } while (sVar6 != 0);
    }
    psVar3 = param_1;
    if (*param_1 != 0) {
      do {
        psVar5 = param_2;
        if (*param_2 != 0) {
          sVar6 = *param_2;
          do {
            if (sVar6 == *psVar3) break;
            psVar5 = psVar5 + 1;
            sVar6 = *psVar5;
          } while (sVar6 != 0);
        }
        if (*psVar5 != 0) {
          *psVar3 = 0;
          psVar3 = psVar3 + 1;
          break;
        }
        psVar3 = psVar3 + 1;
      } while (*psVar3 != 0);
    }
    *param_3 = psVar3;
    uVar4 = -(uint)(psVar3 != param_1) & (uint)param_1;
  }
  return uVar4;
}

