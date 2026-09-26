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
extern int fn_825B7128();
extern int fn_8263A8C8();
extern unsigned int lbl_8320A898;


void fn_825B71D0(void)

{
  float *pfVar1;
  int iVar2;
  undefined2 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = 0;
  lVar5 = -0x7cd905f8;
  lVar4 = -0x7cd903e0;
  do {
    pfVar1 = (float *)lVar5;
    uVar3 = fn_825B7128((double)(pfVar1[3] * *pfVar1),(double)pfVar1[4],(double)pfVar1[5],lVar6);
    *(undefined2 *)((int)lVar4 + -0x200) = uVar3;
    iVar2 = (int)lVar5;
    uVar3 = fn_825B7128((double)(*(float *)(iVar2 + 4) * *(float *)(iVar2 + 0xc)),
                          (double)*(float *)(iVar2 + 0x10),(double)*(float *)(iVar2 + 0x14),lVar6);
    *(undefined2 *)lVar4 = uVar3;
    iVar2 = (int)lVar5;
    uVar3 = fn_825B7128((double)(*(float *)(iVar2 + 8) * *(float *)(iVar2 + 0xc)),
                          (double)*(float *)(iVar2 + 0x10),(double)*(float *)(iVar2 + 0x14),lVar6);
    *(undefined2 *)((int)lVar4 + 0x200) = uVar3;
    lVar4 = lVar4 + 2;
    lVar6 = lVar6 + 1;
  } while ((int)lVar4 < (int)lVar5 + 0x418);
  fn_8263A8C8(lbl_8320A898,lVar5 + 0x18);
  return;
}

