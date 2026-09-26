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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696330();
extern int fn_82696BC8();
extern int fn_82697610();
extern int fn_826A79D8();
extern int fn_826C0B08();
extern int fn_827A1800();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int lbl_82005720;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82727E00(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar6;
  undefined8 uVar3;
  longlong lVar4;
  char cVar7;
  ulonglong uVar5;
  ulonglong uVar8;
  double dVar9;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined1 auStack_a0 [8];
  double dStack_98;
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 auStack_80 [8];
  double dStack_78;
  undefined1 auStack_70 [8];
  double dStack_68;
  undefined1 auStack_60 [8];
  double dStack_58;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar6 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if (iVar6 == 4) {
      uVar8 = 0;
      iVar6 = *(int *)(param_1 + 8) + -0x68;
      if (*(int *)(param_1 + 8) == 0) {
        iVar6 = 0;
      }
      if (0 < *(int *)(param_1 + 0x1c)) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar3 = fn_826957D0(param_1,0);
        lVar4 = fn_82697610(uVar3,uVar1);
        if ((lVar4 < 0) ||
           (cVar7 = fn_827A1800(*(undefined4 *)(iVar6 + 0xa0),lVar4,&uStack_50), cVar7 == '\0'
           )) {
          puVar2 = *(undefined1 **)(param_1 + 4);
          fn_826959C8(puVar2);
          *puVar2 = 0;
        }
        else {
          uVar5 = fn_8267B890(*(undefined4 *)
                                     (*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x30,0);
          if ((uVar5 & 0xffffffff) != 0) {
            uVar8 = fn_826C0B08(uVar5,*(undefined4 *)(param_1 + 0x18));
          }
          lVar4 = uVar8 + 0x10;
          auStack_b0[0] = 3;
          dStack_a8 = (double)uStack_48 * lbl_82005720;
          dVar9 = lbl_82005720;
          fn_826A79D8(lVar4,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820110f8,
                            auStack_b0);
          fn_82696330(auStack_b0);
          auStack_a0[0] = 3;
          dStack_98 = (double)uStack_44 * dVar9;
          fn_826A79D8(lVar4,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820110f0,
                            auStack_a0);
          fn_82696330(auStack_a0);
          auStack_90[0] = 3;
          dStack_88 = (double)uStack_50 * dVar9;
          fn_826A79D8(lVar4,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff8200eaf0,
                            auStack_90);
          fn_82696330(auStack_90);
          auStack_80[0] = 3;
          dStack_78 = (double)uStack_4c * dVar9;
          fn_826A79D8(lVar4,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff8200eae8,
                            auStack_80);
          fn_82696330(auStack_80);
          auStack_70[0] = 3;
          dStack_68 = (double)(longlong)iStack_3c * dVar9;
          fn_826A79D8(lVar4,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff820110e8,
                            auStack_70);
          fn_82696330(auStack_70);
          auStack_60[0] = 3;
          dStack_58 = (double)(longlong)iStack_40 * dVar9;
          fn_826A79D8(lVar4,(ulonglong)*(uint *)(param_1 + 0x18) + 0x78,0xffffffff821ce358,
                            auStack_60);
          fn_82696330(auStack_60);
          fn_82696BC8(*(undefined4 *)(param_1 + 4),uVar8);
          if ((uVar8 & 0xffffffff) != 0) {
            fn_826824B0(uVar8);
          }
        }
      }
    }
  }
  return;
}

