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


void fn_82E6D818(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  ulonglong uVar4;
  
  iVar1 = *param_1;
  uVar4 = 0;
  if (*(int *)(iVar1 + 100) == 0) {
    if (0 < param_4) {
      pfVar3 = (float *)(param_3 + -4);
      do {
        iVar2 = (**(code **)(iVar1 + 0x20c))
                          (param_2,*(undefined4 *)(iVar1 + 0x58),*(undefined2 *)(iVar1 + 0x6e),uVar4
                          );
        param_4 = param_4 + -1;
        pfVar3 = pfVar3 + 1;
        *pfVar3 = (float)(longlong)iVar2;
        uVar4 = *(ushort *)(iVar1 + 0x22) + uVar4;
      } while (param_4 != 0);
    }
  }
  else {
    iVar2 = 0;
    if (3 < param_4) {
      pfVar3 = (float *)(param_3 + -4);
      do {
        iVar2 = iVar2 + 4;
        pfVar3[1] = (float)(longlong)(1 << (*(ushort *)(iVar1 + 0x6e) - 1 & 0x3f)) *
                    *(float *)((int)((uVar4 & 0xffffffff) << 2) + param_2);
        uVar4 = *(ushort *)(iVar1 + 0x22) + uVar4;
        pfVar3[2] = (float)(longlong)(1 << (*(ushort *)(iVar1 + 0x6e) - 1 & 0x3f)) *
                    *(float *)((int)((uVar4 & 0xffffffff) << 2) + param_2);
        uVar4 = *(ushort *)(iVar1 + 0x22) + uVar4;
        pfVar3[3] = (float)(longlong)(1 << (*(ushort *)(iVar1 + 0x6e) - 1 & 0x3f)) *
                    *(float *)((int)((uVar4 & 0xffffffff) << 2) + param_2);
        uVar4 = *(ushort *)(iVar1 + 0x22) + uVar4;
        pfVar3 = pfVar3 + 4;
        *pfVar3 = (float)(longlong)(1 << (*(ushort *)(iVar1 + 0x6e) - 1 & 0x3f)) *
                  *(float *)((int)((uVar4 & 0xffffffff) << 2) + param_2);
        uVar4 = *(ushort *)(iVar1 + 0x22) + uVar4;
      } while (iVar2 < param_4 + -3);
    }
    if (iVar2 < param_4) {
      param_4 = param_4 - iVar2;
      pfVar3 = (float *)(iVar2 * 4 + param_3 + -4);
      do {
        pfVar3 = pfVar3 + 1;
        *pfVar3 = (float)(longlong)(1 << (*(ushort *)(iVar1 + 0x6e) - 1 & 0x3f)) *
                  *(float *)((int)((uVar4 & 0xffffffff) << 2) + param_2);
        uVar4 = *(ushort *)(iVar1 + 0x22) + uVar4;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  return;
}

