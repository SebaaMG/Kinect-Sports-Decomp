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
extern int fn_82F63EA4();
extern int fn_82F6CB60();
extern int fn_82F70530();
extern int fn_82F70620();
extern unsigned int lbl_8329F724;
extern unsigned int lbl_8329F728;
extern unsigned int uStack_60;


undefined4 fn_82F63DC0(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_60;
  
  fn_82F6CB60();
  puVar1 = lbl_8329F728;
  puVar3 = lbl_8329F724;
  if (lbl_8329F728 <= lbl_8329F724) {
    iVar4 = (int)lbl_8329F724 - (int)lbl_8329F728;
    uVar5 = iVar4 + 4;
    if (3 < uVar5) {
      uVar2 = fn_82F70620(lbl_8329F728);
      if (uVar2 < uVar5) {
        uVar5 = uVar2;
        if (0x7ff < uVar2) {
          uVar5 = 0x800;
        }
        if (((uVar5 + uVar2 < uVar2) ||
            (puVar3 = (undefined4 *)fn_82F70530(puVar1), puVar3 == (undefined4 *)0x0)) &&
           ((uVar2 + 0x10 < uVar2 ||
            (puVar3 = (undefined4 *)fn_82F70530(puVar1), puVar3 == (undefined4 *)0x0))))
        goto LAB_82f63e84;
        lbl_8329F728 = puVar3;
        puVar3 = lbl_8329F728 + (iVar4 >> 2);
      }
      lbl_8329F724 = puVar3 + 1;
      *puVar3 = param_1;
      uStack_60 = param_1;
      goto LAB_82f63e8c;
    }
  }
LAB_82f63e84:
  uStack_60 = 0;
LAB_82f63e8c:
  fn_82F63EA4();
  return uStack_60;
}

