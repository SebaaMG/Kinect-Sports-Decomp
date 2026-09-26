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
extern int fn_82A6BAE0();


undefined8 fn_82A69A88(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  if (*(short *)(param_1 + 0x22) != 0) {
    iVar4 = 0;
    do {
      iVar3 = iVar4 * 0x6f0 + param_2;
      *(undefined1 *)(iVar3 + 0xb4) = 0;
      dVar5 = (double)fn_82A6BAE0(0,0);
      sVar2 = (short)iVar4 + 1;
      *(float *)(iVar3 + 0xc4) = (float)dVar5;
      iVar4 = (int)sVar2;
    } while ((int)sVar2 < (int)(uint)*(ushort *)(param_1 + 0x22));
    if (*(ushort *)(param_1 + 0x22) != 0) {
      iVar4 = 0;
      do {
        iVar3 = iVar4 * 0x6f0 + param_2;
        sVar2 = (short)iVar4 + 1;
        iVar4 = (int)sVar2;
        *(undefined4 *)(iVar3 + 0x1bc) = 0;
        *(undefined4 *)(iVar3 + 8) = 0;
        *(undefined4 *)(iVar3 + 0x1b4) = 1;
      } while ((int)sVar2 < (int)(uint)*(ushort *)(param_1 + 0x22));
      if (*(ushort *)(param_1 + 0x22) != 0) {
        iVar4 = 0;
        do {
          sVar2 = (short)*(uint *)(param_1 + 0x100);
          iVar3 = iVar4 * 0x6f0 + param_2;
          sVar1 = (short)iVar4 + 1;
          sVar2 = (sVar2 >> 1) + (ushort)(sVar2 < 0 && (*(uint *)(param_1 + 0x100) & 1) != 0);
          iVar4 = (int)sVar1;
          *(short *)(iVar3 + 0x7a) = sVar2;
          *(short *)(iVar3 + 0x7c) = sVar2;
          **(undefined2 **)(*(int *)(iVar3 + 0x1a8) + 8) = (short)*(undefined4 *)(param_1 + 0x100);
          *(undefined2 *)(iVar3 + 0x74) = 0;
        } while ((int)sVar1 < (int)(uint)*(ushort *)(param_1 + 0x22));
      }
    }
  }
  return 0;
}

