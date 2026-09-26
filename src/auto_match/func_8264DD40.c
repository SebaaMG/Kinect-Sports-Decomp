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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern int fn_82643A48();


void fn_8264DD40(int param_1,int param_2)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined2 *puVar5;
  longlong lVar6;
  
  iVar2 = fn_82643A48(param_1,0x585);
  *(undefined4 *)(iVar2 + 4) = 0x11921;
  iVar3 = 0;
  puVar5 = (undefined2 *)(param_2 + 0x3fe);
  *(undefined4 *)(iVar2 + 8) = 1;
  lVar6 = 0x80;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0x1927;
  piVar4 = (int *)(iVar2 + 0x14);
  *piVar4 = 7;
  do {
    piVar4[1] = 0x29924;
    piVar4[2] = CONCAT22(puVar5[-0x1fe],puVar5[-0x1ff]);
    iVar3 = iVar3 + 1;
    piVar4[3] = CONCAT22(puVar5[-0xfe],puVar5[-0xff]);
    puVar1 = puVar5 + 1;
    puVar5 = puVar5 + 2;
    piVar4[4] = CONCAT22(*puVar5,*puVar1);
    piVar4[5] = -0x3ffabb00;
    piVar4[6] = 7;
    piVar4[7] = 0x1924;
    piVar4[8] = 0;
    piVar4[9] = -1;
    piVar4[10] = 0x1922;
    piVar4 = piVar4 + 0xb;
    *piVar4 = iVar3;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(int **)(param_1 + 0x30) = piVar4;
  return;
}

