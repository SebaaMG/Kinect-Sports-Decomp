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
extern int fn_82230300();
extern int fn_822EE628();
extern int fn_822EF000();
extern int fn_822EF060();
extern int fn_822EF458();
extern unsigned int uStack_6c;


uint fn_822EF1A0(int param_1,undefined8 param_2,uint param_3,char *param_4)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar7;
  undefined4 ****ppppuVar8;
  undefined4 ****ppppuVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 ***apppuStack_80 [5];
  uint uStack_6c;
  undefined1 uVar6;
  
  pcVar1 = param_4;
  cVar3 = *param_4;
  while (cVar3 != '\0') {
    if (cVar3 == *param_4) {
      param_3 = param_3 + 1;
    }
    pcVar1 = pcVar1 + 1;
    cVar3 = *pcVar1;
  }
  fn_82230300(apppuStack_80,0,0);
  fn_822EE628(apppuStack_80,param_3,0);
  uVar5 = 0xfffffffe;
  uVar11 = 1;
  uVar10 = uStack_6c;
  ppppuVar9 = (undefined4 ****)apppuStack_80[0];
  do {
    bVar2 = false;
    iVar13 = 0;
    uVar12 = 0;
    if (param_3 != 0) {
      do {
        lVar7 = (longlong)param_4[iVar13];
        if (lVar7 != 0) {
          do {
            if ((int)lVar7 == (int)*param_4) break;
            iVar13 = iVar13 + 1;
            lVar7 = (longlong)param_4[iVar13];
          } while (lVar7 != 0);
        }
        ppppuVar8 = ppppuVar9;
        if (uVar10 < 0x10) {
          ppppuVar8 = apppuStack_80;
        }
        if (*(char *)((int)ppppuVar8 + uVar12) == '\0') {
          iVar13 = iVar13 + uVar11;
          if ((param_4[iVar13] == *param_4) || (param_4[iVar13] == '\0')) {
            uVar5 = uVar11;
            if (0x7e < uVar11) {
              uVar5 = 0x7f;
            }
            uVar6 = (undefined1)uVar5;
            uVar5 = uVar12;
            if (uVar10 < 0x10) {
              ppppuVar9 = apppuStack_80;
            }
          }
          else {
            cVar3 = fn_822EF458(param_1,param_2);
            if (cVar3 == '\0') {
              if (*(char *)(param_1 + 4) == '\0') {
                fn_822EF060(param_1);
              }
              if (param_4[iVar13] == *(char *)(param_1 + 5)) {
                bVar2 = true;
                goto code_r0x822ef34c;
              }
            }
            uVar4 = uVar11;
            if (0x7e < uVar11) {
              uVar4 = 0x7f;
            }
            uVar6 = (undefined1)uVar4;
            if (uVar10 < 0x10) {
              ppppuVar9 = apppuStack_80;
            }
          }
          *(undefined1 *)((int)ppppuVar9 + uVar12) = uVar6;
          uVar10 = uStack_6c;
          ppppuVar9 = (undefined4 ****)apppuStack_80[0];
        }
        else {
          ppppuVar8 = ppppuVar9;
          if (uVar10 < 0x10) {
            ppppuVar8 = apppuStack_80;
          }
          iVar13 = *(char *)((int)ppppuVar8 + uVar12) + iVar13;
        }
code_r0x822ef34c:
        uVar12 = uVar12 + 1;
      } while (uVar12 < param_3);
    }
    if ((!bVar2) || (cVar3 = fn_822EF458(param_1,param_2), cVar3 != '\0')) {
      fn_82230300(apppuStack_80,1,0);
      return uVar5;
    }
    uVar11 = uVar11 + 1;
    fn_822EF000(param_1);
    uVar5 = 0xffffffff;
  } while( true );
}

