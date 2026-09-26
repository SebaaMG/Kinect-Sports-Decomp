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


undefined4 fn_82F685A8(ulonglong param_1,char *param_2,uint param_3,ulonglong param_4,int param_5)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  char cVar7;
  char *pcVar8;
  undefined4 uVar9;
  
  uVar3 = (uint)param_4;
  if (param_2 == (char *)0x0) {
    puVar2 = (undefined4 *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    return 0x16;
  }
  if (param_3 == 0) {
LAB_82f685e0:
    puVar2 = (undefined4 *)fn_82F68240();
    uVar9 = 0x16;
  }
  else {
    *param_2 = '\0';
    if ((param_5 == 0 ^ 1) + 1 < param_3) {
      if ((uVar3 < 2) || (0x24 < uVar3)) goto LAB_82f685e0;
      pcVar4 = param_2;
      if (param_5 != 0) {
        pcVar4 = param_2 + 1;
        *param_2 = '-';
        param_1 = -param_1;
      }
      uVar5 = (uint)(param_5 != 0);
      pcVar1 = pcVar4;
      do {
        pcVar8 = pcVar1;
        trapWord(6,param_4,0);
        uVar6 = param_1 - (longlong)(int)((param_1 & 0xffffffff) / (param_4 & 0xffffffff)) *
                          (longlong)(int)uVar3;
        param_1 = (param_1 & 0xffffffff) / (param_4 & 0xffffffff);
        trapWord(6,param_4,0);
        cVar7 = (char)uVar6;
        if ((uVar6 & 0xffffffff) < 10) {
          cVar7 = cVar7 + '0';
        }
        else {
          cVar7 = cVar7 + 'W';
        }
        *pcVar8 = cVar7;
        uVar5 = uVar5 + 1;
      } while ((param_1 != 0) && (pcVar1 = pcVar8 + 1, uVar5 < param_3));
      if (uVar5 < param_3) {
        pcVar8[1] = '\0';
        do {
          cVar7 = *pcVar8;
          *pcVar8 = *pcVar4;
          pcVar8 = pcVar8 + -1;
          *pcVar4 = cVar7;
          pcVar4 = pcVar4 + 1;
        } while (pcVar4 < pcVar8);
        return 0;
      }
      *param_2 = '\0';
    }
    puVar2 = (undefined4 *)fn_82F68240();
    uVar9 = 0x22;
  }
  *puVar2 = uVar9;
  fn_82F63BA0();
  return uVar9;
}

