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
extern unsigned int lbl_8201DFEC;
extern unsigned int lbl_82057B98;
extern unsigned int lbl_821AAD20;


bool fn_829E5BC0(double param_1,int *param_2)

{
  float fVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  if (param_1 <= (double)lbl_8201DFEC) {
    uVar3 = 0;
    iVar4 = 0;
    do {
      iVar5 = 0;
      lVar6 = 5;
      do {
        if ((double)lbl_8201DFEC < (double)*(float *)((iVar4 + iVar5) * 4 + *(int *)(*param_2 + 4)))
        {
          uVar3 = uVar3 + 1;
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      iVar4 = iVar4 + 5;
    } while (iVar4 < 0x19);
    if (uVar3 < 4) {
      iVar4 = 0x264;
      lVar6 = 0x80;
      fVar1 = lbl_821AAD20;
      do {
        puVar2 = (uint *)(iVar4 + *(int *)(*param_2 + 4));
        iVar4 = iVar4 + 4;
        fVar1 = (float)*puVar2 + fVar1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      return lbl_82057B98 <
             fVar1 / (float)(((longlong)param_2[0xd] * (longlong)param_2[0xc] & 0xffffffffU) >> 1);
    }
  }
  return true;
}

