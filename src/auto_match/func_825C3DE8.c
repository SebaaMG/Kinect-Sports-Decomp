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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int fStack_80;
extern int fn_82560690();
extern int fn_82577EE0();
extern unsigned int lbl_82192510;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825C3DE8(int param_1,int param_2)

{
  undefined8 in_r0;
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  double dVar8;
  undefined1 in_vr0 [16];
  undefined1 in_vr11 [16];
  undefined1 auVar9 [16];
  undefined1 in_vr12 [16];
  undefined1 in_vr13 [16];
  float fStack_80;

  uVar1 = ZEXT48(&stack0x00000000);
  uVar2 = fn_82560690(0);
  dVar8 = (double)lbl_82192510;
  uVar5 = 0;
  puVar7 = (uint *)(param_1 + 8);
  lVar6 = 2;
  do {
    uVar4 = *puVar7;
    if (uVar5 < uVar2) {
      if ((uVar4 != 0) && (puVar7[2] != 0)) {
        uVar4 = *puVar7;
        loadVectorLeftIndexed128(in_r0,uVar1 - 0x7c);
        loadVectorLeftIndexed128(in_r0,uVar1 - 0x78);
        loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
        loadVectorLeftIndexed128(in_r0,uVar1 - 0x74);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(in_vr13, &_vt0, 16); }{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr11,in_vr12,4,3); memcpy(auVar9, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar9,in_vr13,3,2); memcpy(in_vr11, &_vt2, 16); }
        memcpy((void *)((const void *)(uVar4 + 0xa0 & 0xfffffff0)), in_vr11, 16);
        if ((*(int *)(param_2 + 0x8c4) == 0) ||
           (iVar3 = fn_82577EE0(*(int *)(param_2 + 0x8c4),(ulonglong)*puVar7 + 0xa0,
                                      uVar1 - 0x80,0,uVar4,uVar1 - 0x78,uVar1 - 0x7c,uVar1 - 0x74),
           iVar3 == 0)) {
          *(undefined4 *)(*puVar7 + 400) = 0;
          uVar4 = puVar7[2];
          goto LAB_825c3fa8;
        }
        fStack_80 = (float)((double)fStack_80 - dVar8);
        if (fStack_80 < *(float *)(*puVar7 + 0xa4)) {
          *(float *)(*puVar7 + 0xa4) = fStack_80;
        }
        memcpy((void *)(in_vr0), (const void *)(*puVar7 + 0xa0 & 0xfffffff0), 16);
        memcpy((void *)((const void *)(puVar7[2] + 0xa0 & 0xfffffff0)), in_vr0, 16);
        *(undefined4 *)(*puVar7 + 400) = 1;
        *(undefined4 *)(puVar7[2] + 400) = 1;
      }
    }
    else {
      if (uVar4 != 0) {
        *(undefined4 *)(uVar4 + 400) = 0;
      }
      uVar4 = puVar7[2];
      if (uVar4 != 0) {
LAB_825c3fa8:
        *(undefined4 *)(uVar4 + 400) = 0;
      }
    }
    lVar6 = lVar6 + -1;
    uVar5 = uVar5 + 1;
    puVar7 = puVar7 + 1;
    if (lVar6 == 0) {
      return;
    }
  } while( true );
}
