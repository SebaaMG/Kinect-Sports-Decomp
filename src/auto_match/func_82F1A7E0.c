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


void fn_82F1A7E0(int param_1,uint param_2,int param_3,int param_4,undefined2 *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  
  uVar2 = *(uint *)(param_1 + 0x2d0) * 2;
  if ((int)param_2 < 4) {
    iVar3 = *(int *)(param_1 + 0x908);
    param_3 = (((int)param_2 >> 1) + param_4 * 2) * uVar2 + (param_2 & 1) + param_3 * 2;
  }
  else {
    iVar1 = (int)(uVar2 | *(uint *)(param_1 + 0x2d0) >> 0x1f) >> 1;
    if (param_2 == 4) {
      iVar3 = *(int *)(param_1 + 0x90c);
      param_3 = iVar1 * param_4 + param_3;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x910);
      param_3 = iVar1 * param_4 + param_3;
    }
  }
  puVar4 = (undefined2 *)(param_3 * 0x20 + iVar3);
  *puVar4 = *param_5;
  puVar4[8] = *param_5;
  puVar4[1] = param_5[1];
  puVar4[9] = param_5[8];
  puVar4[2] = param_5[2];
  puVar4[10] = param_5[0x10];
  puVar4[3] = param_5[3];
  puVar4[0xb] = param_5[0x18];
  puVar4[4] = param_5[4];
  puVar4[0xc] = param_5[0x20];
  puVar4[5] = param_5[5];
  puVar4[0xd] = param_5[0x28];
  puVar4[6] = param_5[6];
  puVar4[0xe] = param_5[0x30];
  puVar4[7] = param_5[7];
  puVar4[0xf] = param_5[0x38];
  return;
}

