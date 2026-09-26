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


void fn_82805F78(int param_1,int param_2,int *param_3,byte *param_4,int *param_5,uint param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ulonglong uVar5;
  
  uVar5 = 0x80;
  iVar3 = param_6 << 2;
  bVar1 = **(byte **)(param_2 + 0x24);
  do {
    if (*(ushort *)(param_1 + 0x1e) <= param_6) {
      return;
    }
    if ((uVar5 & bVar1) != 0) {
      if ((uVar5 >> 3 & (ulonglong)bVar1) == 0) {
        iVar2 = **(int **)(param_2 + 0x2c);
        *(int **)(param_2 + 0x2c) = *(int **)(param_2 + 0x2c) + 1;
        bVar4 = **(byte **)(param_2 + 0x30);
        *(byte **)(param_2 + 0x30) = *(byte **)(param_2 + 0x30) + 1;
        *(float *)*param_3 =
             ((float)(((((uint *)*param_5)[1] << 1) << (0x1f - *param_4 & 0x3f) |
                      *(uint *)*param_5 >> (*param_4 & 0x3f)) & (1 << (bVar4 & 0x3f)) - 1U) +
             (float)(longlong)iVar2) * *(float *)(*(int *)(param_1 + 4) + iVar3);
        bVar4 = *param_4 + bVar4;
        *param_4 = bVar4 & 0x1f;
        *param_5 = (bVar4 >> 3 & 0x1ffffffc) + *param_5;
      }
      else {
        *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 4;
      }
    }
    uVar5 = uVar5 >> 1;
    param_6 = param_6 + 1;
    iVar3 = iVar3 + 4;
    *param_3 = *param_3 + 4;
  } while (uVar5 != 0x10);
  return;
}

