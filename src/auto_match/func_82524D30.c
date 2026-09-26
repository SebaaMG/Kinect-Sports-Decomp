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
extern int fn_827EFC90();
extern unsigned int lbl_821CA460;
extern unsigned int *lbl_832767EC;
extern unsigned int uRam8327f254;


undefined8 fn_82524D30(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  
  puVar1 = (uint *)*lbl_832767EC;
  if (*puVar1 != 0) {
    uVar4 = 0;
    dVar5 = (double)lbl_821CA460;
    do {
      iVar2 = (uVar4 + 0x195) * 0x10;
      if (((((double)*(float *)(iVar2 + param_1) != dVar5) ||
           (iVar3 = uVar4 * 0x10 + param_1, (double)*(float *)(iVar3 + 0x1954) != dVar5)) ||
          ((double)*(float *)(iVar3 + 0x1958) != dVar5)) &&
         ((*(int *)(param_1 + 0x319b8) == 0 ||
          (((((uVar4 != 0 && (uVar4 != 0x1c)) &&
             ((uVar4 != 0x1d && ((uVar4 != 8 && (uVar4 != 0x24)))))) && (uVar4 != 1)) &&
           (uVar4 != 2)))))) {
        fn_827EFC90(*(undefined4 *)((param_2 + 0x2db) * 4 + param_1),uVar4,uRam8327f254,
                          iVar2 + param_1);
      }
      uVar4 = uVar4 + 1 & 0xffff;
    } while (uVar4 < *puVar1);
  }
  return 0;
}

