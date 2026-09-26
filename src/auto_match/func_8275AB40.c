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
extern unsigned int *auStack_78;
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_8268CC30();
extern int fn_826D6290();
extern int fn_82759580();
extern int fn_8275A528();
extern int fn_82779470();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_8275AB40(double param_1,byte *param_2,byte *param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar6;
  ulonglong uVar5;
  int iVar7;
  uint uVar8;
  double dVar9;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [8];
  ulonglong uStack_70;
  ulonglong uStack_68;
  longlong lStack_60;
  
  bVar2 = *param_3;
  *param_2 = bVar2;
  if (bVar2 == 0) {
    uStack_80 = *(undefined4 *)(param_4 + 4);
    uStack_7c = *(undefined4 *)(param_3 + 4);
    puVar6 = (undefined4 *)fn_82779470(auStack_78,&uStack_7c,&uStack_80);
    *(undefined4 *)(param_2 + 4) = *puVar6;
  }
  else {
    if ((bVar2 & 0x10) == 0) {
      if ((bVar2 & 0x40) != 0) {
        fn_826D6290(param_2 + 8,param_3 + 8);
      }
    }
    else {
      iVar3 = *(int *)(param_3 + 4);
      iVar4 = *(int *)(param_4 + 4);
      if (*(int *)(param_2 + 4) != 0) {
        fn_8267C4F0();
      }
      uVar5 = fn_8267B890(lbl_831E7E64,0x14,0);
      if ((uVar5 & 0xffffffff) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = fn_8275A528(uVar5,*param_3,*(undefined2 *)(iVar3 + 10),param_3[1] & 1);
      }
      *(int *)(param_2 + 4) = iVar7;
      if ((iVar7 != 0) && (uVar8 = 0, *(short *)(iVar7 + 10) != 0)) {
        iVar7 = 0;
        dVar9 = (double)lbl_82002C5C;
        do {
          uStack_68 = (ulonglong)*(byte *)(iVar7 + *(int *)(iVar3 + 0xc));
          uStack_70 = (ulonglong)*(byte *)(iVar7 + *(int *)(iVar4 + 0xc));
          iVar1 = (int)((double)(float)((double)(float)((double)uStack_70 - (double)uStack_68) *
                                        param_1 + (double)uStack_68) + dVar9);
          lStack_60 = (longlong)iVar1;
          *(char *)(*(int *)(*(int *)(param_2 + 4) + 0xc) + iVar7) = (char)iVar1;
          uStack_7c = *(undefined4 *)(iVar7 + *(int *)(iVar4 + 0xc) + 4);
          uStack_80 = *(undefined4 *)(iVar7 + *(int *)(iVar3 + 0xc) + 4);
          iVar1 = *(int *)(*(int *)(param_2 + 4) + 0xc) + iVar7;
          puVar6 = (undefined4 *)fn_82779470(param_1,auStack_78,&uStack_80,&uStack_7c);
          uVar8 = uVar8 + 1;
          iVar7 = iVar7 + 8;
          *(undefined4 *)(iVar1 + 4) = *puVar6;
        } while (uVar8 < *(ushort *)(*(int *)(param_2 + 4) + 10));
      }
      *(float *)(*(int *)(param_2 + 4) + 0x10) =
           (float)((double)(float)((double)*(float *)(iVar4 + 0x10) -
                                  (double)*(float *)(iVar3 + 0x10)) * param_1 +
                  (double)*(float *)(iVar3 + 0x10));
      fn_82759580(param_2 + 8,0);
    }
    fn_8268CC30(param_1,param_2 + 0x10,param_3 + 0x10,param_4 + 0x10);
  }
  return;
}

