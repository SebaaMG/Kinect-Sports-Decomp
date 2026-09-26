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


ulonglong fn_8281EC50(uint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  
  lVar14 = -((ulonglong)param_1[0xf] & 0x7f800000) + 0x7f800000;
  lVar12 = -((ulonglong)param_1[0xe] & 0x7f800000) + 0x7f800000;
  lVar10 = -((ulonglong)param_1[0xd] & 0x7f800000) + 0x7f800000;
  lVar8 = -((ulonglong)param_1[0xc] & 0x7f800000) + 0x7f800000;
  lVar5 = -((ulonglong)param_1[0xb] & 0x7f800000) + 0x7f800000;
  lVar2 = -((ulonglong)param_1[10] & 0x7f800000) + 0x7f800000;
  lVar16 = -((ulonglong)param_1[9] & 0x7f800000) + 0x7f800000;
  lVar13 = -((ulonglong)param_1[8] & 0x7f800000) + 0x7f800000;
  lVar1 = -((ulonglong)param_1[7] & 0x7f800000) + 0x7f800000;
  lVar6 = -((ulonglong)param_1[6] & 0x7f800000) + 0x7f800000;
  lVar3 = -((ulonglong)param_1[5] & 0x7f800000) + 0x7f800000;
  lVar7 = -((ulonglong)param_1[4] & 0x7f800000) + 0x7f800000;
  lVar11 = -((ulonglong)param_1[3] & 0x7f800000) + 0x7f800000;
  lVar9 = -((ulonglong)param_1[2] & 0x7f800000) + 0x7f800000;
  lVar4 = -((ulonglong)param_1[1] & 0x7f800000) + 0x7f800000;
  lVar15 = -((ulonglong)*param_1 & 0x7f800000) + 0x7f800000;
  return lVar14 + (-(ulonglong)(lVar14 == 0) -
                  (-((ulonglong)param_1[0xf] & 0x7f800000) + 0x7f7fffff)) &
         lVar12 + (-(ulonglong)(lVar12 == 0) -
                  (-((ulonglong)param_1[0xe] & 0x7f800000) + 0x7f7fffff)) &
         lVar10 + (-(ulonglong)(lVar10 == 0) -
                  (-((ulonglong)param_1[0xd] & 0x7f800000) + 0x7f7fffff)) &
         lVar8 + (-(ulonglong)(lVar8 == 0) - (-((ulonglong)param_1[0xc] & 0x7f800000) + 0x7f7fffff))
         & lVar5 + (-(ulonglong)(lVar5 == 0) -
                   (-((ulonglong)param_1[0xb] & 0x7f800000) + 0x7f7fffff)) &
         lVar2 + (-(ulonglong)(lVar2 == 0) - (-((ulonglong)param_1[10] & 0x7f800000) + 0x7f7fffff))
         & lVar16 + (-(ulonglong)(lVar16 == 0) -
                    (-((ulonglong)param_1[9] & 0x7f800000) + 0x7f7fffff)) &
         lVar13 + (-(ulonglong)(lVar13 == 0) - (-((ulonglong)param_1[8] & 0x7f800000) + 0x7f7fffff))
         & lVar1 + (-(ulonglong)(lVar1 == 0) - (-((ulonglong)param_1[7] & 0x7f800000) + 0x7f7fffff))
         & lVar6 + (-(ulonglong)(lVar6 == 0) - (-((ulonglong)param_1[6] & 0x7f800000) + 0x7f7fffff))
         & lVar3 + (-(ulonglong)(lVar3 == 0) - (-((ulonglong)param_1[5] & 0x7f800000) + 0x7f7fffff))
         & lVar7 + (-(ulonglong)(lVar7 == 0) - (-((ulonglong)param_1[4] & 0x7f800000) + 0x7f7fffff))
         & lVar11 + (-(ulonglong)(lVar11 == 0) -
                    (-((ulonglong)param_1[3] & 0x7f800000) + 0x7f7fffff)) &
         lVar9 + (-(ulonglong)(lVar9 == 0) - (-((ulonglong)param_1[2] & 0x7f800000) + 0x7f7fffff)) &
         lVar4 + (-(ulonglong)(lVar4 == 0) - (-((ulonglong)param_1[1] & 0x7f800000) + 0x7f7fffff)) &
         lVar15 + (-(ulonglong)(lVar15 == 0) - (-((ulonglong)*param_1 & 0x7f800000) + 0x7f7fffff)) &
         1;
}

