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


void fn_82510AC8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar6 = param_1;
  if (param_1 != param_2) {
    while (puVar8 = puVar6 + 4, puVar8 != param_2) {
      uVar1 = *puVar8;
      uVar2 = puVar6[5];
      uVar3 = puVar6[6];
      uVar4 = puVar6[7];
      puVar7 = puVar8;
      if (uVar1 < *param_1) {
        while (param_1 != puVar7) {
          *puVar7 = puVar7[-4];
          puVar7[1] = puVar7[-3];
          puVar7[2] = puVar7[-2];
          puVar7[3] = puVar7[-1];
          puVar7 = puVar7 + -4;
        }
        *param_1 = uVar1;
        param_1[1] = uVar2;
        param_1[2] = uVar3;
        param_1[3] = uVar4;
        puVar6 = puVar8;
      }
      else {
        uVar5 = *puVar6;
        while (uVar1 < uVar5) {
          *puVar7 = *puVar6;
          puVar7[1] = puVar6[1];
          puVar7[2] = puVar6[2];
          puVar7[3] = puVar6[3];
          uVar5 = puVar6[-4];
          puVar7 = puVar6;
          puVar6 = puVar6 + -4;
        }
        *puVar7 = uVar1;
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        puVar6 = puVar8;
      }
    }
  }
  return;
}

