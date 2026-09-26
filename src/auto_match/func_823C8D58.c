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
extern unsigned int *auStack_30;
extern int fn_822ABBF0();
extern int fn_82359558();
extern int fn_823C9098();
extern int fn_823CA0A8();
extern int fn_823CA708();
extern unsigned int iStack_4c;
extern unsigned int lbl_821AC4A4;
extern unsigned int lbl_821B2FB8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D2F48;
extern unsigned int lbl_831D2F58;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_823C8D58(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 in_r0;
  int iVar4;
  undefined8 uVar3;
  undefined4 uVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 in_vr0 [16];
  undefined1 auVar6 [16];
  undefined4 uVar9;
  undefined1 in_vr2 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  undefined **ppuStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_30 [24];
  
  iVar4 = fn_82359558(*(undefined4 *)(param_1 + 0x240),*(undefined4 *)(param_1 + 0x10));
  if (iVar4 == 0) {
    uVar3 = fn_823CA0A8(param_1);
    fn_823CA708(param_1,uVar3);
  }
  else {
    iStack_4c = 0;
    ppuStack_50 = &lbl_821B2FB8;
    fn_822ABBF0(*(undefined4 *)((*(int **)(iVar4 + 0x1c))[4] * 4 + **(int **)(iVar4 + 0x1c)),
                      &ppuStack_50);
    ppuStack_50 = &lbl_821AC4A4;
    if (iStack_4c != 0) {
      loadVectorLeftIndexed128(0xffffffff831d2d90,0x1c0);
      iVar4 = **(int **)(*(int *)(param_1 + 0x240) + 8);
      loadVectorLeftIndexed128(0xffffffff831d2d90,0x1bc);
      vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3);
      loadVectorLeftIndexed128(0xffffffff831d2d90,0x1c4);
      piVar1 = *(int **)(((uint)LZCOUNT(*(undefined4 *)(iStack_4c + 0x2c)) >> 3 & 4) + iVar4);
      loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr0,in_vr12,4,3); memcpy(auVar6, &_vt0, 16); }
      vectorRotateLeftImmediateMaskInsert128(in_vr2,auVar6,3,2);
      fn_823C9098((double)lbl_831D2F48,
                        (double)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x14),
                        (double)lbl_821CC160,iVar4,0x1c4,0xffffffff821d0000,auStack_30,&uStack_48,
                        0xffffffff821cc160);
      puVar2 = (undefined4 *)((uint)(auStack_30 + (int)in_r0) & 0xfffffff0);
      uVar5 = *puVar2;
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      *(undefined4 *)(param_1 + 0x228) = lbl_831D2F58;
      *(undefined4 *)(param_1 + 0x214) = uStack_48;
      puVar2 = (undefined4 *)(param_1 + 0x1a0U & 0xfffffff0);
      *puVar2 = uVar5;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      *(undefined4 *)(param_1 + 0x218) = uStack_44;
      *(undefined4 *)(param_1 + 0x21c) = uStack_40;
    }
  }
  return;
}

