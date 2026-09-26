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
extern unsigned int lbl_820544A8;


ulonglong fn_829B5140(ulonglong param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 == (byte *)0x0) {
    param_1 = 0;
  }
  else {
    param_1 = ~param_1;
    if (7 < (param_3 & 0xffffffff)) {
      uVar7 = (param_3 & 0xffffffff) >> 3;
      do {
        param_3 = param_3 - 8;
        uVar6 = (ulonglong)
                *(uint *)(&lbl_820544A8 + ((uint)(((*param_2 ^ param_1) & 0xffffffff) << 2) & 0x3fc)
                         ) ^ (param_1 & 0xffffffff) >> 8;
        pbVar1 = param_2 + 3;
        pbVar2 = param_2 + 4;
        pbVar3 = param_2 + 5;
        uVar6 = (ulonglong)*(uint *)(&lbl_820544A8 + ((uint)((param_2[1] ^ uVar6) << 2) & 0x3fc)) ^
                uVar6 >> 8;
        pbVar4 = param_2 + 6;
        pbVar5 = param_2 + 7;
        uVar6 = (ulonglong)*(uint *)(&lbl_820544A8 + ((uint)((param_2[2] ^ uVar6) << 2) & 0x3fc)) ^
                uVar6 >> 8;
        param_2 = param_2 + 8;
        uVar6 = (ulonglong)*(uint *)(&lbl_820544A8 + ((uint)((*pbVar1 ^ uVar6) << 2) & 0x3fc)) ^
                uVar6 >> 8;
        uVar6 = (ulonglong)*(uint *)(&lbl_820544A8 + ((uint)((*pbVar2 ^ uVar6) << 2) & 0x3fc)) ^
                uVar6 >> 8;
        uVar6 = (ulonglong)*(uint *)(&lbl_820544A8 + ((uint)((*pbVar3 ^ uVar6) << 2) & 0x3fc)) ^
                uVar6 >> 8;
        uVar6 = (ulonglong)*(uint *)(&lbl_820544A8 + ((uint)((*pbVar4 ^ uVar6) << 2) & 0x3fc)) ^
                uVar6 >> 8;
        param_1 = (ulonglong)*(uint *)(&lbl_820544A8 + ((uint)((*pbVar5 ^ uVar6) << 2) & 0x3fc)) ^
                  uVar6 >> 8;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if ((param_3 & 0xffffffff) != 0) {
      param_2 = param_2 + -1;
      do {
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
        param_1 = (ulonglong)
                  *(uint *)(&lbl_820544A8 +
                           ((uint)(((*param_2 ^ param_1) & 0xffffffff) << 2) & 0x3fc)) ^
                  (param_1 & 0xffffffff) >> 8;
      } while (param_3 != 0);
    }
    param_1 = ~param_1;
  }
  return param_1;
}

