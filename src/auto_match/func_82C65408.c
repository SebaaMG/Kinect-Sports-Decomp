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
extern int fn_82C4E470();
extern int fn_82C4E5E8();
extern int fn_82CA4F48();
extern unsigned int lbl_82109160;
extern unsigned int lbl_82109161;
extern unsigned int lbl_821092F0;
extern unsigned int lbl_821092F1;


undefined8 fn_82C65408(int param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  ulonglong *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  puVar3 = *(ulonglong **)(param_1 + 0x54);
  iVar5 = (int)((*puVar3 >> 0x37) << 1);
  fn_82C4E470(puVar3,(&lbl_821092F0)[iVar5]);
  lVar9 = 3;
  bVar1 = (&lbl_821092F1)[iVar5];
  if (bVar1 == 0xff) {
    *(undefined4 *)((int)puVar3 + 0x14) = 3;
  }
  puVar3 = *(ulonglong **)(param_1 + 0x54);
  if ((*(int *)((int)puVar3 + 0x14) == 0) && (bVar1 < 0x15)) {
    uVar7 = *puVar3;
    uVar4 = *(uint *)(puVar3 + 1);
    *puVar3 = uVar7 << 1;
    *(int *)(puVar3 + 1) = (int)((ulonglong)uVar4 - 1);
    if ((longlong)((ulonglong)uVar4 - 1) < 0) {
      fn_82C4E5E8();
    }
    uVar4 = *param_2;
    uVar6 = (uint)((uVar7 >> 0x3f) << 3);
    *param_2 = uVar6 | uVar4 & 0xffffffe7;
    if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
      *param_2 = uVar6 | uVar4 & 0x7ffdffe7;
      puVar3 = *(ulonglong **)(param_1 + 0x54);
      iVar5 = (int)((*puVar3 >> 0x3a) << 1);
      fn_82C4E470(puVar3,(&lbl_82109160)[iVar5]);
      bVar2 = (&lbl_82109161)[iVar5];
      if (bVar2 == 0xff) {
        *(undefined4 *)((int)puVar3 + 0x14) = 3;
      }
      if (*(int *)(*(int *)(param_1 + 0x54) + 0x14) == 0) {
        fn_82CA4F48(param_2,5,(int)(uint)bVar1 >> 1);
        fn_82CA4F48(param_2,6,bVar1 & 1);
        lVar8 = 1;
        do {
          fn_82CA4F48(param_2,lVar8,(int)(uint)bVar2 >> ((uint)lVar9 & 0x3f) & 1);
          lVar9 = lVar9 + -1;
          lVar8 = lVar8 + 1;
        } while (-1 < lVar9);
        return 0;
      }
    }
  }
  return 1;
}

