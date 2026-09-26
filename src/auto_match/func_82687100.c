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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_60;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_82686488();
extern int fn_82686500();
extern int fn_82686900();
extern int fn_82F65E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200561C;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_58;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82687100(int *param_1,undefined8 param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 auStack_60 [4];
  undefined4 *puStack_5c;
  undefined8 uStack_58;
  
  if (param_3 == 0) {
    fn_82686488();
  }
  else {
    if (param_3 < 8) {
      uVar6 = 8;
    }
    else {
      uStack_58 = (ulonglong)(param_3 - 1);
      dVar7 = (double)fn_82F65E20((double)uStack_58);
      uStack_58 = ((((U64)(uStack_58)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)((float)dVar7 * lbl_8200561C + lbl_82002AE0))) & ((U64)0xFFFFFFFF)) << 32));
      uVar6 = (ulonglong)(uint)(1 << ((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) & 0x3f));
    }
    uStack_58 = CONCAT44(2,(((U64)(uStack_58) >> 32) & 0xFFFFFFFF));
    puStack_5c = (undefined4 *)0x0;
    puStack_5c = (undefined4 *)
                 fn_8267B890(lbl_831E7E64,(uVar6 & 0xfffffff) * 0x10 + 8,&uStack_58);
    *puStack_5c = 0;
    puStack_5c[1] = (int)uVar6 + -1;
    if (uVar6 != 0) {
      iVar3 = 0;
      do {
        *(undefined4 *)((int)puStack_5c + iVar3 + 8) = 0xfffffffe;
        uVar6 = uVar6 - 1;
        iVar3 = iVar3 + 0x10;
      } while (uVar6 != 0);
    }
    if (*param_1 != 0) {
      iVar3 = 0;
      lVar5 = (ulonglong)*(uint *)(*param_1 + 4) + 1;
      do {
        iVar4 = iVar3 + *param_1;
        if (*(int *)(iVar4 + 8) != -2) {
          uVar2 = fn_82686500(auStack_60,iVar4 + 0x10);
          fn_82686900(&puStack_5c,param_2,iVar4 + 0x10,uVar2);
          *(undefined4 *)(iVar4 + 8) = 0xfffffffe;
        }
        lVar5 = lVar5 + -1;
        iVar3 = iVar3 + 0x10;
      } while (lVar5 != 0);
      fn_8267BE38(*param_1);
    }
    puVar1 = puStack_5c;
    puStack_5c = (undefined4 *)0x0;
    *param_1 = (int)puVar1;
    fn_82686488(&puStack_5c);
  }
  return;
}

