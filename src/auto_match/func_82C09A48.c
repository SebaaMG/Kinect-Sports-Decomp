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


undefined8 fn_82C09A48(byte *param_1,byte *param_2,ulonglong param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = (param_3 & 0xffffffff) >> 1 & 0x7fff;
  uVar3 = 0;
  bVar1 = false;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      if ((bVar1) && ((*param_2 < 0x30 || (0x39 < *param_2)))) {
        bVar1 = false;
        uVar3 = uVar3 + 1 & 0xffff;
      }
      if ((*param_1 == 0x25) && (bVar1 = true, param_4 != 0)) {
        *(undefined4 *)((int)(uVar3 << 2) + param_4) = 0;
      }
      if ((bVar1) && (param_4 != 0)) {
        iVar2 = (int)(uVar3 << 2);
        *(uint *)(iVar2 + param_4) = *(int *)(iVar2 + param_4) * 10 + (uint)*param_2 + -0x30;
      }
      if (((!bVar1) && (*param_1 != 0x3f)) && (*param_2 != *param_1)) {
        return 0xffffffffffffffff;
      }
      param_2 = param_2 + 2;
      param_1 = param_1 + 1;
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < uVar4);
  }
  return 0;
}

