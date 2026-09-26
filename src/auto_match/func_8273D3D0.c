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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8273D6E8();
extern int fn_827B0A40();
extern int fn_82F65E20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200561C;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_48;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8273D3D0(int *param_1,undefined8 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  undefined4 *apuStack_50 [2];
  undefined8 uStack_48;
  
  if (param_3 == 0) {
    fn_827B0A40();
  }
  else {
    if (param_3 < 8) {
      uVar5 = 8;
    }
    else {
      uStack_48 = (ulonglong)(param_3 - 1);
      dVar6 = (double)fn_82F65E20((double)uStack_48);
      uStack_48 = ((((U64)(uStack_48)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)((float)dVar6 * lbl_8200561C + lbl_82002AE0))) & ((U64)0xFFFFFFFF)) << 32));
      uVar5 = (ulonglong)(uint)(1 << ((((U64)(uStack_48) >> 32) & 0xFFFFFFFF) & 0x3f));
    }
    uStack_48 = CONCAT44(2,(((U64)(uStack_48) >> 32) & 0xFFFFFFFF));
    apuStack_50[0] = (undefined4 *)0x0;
    apuStack_50[0] = (undefined4 *)fn_8267B890(lbl_831E7E64,uVar5 * 0xc + 8,&uStack_48);
    *apuStack_50[0] = 0;
    apuStack_50[0][1] = (int)uVar5 + -1;
    if (uVar5 != 0) {
      iVar2 = 0;
      do {
        *(undefined4 *)((int)apuStack_50[0] + iVar2 + 8) = 0xfffffffe;
        uVar5 = uVar5 - 1;
        iVar2 = iVar2 + 0xc;
      } while (uVar5 != 0);
    }
    if (*param_1 != 0) {
      iVar2 = 0;
      lVar4 = (ulonglong)*(uint *)(*param_1 + 4) + 1;
      do {
        iVar3 = iVar2 + *param_1;
        if (*(int *)(iVar3 + 8) != -2) {
          fn_8273D6E8(apuStack_50,param_2,iVar3 + 0xc,*(undefined4 *)(iVar3 + 0xc));
          *(undefined4 *)(iVar3 + 8) = 0xfffffffe;
        }
        lVar4 = lVar4 + -1;
        iVar2 = iVar2 + 0xc;
      } while (lVar4 != 0);
      fn_8267BE38(*param_1);
    }
    puVar1 = apuStack_50[0];
    apuStack_50[0] = (undefined4 *)0x0;
    *param_1 = (int)puVar1;
    fn_827B0A40(apuStack_50);
  }
  return;
}

