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
extern int fn_824B5770();
extern unsigned int lbl_821CC160;


undefined8 fn_824D7000(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  iVar1 = *(int *)(param_1 + 0x108);
  iVar2 = *(int *)(param_1 + 0x10c);
  bVar3 = false;
  bVar4 = false;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x44) != 0)) {
    bVar3 = true;
    *(undefined4 *)(iVar1 + 0x44) = 0;
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x44) != 0)) {
    bVar4 = true;
    *(undefined4 *)(iVar2 + 0x44) = 0;
  }
  if ((!bVar3) && (!bVar4)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x108);
  dVar6 = (double)lbl_821CC160;
  dVar5 = dVar6;
  if (iVar1 != 0) {
    dVar5 = (double)fn_824B5770(iVar1,*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x54),
                                 *(undefined4 *)(iVar1 + 0x58));
  }
  iVar1 = *(int *)(param_1 + 0x10c);
  if (iVar1 != 0) {
    dVar6 = (double)fn_824B5770(iVar1,*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x54),
                                 *(undefined4 *)(iVar1 + 0x58));
  }
  if (bVar3) {
    if (!bVar4) {
      *param_2 = (float)dVar5;
      return 1;
    }
    if (ABS(dVar6) < ABS(dVar5)) {
      dVar6 = dVar5;
    }
  }
  else if (!bVar4) {
    return 1;
  }
  *param_2 = (float)dVar6;
  return 1;
}

