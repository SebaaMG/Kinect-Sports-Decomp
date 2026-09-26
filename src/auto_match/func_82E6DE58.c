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


void fn_82E6DE58(int *param_1,int param_2,int param_3)

{
  int iVar1;
  short sVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *param_1;
  if (*(short *)(iVar1 + 0x22) == 0) {
    return;
  }
  sVar2 = 0;
  puVar4 = (undefined4 *)(param_3 + -0x44);
  puVar3 = (undefined4 *)(param_2 + -0x44);
  do {
    sVar2 = sVar2 + 1;
    puVar3[0x4a] = puVar4[0x4a];
    puVar3[0x5c] = puVar4[0x5c];
    puVar3[0x5d] = puVar4[0x5d];
    puVar3[0x5e] = puVar4[0x5e];
    puVar3[0x5f] = puVar4[0x5f];
    puVar4 = puVar4 + 0x74;
    puVar3 = puVar3 + 0x74;
    *puVar3 = *puVar4;
  } while ((int)sVar2 < (int)(uint)*(ushort *)(iVar1 + 0x22));
  return;
}

