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
extern unsigned int *auStack_70;
extern int fn_82C067C8();
extern int fn_82C07B48();
extern int fn_82C07C18();
extern int fn_82C105F0();
extern int fn_82C10950();
extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82C12A00();
extern int fn_82C12B70();
extern unsigned int iStack_48;
extern unsigned int iStack_84;
extern unsigned int iStack_90;
extern unsigned int lbl_820ECD20;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


undefined8
fn_82C08958(int *param_1,undefined8 param_2,int param_3,undefined8 param_4,longlong param_5)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iStack_90;
  char *pcStack_8c;
  uint uStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined *puStack_7c;
  undefined1 auStack_70 [40];
  int iStack_48;
  
  pcStack_8c = "WMFDecodeX86";
  if ((((param_1 == (int *)0x0) || ((int)param_4 < -1)) || (4 < (int)param_4)) ||
     (iVar1 = *param_1, iVar1 == 0)) {
    return 4;
  }
  uVar2 = fn_82C10AD0(*(undefined4 *)(iVar1 + 0x260),8,0x18,&iStack_90);
  if (-1 < (int)uVar2) {
    puVar4 = (undefined4 *)(iStack_90 + -4);
    lVar5 = 6;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uVar2 = fn_82C12B70(iStack_90,*param_1,*(undefined4 *)(iVar1 + 0x20c),auStack_70,
                              *(undefined4 *)(iVar1 + 0x260));
    if (-1 < (int)uVar2) {
      uStack_88 = (uint)(param_5 != 0);
      iStack_84 = iStack_48 << 0xb;
      uStack_80 = 1;
      puStack_7c = &lbl_820ECD20;
      iVar3 = fn_82C07B48(param_2);
      *(int *)(iVar1 + 0x228) = iVar3;
      if (iVar3 == 0) {
        uVar2 = 0xffffffff805000ba;
      }
      else {
        uVar2 = fn_82C10950(*(undefined4 *)(iVar1 + 0x260),1,&pcStack_8c);
        if ((-1 < (int)uVar2) &&
           (uVar2 = fn_82C105F0(*(undefined4 *)(iVar1 + 0x260),1,0xffffffff82c075d8,iVar1),
           -1 < (int)uVar2)) {
          *(undefined4 *)(iVar1 + 0x27c) = 1;
          uVar2 = fn_82C105F0(*(undefined4 *)(iVar1 + 0x260),2,0xffffffff82c075d8,iVar1);
          if (-1 < (int)uVar2) {
            *(undefined4 *)(iVar1 + 0x280) = 2;
            uVar2 = fn_82C105F0(*(undefined4 *)(iVar1 + 0x260),3,0xffffffff82c075d8,iVar1);
            if (-1 < (int)uVar2) {
              *(undefined4 *)(iVar1 + 0x284) = 3;
              uVar2 = fn_82C105F0(*(undefined4 *)(iVar1 + 0x260),5,0xffffffff82c075d8,iVar1);
              if (-1 < (int)uVar2) {
                *(undefined4 *)(iVar1 + 0x288) = 5;
                uVar2 = fn_82C067C8(iVar1,&uStack_80,param_3 == 0,param_4,auStack_70,
                                          &uStack_88,iStack_90);
                if (-1 < (int)uVar2) goto LAB_82c08b84;
              }
            }
          }
        }
      }
    }
  }
  if (iStack_90 != 0) {
    fn_82C12A00();
    if (*(int *)(iVar1 + 0x224) == iStack_90) {
      *(undefined4 *)(iVar1 + 0x224) = 0;
    }
    fn_82C10B28(*(undefined4 *)(iVar1 + 0x260),8,&iStack_90);
  }
LAB_82c08b84:
  uVar2 = fn_82C07C18(uVar2);
  return uVar2;
}

