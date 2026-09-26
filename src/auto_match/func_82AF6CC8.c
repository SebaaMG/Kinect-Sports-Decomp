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
extern unsigned int fStack_60;
extern int fn_82AA66A8();
extern int fn_82AEFCD8();
extern int fn_82AF4BA8();
extern int fn_82B86888();
extern unsigned int lbl_821AAD20;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AF6CC8(undefined8 param_1,int param_2,ulonglong param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  float *pfVar4;
  uint *puVar5;
  uint uVar6;
  int *piVar7;
  double dVar8;
  float fStack_60;
  float afStack_5c [23];
  
  uVar6 = 0;
  dVar8 = (double)lbl_821AAD20;
  piVar7 = (int *)(param_2 + 0x2c);
  do {
    if ((*(uint *)(param_2 + 8) >> 0x13 & 7) <= uVar6) {
      return;
    }
    puVar1 = (uint *)*piVar7;
    if ((*(uint *)(puVar1[3] + 8) & 0x3f80) == 16000) {
      uVar3 = *puVar1;
      fn_82AF4BA8(param_1,puVar1[3],uVar3 >> 0x19 & 7,uVar3 >> 5 & 0xff,uVar3 & 0x1f,&fStack_60);
      uVar3 = fn_82B86888(param_1,*puVar1 >> 0x19 & 7,&fStack_60,0);
      puVar5 = (uint *)(puVar1[3] + 4);
      for (puVar2 = (uint *)*puVar5; puVar2 != puVar1; puVar2 = (uint *)puVar2[2]) {
        puVar5 = puVar2 + 2;
      }
      *puVar5 = puVar1[2];
      puVar1[2] = *(uint *)(uVar3 + 4);
      *(uint **)(uVar3 + 4) = puVar1;
      puVar1[3] = uVar3;
      *puVar1 = *puVar1 & 0xffffe01f | 0x1c80;
      fn_82AEFCD8(uVar3);
      *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) | 0x1000000;
      if ((param_3 & 4) == 0) {
        uVar3 = *puVar1 & 0xffffffe0;
      }
      else {
        if ((double)fStack_60 < dVar8) {
          uVar3 = 1;
          if (0x2000000 < (*puVar1 & 0xe000000)) {
            pfVar4 = afStack_5c;
            do {
              if (dVar8 < (double)*pfVar4) {
                    /* WARNING: Subroutine does not return */
                fn_82AA66A8(param_1,0x12c0);
              }
              uVar3 = uVar3 + 1;
              pfVar4 = pfVar4 + 1;
            } while (uVar3 < (*puVar1 >> 0x19 & 7));
          }
          *puVar1 = *puVar1 & 0xffffffe0 | 6;
          goto LAB_82af6e3c;
        }
        uVar3 = *puVar1 & 0xffffffe0 | 2;
      }
      *puVar1 = uVar3;
    }
LAB_82af6e3c:
    uVar6 = uVar6 + 1;
    piVar7 = piVar7 + 1;
  } while( true );
}

