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
extern unsigned int lbl_82002AE0;


undefined8 fn_82C2CFE8(int param_1,int param_2,uint param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  
  iVar6 = 0;
  fVar1 = lbl_82002AE0 / (float)(longlong)(1 << (*(ushort *)(param_1 + 0x6e) - 1 & 0x3f));
  if ((param_3 & 0xffff) != 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x22);
    iVar3 = 0;
    do {
      if (uVar5 != 0) {
        iVar8 = 0;
        pfVar7 = (float *)(iVar6 * 4 + param_2 + -4);
        do {
          iVar2 = iVar8 * 0x6f0;
          sVar4 = (short)iVar8 + 1;
          iVar6 = iVar6 + 1;
          iVar8 = (int)sVar4;
          pfVar7 = pfVar7 + 1;
          *pfVar7 = *(float *)(*(int *)(iVar2 + *(int *)(param_1 + 0x140) + 0x3c) + iVar3 * 4) *
                    fVar1;
          uVar5 = (uint)*(ushort *)(param_1 + 0x22);
        } while ((int)sVar4 < (int)uVar5);
      }
      sVar4 = (short)iVar3 + 1;
      iVar3 = (int)sVar4;
    } while ((int)sVar4 < (int)(param_3 & 0xffff));
  }
  return 0;
}

