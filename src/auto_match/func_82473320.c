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
extern int fn_82F4EC30();
extern int fn_82F53380();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_832766DC;


int fn_82473320(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int *piVar5;
  double dVar6;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar3 = 0;
    uVar4 = 0;
    piVar5 = (int *)(param_1 + 0x1c);
    dVar6 = (double)lbl_821CA460;
    do {
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((*piVar5 == 0) && (uVar1 = fn_82F4EC30(uVar4), (uVar1 & 0xffffffff) != 0)) {
        iVar2 = fn_82F53380(uVar1,param_1 + 0x2c,0,1);
        iVar3 = 0;
        if (iVar2 != 0) {
          iVar3 = iVar2;
        }
        *piVar5 = iVar3;
      }
      iVar3 = *piVar5;
      piVar5[1] = (int)(float)(dVar6 - (double)(*(float *)(iVar3 + 0x58) / *(float *)(iVar3 + 0x50))
                              );
      if (*(int *)(iVar3 + 0x5c) != 0) {
        piVar5[1] = (int)(float)dVar6;
      }
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(iVar3 + 0x5c);
      piVar5 = piVar5 + 2;
    } while ((uVar4 & 0xffffffff) < 2);
  }
  else {
    if (lbl_832766DC != 0) {
      *(undefined4 *)(param_1 + 0x30) = 1;
    }
    iVar3 = 1;
  }
  return iVar3;
}

