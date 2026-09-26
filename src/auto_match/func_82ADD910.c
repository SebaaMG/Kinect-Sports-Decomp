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
extern int fn_82ADD198();
extern int fn_82ADD610();
extern int fn_82B81D80();


void fn_82ADD910(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar4;
  ulonglong uVar3;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar5 = *(uint *)(param_2 + 0x10);
  uVar1 = *(uint *)(param_2 + 8);
  uVar10 = (ulonglong)uVar5 & 0xffff;
  iVar4 = fn_82ADD610();
  uVar6 = ((ulonglong)(uVar5 >> 0x10) & 7) + uVar10;
  uVar7 = 0;
  uVar9 = 0;
  uVar5 = 1;
  if (uVar10 < uVar6) {
    uVar8 = 0;
    do {
      if ((uVar5 & uVar1 >> 1 & 0xf) != 0) {
        uVar3 = fn_82ADD198(param_1,uVar10);
        uVar2 = (*(uint *)(iVar4 + 0xc0) >> 0xe & 0xff) >>
                ((uint)((*(ulonglong *)(((uint)uVar3 >> 2 & 0x1ffffff8) + *(int *)(param_1 + 0x2b4))
                         >> ((uVar3 & 0x7fffffff) * 2 + (uVar3 & 0x7fffffe0) * -2 & 0x7f) &
                        0xffffffff) << 1) & 6) & 3;
        uVar9 = 1 << uVar2 | uVar9;
        uVar7 = uVar7 & ~(3 << (uVar8 & 0x3f)) | uVar2 << (uVar8 & 0x3f);
        uVar8 = uVar8 + 2;
      }
      uVar10 = uVar10 + 1;
      uVar5 = uVar5 << 1;
    } while ((uVar10 & 0xffffffff) < uVar6);
  }
  fn_82B81D80(param_2,*(uint *)(iVar4 + 0xc0) >> 0x12 & 0x3f0 | uVar9 & 0xf,uVar7);
  return;
}

