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
extern int fn_82522DF8();
extern int fn_82522ED8();
extern int fn_82598E80();
extern int fn_825990F0();
extern int fn_82599308();
extern int fn_8259A230();
extern int fn_827D7CE0();
extern int fn_827DAD60();
extern int fn_82A1BB18();
extern int fn_82A1E108();
extern int fn_82A1E810();
extern int fn_82BFE128();
extern int fn_82BFE460();
extern int fn_82BFE530();
extern int fn_82CE5420();
extern int fn_82CE5430();
extern int fn_82CE7310();
extern int fn_82CE7888();
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8326B7C8;
extern unsigned int lbl_8326C3A8;
extern unsigned int lbl_83296E18;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_825994A0(void)

{
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uStack_70;
  undefined4 uStack_6c;
  
  uVar8 = 0;
  fn_82A1BB18();
  fn_8259A230();
  do {
    if (uVar8 != 0) {
      fn_82522ED8(uVar8);
    }
    fn_82A1BB18();
    iVar3 = fn_8259A230();
    uStack_70 = 0;
    uVar8 = fn_82BFE530((&lbl_83296E18)[iVar3],&uStack_70);
    uVar8 = ((uVar8 & 0xffffffff) >> 0x1f) - 1 & (ulonglong)uStack_70;
    if (uVar8 != 0) {
      sync(1);
    }
    fn_82A1E810(lbl_8326C3A8);
    if (uVar8 != 0) {
      iVar3 = *(int *)uVar8;
      if (iVar3 == 6) {
        puVar6 = (undefined4 *)fn_82599308();
        *puVar6 = 0;
        lVar2 = fn_82599308();
        if (lVar2 != -8) {
          fn_82CE5430();
        }
        piVar5 = (int *)fn_82CE7310();
        iVar3 = *piVar5;
        lVar2 = fn_82599308();
        (**(code **)(iVar3 + 0xc))(piVar5,lVar2 + 8,0xffffffff821c7b20,uStack_6c);
        lVar2 = fn_82599308();
        lVar2 = lVar2 + 8;
LAB_82599630:
        fn_82CE7888(lVar2);
      }
      else {
        if (iVar3 != 7) {
          if (iVar3 != 8) {
            if (iVar3 == 10) {
              do {
                iVar3 = fn_827D7CE0(lbl_83265A24);
                iVar4 = fn_827DAD60(lbl_8326B7C8);
                fn_82A1E108(0);
              } while (iVar4 + iVar3 != 0);
            }
            else {
              fn_82598E80(uVar8);
            }
            goto LAB_8259966c;
          }
          piVar5 = (int *)fn_82CE7310();
          iVar3 = *piVar5;
          uVar1 = fn_82CE5420();
          (**(code **)(iVar3 + 0xc))(piVar5,uVar1,0xffffffff821c7b20,uStack_6c);
          lVar2 = fn_82CE5420();
          goto LAB_82599630;
        }
        fn_825990F0();
      }
      puVar6 = (undefined4 *)fn_82522DF8(0x40);
      *puVar6 = 5;
      fn_82A1BB18();
      uVar7 = fn_8259A230();
      puVar6[1] = uVar7;
      puVar6[2] = 0;
      sync(1);
      fn_82BFE128(lbl_83296E18,puVar6);
    }
LAB_8259966c:
    fn_82A1BB18();
    iVar3 = fn_8259A230();
    if ((&lbl_83296E18)[iVar3] == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = fn_82BFE460();
    }
    if (iVar3 != 0) {
      if (uVar8 != 0) {
        fn_82522ED8(uVar8);
      }
      return;
    }
  } while( true );
}

