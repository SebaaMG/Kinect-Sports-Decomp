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


void fn_82EFDF68(int param_1,int param_2,byte *param_3,int param_4,int param_5,longlong param_6,
                  longlong param_7)

{
  byte bVar1;
  byte *pbVar2;
  short *psVar3;
  byte *pbVar4;
  longlong lVar5;
  
  if (0 < (int)param_7) {
    psVar3 = (short *)(param_5 + -2);
    do {
      if (0 < (int)param_6) {
        lVar5 = param_6;
        pbVar4 = param_3;
        do {
          pbVar2 = pbVar4 + (param_1 - (int)param_3);
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          psVar3 = psVar3 + 1;
          *psVar3 = (ushort)*pbVar2 - (ushort)bVar1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      param_7 = param_7 + -1;
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
    } while (param_7 != 0);
  }
  return;
}

