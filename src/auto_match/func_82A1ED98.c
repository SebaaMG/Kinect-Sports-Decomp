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
extern unsigned int *auStack_180;
extern int fn_82230000();
extern int fn_82A1E5C0();
extern int fn_82A1E9A0();
extern int fn_82A1EBB0();
extern int fn_82A339A8();
extern int fn_82A339B8();
extern int fn_82A33A98();
extern int fn_82A33BE8();
extern int fn_82F6CDF8();
extern int fn_82F6FBA8();
extern unsigned int lbl_83219D30;
extern unsigned int lbl_8329F724;
extern unsigned int lbl_8329F728;


void fn_82A1ED98(void)

{
  bool bVar1;
  int iVar3;
  char *pcVar4;
  undefined8 uVar2;
  undefined4 *puVar5;
  char cVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 auStack_180 [20];
  char acStack_130 [304];
  
  lbl_8329F724 = 0xffffffff;
  lbl_8329F728 = 0xffffffff;
  fn_82A33BE8();
  fn_82A1E9A0(1);
  iVar3 = fn_82A1EBB0();
  if (iVar3 != 0) {
    XamLoaderTerminateTitle();
  }
  fn_82F6FBA8();
  fn_82A33A98();
  fn_82A339B8(1);
  if (lbl_83219D30 == 0) {
    puVar5 = (undefined4 *)0x0;
    lVar9 = 0;
  }
  else {
    puVar5 = auStack_180;
    lVar9 = 0;
    pcVar4 = (char *)fn_82A339A8();
    if (pcVar4 != (char *)0x0) {
      pcVar7 = acStack_130;
      while( true ) {
        cVar6 = *pcVar4;
        while( true ) {
          lVar8 = (longlong)cVar6;
          if ((lVar8 == 0) || ((cVar6 != ' ' && (cVar6 != '\t')))) break;
          *pcVar7 = '\0';
          pcVar7 = pcVar7 + 1;
          pcVar4 = pcVar4 + 1;
          cVar6 = *pcVar4;
        }
        if (cVar6 == '\0') break;
        *puVar5 = pcVar7;
        lVar9 = lVar9 + 1;
        puVar5 = puVar5 + 1;
        bVar1 = false;
        do {
          if ((int)lVar8 == 0x22) {
            bVar1 = !bVar1;
          }
          else {
            *pcVar7 = cVar6;
            pcVar7 = pcVar7 + 1;
          }
          pcVar4 = pcVar4 + 1;
          cVar6 = *pcVar4;
          lVar8 = (longlong)cVar6;
        } while ((lVar8 != 0) && ((bVar1 || ((cVar6 != ' ' && (cVar6 != '\t'))))));
        if ((cVar6 == '\0') || (0x10 < (int)lVar9)) break;
      }
      *pcVar7 = '\0';
    }
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5 = auStack_180;
  }
  uVar2 = fn_82230000(lVar9,puVar5,0);
  fn_82F6CDF8();
  DbgPrint(0xffffffff82089248,uVar2);
  XamLoaderTerminateTitle();
  fn_82A1E5C0();
  return;
}

