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
extern int fn_82812268();
extern int fn_828122C0();
extern int fn_828133A8();
extern int fn_828135A0();
extern int fn_82813A78();
extern int fn_82813AE0();
extern int fn_82813D80();
extern int fn_82A1E2C0();
extern int iRam8320a3f0;
extern unsigned int lbl_8320A3FC;
extern unsigned int lbl_8320A420;
extern unsigned int lbl_8320A428;
extern unsigned int uRam8320a3f4;
extern U64 storeDoubleWordConditionalIndexed();
extern U64 storeWordConditionalIndexed();


void fn_82812C40(void)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  char in_RESERVE;
  byte bVar8;
  int aiStack_50 [2];
  undefined *puStack_48;
  undefined4 *puStack_44;
  
  if (lbl_8320A428 == 0) {
    fn_828122C0(0xffffffff8320a428);
  }
  cVar3 = fn_82812268(0xffffffff8320a428);
  if ((cVar3 != '\0') && (iRam8320a3f0 == 0)) {
    fn_828133A8(0xffffffff8320a3fc);
    puStack_48 = &lbl_8320A3FC;
    puStack_44 = &lbl_8320A420;
    uVar7 = (ulonglong)lbl_8320A420;
    bVar8 = (uVar7 == 0) << 1;
    if (uVar7 != 0) {
      aiStack_50[1] = 0;
      do {
        lVar5 = uVar7 + 0x58;
        fn_828122C0(lVar5);
        sync(1);
        sync(1);
        uVar1 = storeDoubleWordConditionalIndexed(0,0,lVar5);
        *(undefined8 *)lVar5 = uVar1;
        lVar6 = uVar7 + 0x88;
        lVar5 = uVar7 + 0x98;
        fn_828122C0(lVar5);
        sync(1);
        sync(1);
        in_RESERVE = '\x01';
        uVar1 = storeDoubleWordConditionalIndexed(0,0,lVar5);
        *(undefined8 *)lVar5 = uVar1;
        piVar4 = aiStack_50 + 1;
        lVar5 = lVar6;
        while( true ) {
          fn_82813D80(lVar5,piVar4);
          cVar3 = fn_82813AE0(lVar6,aiStack_50);
          iVar2 = aiStack_50[0];
          bVar8 = (cVar3 == '\0') << 1;
          if ((cVar3 == '\0') || (aiStack_50[0] == 0)) break;
          cVar3 = fn_82813A78(aiStack_50[0]);
          piVar4 = aiStack_50;
          lVar5 = lVar6;
          if (cVar3 == '\0') {
            *(undefined1 *)(iVar2 + 0x15) = 0;
            lVar5 = uVar7 + 0x48;
          }
        }
        while (iVar2 = (int)uVar7, *(uint *)(iVar2 + 0xd4) < *(uint *)(iVar2 + 0xd0)) {
          fn_82A1E2C0(*(undefined4 *)
                             (*(int *)(iVar2 + 0xd4) * 0x30 + *(int *)(iVar2 + 0xcc) + 4));
          do {
          } while (*(char *)(*(int *)(iVar2 + 0xd4) * 0x30 + *(int *)(iVar2 + 0xcc) + 0x2c) == '\0')
          ;
          *(int *)(iVar2 + 0xd4) = *(int *)(iVar2 + 0xd4) + 1;
          bVar8 = 0;
        }
        uVar7 = (ulonglong)*(uint *)(iVar2 + 200);
      } while (uVar7 != 0);
    }
    fn_828135A0(&puStack_48);
    iRam8320a3f0 = 1;
    do {
      if (in_RESERVE != '\0') {
        uRam8320a3f4 = storeWordConditionalIndexed((ulonglong)uRam8320a3f4 + 1,0,0xffffffff8320a3f4)
        ;
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
  }
  return;
}

