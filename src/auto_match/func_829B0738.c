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


void fn_829B0738(uint *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  
  cVar3 = *(char *)(param_1 + 2);
  uVar5 = *param_1;
  uVar7 = (ulonglong)uVar5;
  if (((cVar3 == '\x02') && (param_3 != 0)) && (*(char *)((int)param_1 + 9) == '\b')) {
    if (uVar7 != 0) {
      pbVar6 = param_2 + -1;
      do {
        bVar4 = *param_2;
        pbVar1 = param_2 + 1;
        pbVar2 = param_2 + 2;
        param_2 = param_2 + 3;
        pbVar6 = pbVar6 + 1;
        *pbVar6 = *(byte *)((((bVar4 & 0xf8) << 5 | *pbVar1 & 0x1ff8) << 2 | (int)(uint)*pbVar2 >> 3
                            ) + param_3);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  else {
    if (((cVar3 != '\x06') || (param_3 == 0)) || (*(char *)((int)param_1 + 9) != '\b')) {
      if (cVar3 != '\x03') {
        return;
      }
      if (param_4 == 0) {
        return;
      }
      if (*(char *)((int)param_1 + 9) != '\b') {
        return;
      }
      if (uVar7 != 0) {
        param_2 = param_2 + -1;
        do {
          pbVar6 = param_2 + 1;
          param_2 = param_2 + 1;
          *param_2 = *(byte *)((uint)*pbVar6 + param_4);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        return;
      }
      return;
    }
    if (uVar7 != 0) {
      pbVar6 = param_2 + -1;
      do {
        bVar4 = *param_2;
        pbVar1 = param_2 + 1;
        pbVar2 = param_2 + 2;
        param_2 = param_2 + 4;
        pbVar6 = pbVar6 + 1;
        *pbVar6 = *(byte *)((((bVar4 & 0xf8) << 5 | *pbVar1 & 0x1ff8) << 2 | (int)(uint)*pbVar2 >> 3
                            ) + param_3);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  *(undefined1 *)(param_1 + 2) = 3;
  *(undefined1 *)((int)param_1 + 10) = 1;
  *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 9);
  param_1[1] = *(byte *)((int)param_1 + 9) * uVar5 + 7 >> 3;
  return;
}

