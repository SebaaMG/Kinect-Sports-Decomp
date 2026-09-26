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
extern unsigned int *auStack_60;
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_8305D830();
extern int fn_8305F7A0();
extern int fn_83066DD8();
extern unsigned int lbl_82005C88;
extern unsigned int lbl_821AAD20;


void fn_8305E4E8(void)

{
  int iVar2;
  char cVar3;
  undefined8 uVar1;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_60 [96];
  
  iVar2 = fn_82F6A548();
  iVar5 = 0;
  dVar9 = (double)lbl_82005C88;
  if (0 < *(int *)(iVar2 + 0x30)) {
    dVar8 = (double)lbl_821AAD20;
    do {
      cVar3 = fn_8305D830(iVar2,iVar5,auStack_60);
      if (cVar3 != '\0') {
        iVar4 = *(int *)(iVar2 + 0x30);
        iVar6 = 2;
        dVar10 = dVar8;
        dVar11 = dVar8;
        if (2 < iVar4) {
          do {
            uVar1 = fn_8305F7A0(*(undefined4 *)(iVar2 + 0x28),
                                 *(undefined4 *)
                                  (((iVar6 + iVar5) - ((iVar6 + iVar5) / iVar4) * iVar4) * 4 +
                                  *(int *)(iVar2 + 0x2c)));
            dVar7 = (double)fn_83066DD8(auStack_60,uVar1);
            if (dVar7 < dVar10) {
              dVar10 = dVar7;
            }
            if (dVar11 < dVar7) {
              dVar11 = dVar7;
            }
            iVar4 = *(int *)(iVar2 + 0x30);
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar4);
        }
        if ((double)(float)(dVar11 - dVar10) < dVar9) {
          dVar9 = (double)(float)(dVar11 - dVar10);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar2 + 0x30));
  }
  fn_82F6A594(dVar9);
  return;
}

